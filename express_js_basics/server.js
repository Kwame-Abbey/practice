import express from 'express'
import path from 'path'
import { fileURLToPath} from 'url'
import router from './routes/posts.js';
import { logger } from './middlewares/logger.js';
import errorHandler from './middlewares/errorHandler.js';
import notFoundHandler from './middlewares/notFound.js';

// Get the directory name
const __filename = fileURLToPath(import.meta.url);
const __dirname = path.dirname(__filename);

const app = express();
const port = process.env.PORT || 3000;

// Body Parser middleware
app.use(express.urlencoded({extended: false}));
app.use(express.json());

// logger middleware
app.use(logger);

// Setup static files
app.use(express.static(path.join(__dirname, 'public')));

// Routes
app.use('/api/posts', router);

// Catch all Middlewares
app.use(notFoundHandler);

// Error Handler middleware
app.use(errorHandler);

app.listen(port, () => {
  console.log(`Server is running on port ${port}`);
});
