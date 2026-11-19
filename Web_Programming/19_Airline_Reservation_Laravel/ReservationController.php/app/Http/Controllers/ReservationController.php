<?php
namespace App\Http\Controllers;

use App\Models\Reservation;
use Illuminate\Http\Request;

class ReservationController extends Controller
{
    public function index()
    {
        $flights = [
            ['code'=>'WP101','from'=>'Kozhikode','to'=>'Bengaluru','date'=>now()->addDays(2)->toDateString(),'price'=>3500],
            ['code'=>'WP202','from'=>'Kochi','to'=>'Mumbai','date'=>now()->addDays(3)->toDateString(),'price'=>4800],
            ['code'=>'WP303','from'=>'Thiruvananthapuram','to'=>'Delhi','date'=>now()->addDays(4)->toDateString(),'price'=>6200],
        ];
        return view('flights.index', compact('flights'));
    }

    public function store(Request $request)
    {
        $validated = $request->validate([
            'flight_code'=>'required|string|max:20',
            'passenger_name'=>'required|string|max:120',
            'email'=>'required|email|max:150',
            'seats'=>'required|integer|min:1|max:6',
        ]);
        $reservation = Reservation::create($validated);
        return redirect()->route('flights.index')->with('success',
            'Reservation created. Booking reference: '.$reservation->id);
    }
}
