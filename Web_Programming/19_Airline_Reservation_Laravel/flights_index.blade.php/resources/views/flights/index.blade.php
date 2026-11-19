<!DOCTYPE html>
<html lang="en"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>Airline Reservation</title><style>body{font:16px Arial;max-width:900px;margin:30px auto;padding:0 15px}table{border-collapse:collapse;width:100%}td,th{border:1px solid #aaa;padding:9px;text-align:left}form{margin-top:25px}label{display:block;margin:10px 0}input,select{padding:7px;max-width:100%}.success{color:green}</style></head>
<body><h1>Airline Reservation System</h1>
@if(session('success'))<p class="success">{{ session('success') }}</p>@endif
@if($errors->any())<ul style="color:red">@foreach($errors->all() as $error)<li>{{ $error }}</li>@endforeach</ul>@endif
<h2>Available Demo Flights</h2><table><tr><th>Flight</th><th>From</th><th>To</th><th>Date</th><th>Fare (INR)</th></tr>
@foreach($flights as $flight)<tr><td>{{ $flight['code'] }}</td><td>{{ $flight['from'] }}</td><td>{{ $flight['to'] }}</td><td>{{ $flight['date'] }}</td><td>{{ number_format($flight['price'],2) }}</td></tr>@endforeach
</table>
<h2>Book a Flight</h2>
<form method="POST" action="{{ route('reservations.store') }}">@csrf
<label>Flight: <select name="flight_code" required>@foreach($flights as $flight)<option value="{{ $flight['code'] }}">{{ $flight['code'] }} – {{ $flight['from'] }} to {{ $flight['to'] }}</option>@endforeach</select></label>
<label>Passenger name: <input name="passenger_name" required maxlength="120"></label>
<label>Email: <input type="email" name="email" required></label>
<label>Number of seats: <input type="number" name="seats" min="1" max="6" value="1" required></label>
<button type="submit">Reserve</button></form>
</body></html>
