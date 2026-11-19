# Program 20 – Test the application on an Application Server

Use the PHP web application from Program 17 or the Laravel application from Program 19.

## Test using XAMPP Apache (PHP)
1. Copy the application folder into `xampp/htdocs`.
2. Start Apache (and MySQL if the application uses a database).
3. Open the application URL in a browser.
4. Verify that the home page loads without PHP warnings or server errors.
5. Submit valid and invalid form data and check the response.
6. For database applications, verify that records can be inserted/read as expected.
7. Check the browser developer console and Apache/PHP error logs.
8. Test at desktop and mobile viewport widths.

## Test using Laravel's application server
From the Laravel project directory, run `php artisan serve`, then visit the URL shown
in the terminal (normally `http://127.0.0.1:8000`). Run `php artisan migrate` first.

## Test checklist
- [ ] Server starts successfully.
- [ ] Correct application URL opens.
- [ ] All pages and navigation links work.
- [ ] Form validation rejects missing/invalid values.
- [ ] Valid form submission displays a success response.
- [ ] Database connection and retrieval work (where applicable).
- [ ] No unexpected PHP/Laravel errors.
- [ ] Layout remains usable on mobile and desktop.
