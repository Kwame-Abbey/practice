let posts = [
  { id: 1, title: "Post One" },
  { id: 2, title: "Post Two" },
  { id: 3, title: "Post Three" },
];

/**
 * Description: Get all posts
 * Route: GET /api/posts
 */
const getPosts = (req, res) => {
  const limit = parseInt(req.query.limits);
  if (limit) {
    return res.status(200).json(posts.slice(0, limit));
  }
  res.status(200).json(posts);
};

/**
 * Description: Get a post
 * Route: GET /api/posts/:id
 */
const getPost = (req, res, next) => {
  const id = req.params.id;
  const post = posts.find((post) => post.id === parseInt(id));
  if (!post) {
    const error = new Error(`A post with the id of ${id} was not found`);
    error.status = 404;
    return next(error);
  }
  res.status(200).json(post);
};

/**
 * Description: Add a post
 * Route: POST /api/posts
 */
const addPost = (req, res, next) => {
  const { title } = req.body;
  const newPost = {
    id: posts.length + 1,
    title: title,
  };
  if (!newPost.title) {
    const error = new Error(`Please include a title`);
    error.status = 400;
    return next(error);
  }
  posts.push(newPost);
  res.status(201).json({ posts });
};

/**
 * Description: Update a posts
 * Route: PUT /api/posts/:id
 */
const updatePost = (req, res, next) => {
  const { title } = req.body;
  const id = parseInt(req.params.id);
  const post = posts.find((post) => post.id === id);
  if (!post) {
    const error = new Error(`A post with the id of ${id} was not found`);
    error.status = 404;
    return next(error);
  }
  post.title = title;
  res.status(200).json(posts);
};

/**
 * Description: Delete a post
 * Route: DELETE /api/posts/:id
 */
const deletePost = (req, res, next) => {
  const id = parseInt(req.params.id);
  const post = posts.find((post) => post.id === id);
  if (!post) {
    const error = new Error(`A post with the id of ${id} was not found`);
    error.status = 404;
    return next(error);
  }
  const index = posts.findIndex((post) => post.id === id);
  if (index > -1) {
    posts.splice(index, 1);
  }
  res.status(200).json(posts);
};

export { getPosts, getPost, addPost, updatePost, deletePost };
