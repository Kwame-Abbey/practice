import colors from "colors";

// Logger Middleware
const logger = (req, res, next) => {
  const methodColors = {
    GET: 'green',
    POST: 'blue',
    PUT: 'yellow',
    DELETE: 'red'
  }

  const color = methodColors[req.method]
  console.log(
    `${req.method} ${req.protocol}://${req.get("host")}${req.originalUrl}`[color]
  );
  next();
};

export { logger };