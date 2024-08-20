const express = require("express");
const mongoose = require("mongoose");
const authRoutes = require("./routes/authRoutes");
const colors = require("colors");
const cookieParser = require("cookie-parser");
const { requireAuth } = require("./middlewares/authMiddleware");

const port = process.env.PORT || 3000;

const app = express();

// Set view engine
app.set("view engine", "ejs");

// Middlewares
app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(express.static("public"));
app.use(authRoutes);
app.use(cookieParser());

const connectDB = async () => {
  try {
    const conn = await mongoose.connect(process.env.MONGO_URI);
    console.log(`MongoDB Connected: ${conn.connection.host}`);
  } catch (error) {
    console.error(`Error: ${error.message}`);
    process.exit(1);
  }
};

connectDB();

app.get("/", (req, res) => res.render("home"));
app.get("/smoothies", requireAuth, (req, res) => res.render("smoothies"));

// Cookies tutorials
// app.get('/set-cookies', (req, res) => {
//   // res.setHeader('Set-Cookie', 'newUser=value');
//   res.cookie('newUser', false);
//   res.cookie('isEmployee', true, { maxAge: 1000 * 60 * 60 * 34, httpOnly: true});

//   res.send('You got the cookies');
// });

// app.get('/read-cookies', (req, res) => {
//   const cookies = req.cookies;
//   console.log(cookies);

//   res.json(cookies);

// });

app.listen(port, () => {
  console.log(`Server running on port ${port}`["red"]);
});
