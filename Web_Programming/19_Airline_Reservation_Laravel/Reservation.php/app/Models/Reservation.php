<?php
namespace App\Models;

use Illuminate\Database\Eloquent\Model;

class Reservation extends Model
{
    protected $fillable = ['flight_code', 'passenger_name', 'email', 'seats'];
}
