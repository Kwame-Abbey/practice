const express = require("express");
const colors = require("colors");
const jwt = require("jsonwebtoken");

const posts = [
  {
    username: "Kyle",
    title: "Post 1",
  },
  {
    username: "Jim",
    title: "Post 2",
  },
];

const app = express();
const port = process.env.PORT || 8000;

// Middlewares
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.get("/posts", (req, res) => {
  res.json(posts);
});

app.post("/login", (req, res) => {
  // Authenticate User
  const username = req.body.username;
  const user = { name: username };

  const accessToken = jwt.sign(user, process.env.ACCESS_TOKEN_SECRET);
  res.json({ accessToken: accessToken });
});

app.listen(port, () => {
  console.log(`Server is running on port ${port}`["red"]);
});
