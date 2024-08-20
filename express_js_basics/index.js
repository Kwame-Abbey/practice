const express = require('express');

const app = express();
// const port = process.env.PORT

app.use(express.static('public'));

app.get('/', (req, res) => {
    console.log(req.url);
    res.sendFile('index.html');
})

app.listen(5000, () => {
    console.log(`Server is running on port 8000`);
})