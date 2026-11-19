<?php
use Illuminate\Support\Facades\Route;
use App\Http\Controllers\ReservationController;

Route::get('/flights', [ReservationController::class, 'index'])->name('flights.index');
Route::post('/reservations', [ReservationController::class, 'store'])->name('reservations.store');
