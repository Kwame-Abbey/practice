import express from "express";
import {
  getPosts,
  getPost,
  updatePost,
  deletePost,
  addPost,
} from "../controllers/postController.js";
const router = express.Router();

// GET all posts
router.get("/", getPosts);

// GET a single posts
router.get("/:id", getPost);

// ADD new post
router.post("/", addPost);

// Update a post
router.put("/:id", updatePost);

// DELETE a post
router.delete("/:id", deletePost);

export default router;
