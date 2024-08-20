const express = require("express");
const bcrypt = require("bcrypt");
const saltRounds = 10;

const port = process.env.PORT || 8000;
const users = [];

const app = express();

// Middlewares
app.use(express.json());
app.use(express.urlencoded({ extended: true }));

// GET all users
app.get("/users", (req, res) => {
  res.json(users);
});

// Create new user
app.post("/users", async (req, res) => {
  const { name, password } = req.body;

  if (!name || !password) {
    return res.json({ msg: "Please Fill all fields" });
  }

  try {
    // const salt = await bcrypt.genSalt(saltRounds);
    const hashed_password = await bcrypt.hash(password, 10);
    // console.log(salt);
    console.log(hashed_password);
    const user = {
      name: name,
      password: hashed_password,
    };
    users.push(user);
    return res.status(201).json(users);
  } catch (error) {
    console.log(error);
  }
});

app.post("/users/login", (req, res) => {
  const { name, password } = req.body;
  const user = users.find((user) => user.name === name);
  if (!user) {
    return res.status(404).json({ msg: "Incorrect username" });
  }
  if (bcrypt.compare(password, user.password)) {
    return res.status(200).send("Success");
  }
  return res.status(403).json({ msg: "Forbidden" });
});

app.listen(port, () => {
  console.log(`Server is running on port ${port}`);
});
