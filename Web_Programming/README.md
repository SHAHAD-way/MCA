
# Web Programming Lab Programs

This folder contains all 20 lab experiments from the supplied list.

## Programs
| No. | Experiment | Main file/type |
|---|---|---|
| 01 | HTML tags demonstration | `index.html` |
| 02 | Links, images, tables and page links | `index.html` |
| 03 | Floating, navigation and mixed frames | `index.html` |
| 04 | Inline, internal and external CSS | `index.html`, `style.css` |
| 05 | HTML registration form | `index.html` |
| 06 | JavaScript String and Math predefined functions | `index.html` |
| 07 | Calendar for a user-entered year | `index.html` |
| 08 | Registration form validation using JavaScript | `index.html` |
| 09 | Change background colour on every button click | `index.html` |
| 10 | Change image and text on mouseover | `index.html` |
| 11 | Online examination using JavaScript | `index.html` |
| 12 | PHP registration form with validation | `index.php` |
| 13 | Electricity bill from user input and tariff | `index.php` |
| 14 | Store, display and sort student names using arrays | `index.php` |
| 15 | Indian cricket players displayed in an HTML table | `index.php` |
| 16 | Connect to database and retrieve table data | `index.php`, `database.sql` |
| 17 | HTML/PHP web application and deployment | `index.php`, `README.md` |
| 18 | Book information using PHP and MySQL | `index.php`, `database.sql` |
| 19 | Airline reservation system using Laravel | Laravel project files |
| 20 | Test an application on an application server | `README.md`, `test-checklist.md` |

## Running HTML / JavaScript programs (01–11)
Open the relevant `index.html` file in a browser. No server is required for these exercises.

## Running PHP programs (12–18)
1. Install XAMPP (or another PHP + MySQL stack).
2. Copy the `Web_Programming` folder into XAMPP's `htdocs` directory.
3. Start Apache. Start MySQL for programs 16 and 18.
4. Open `http://localhost/Web_Programming/12_PHP_Registration_Form/`.
5. For database programs, import the corresponding `database.sql` using phpMyAdmin and update `db.php` if your MySQL username/password differs.

Each program is in its own folder and uses `index.html` or `index.php` as its entry point.

## Program 19 – Laravel airline reservation
Requires PHP, Composer, and a Laravel application. Follow the setup instructions in
`19_Airline_Reservation_Laravel/README.md`. The supplied files are a small Laravel
implementation (routes, migration, model, controller and Blade view).

## Notes
- The tariff slabs in Program 13 are example rates because the question sheet does not specify a tariff table. Change the rates in the PHP file if your instructor provides different rates.
- The online examination in Program 11 is a demonstration quiz with sample questions.
- Never deploy database examples with default credentials or public error display. Use proper credentials and validation for real applications.
