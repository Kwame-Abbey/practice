const express = require("express");
const {
  getSignup,
  postSignup,
  getLogin,
  postLogin,
  getLogout,
} = require("../controllers/authControllers");
const router = express.Router();

router.get("/signup", getSignup);
router.get("/login", getLogin);
router.post("/signup", postSignup);
router.post("/login", postLogin);
router.get("/logout", getLogout);

module.exports = router;
