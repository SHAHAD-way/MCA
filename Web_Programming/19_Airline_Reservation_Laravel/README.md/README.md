# Program 19 – Airline Reservation System (Laravel)

This exercise uses the Laravel framework. Create a fresh Laravel application first:

```bash
composer create-project laravel/laravel airline-reservation
cd airline-reservation
```

Copy the supplied `routes/web.php`, controller, model, migration and Blade view into
the matching locations in the new Laravel project. Configure the database in `.env`,
then run:

```bash
php artisan migrate
php artisan serve
```

Open `http://127.0.0.1:8000/flights`. The demo supports flight search, passenger
details and reservation creation. It is a teaching example; it does not connect to
real airline inventory or payment systems.
