<?php
$bill = null; $units = 0; $error = "";
// Example domestic tariff slabs; replace with the tariff prescribed by your institution/utility.
function calculateBill($units) {
    $slabs = [[50, 1.50], [50, 2.50], [100, 4.00], [100, 5.00], [INF, 6.50]];
    $remaining = $units; $total = 0;
    foreach ($slabs as [$limit, $rate]) {
        if ($remaining <= 0) break;
        $used = min($remaining, $limit);
        $total += $used * $rate; $remaining -= $used;
    }
    return $total;
}
if ($_SERVER["REQUEST_METHOD"] === "POST") {
    $units = filter_input(INPUT_POST, "units", FILTER_VALIDATE_INT);
    if ($units === false || $units === null || $units < 0) $error = "Enter a valid non-negative whole number of units.";
    else $bill = calculateBill($units);
}
?>
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><title>Electricity Bill</title></head>
<body><h1>Electricity Bill Calculator</h1>
<form method="post"><label>Units consumed: <input type="number" name="units" min="0" value="<?= htmlspecialchars((string)$units) ?>" required></label>
<button type="submit">Calculate Bill</button></form>
<?php if ($error): ?><p style="color:red"><?= htmlspecialchars($error) ?></p><?php endif; ?>
<?php if ($bill !== null): ?><h2>Bill Details</h2><p>Units consumed: <?= (int)$units ?></p><p>Energy charge: ₹<?= number_format($bill, 2) ?></p><?php endif; ?>
<p><small>Sample progressive tariff: first 50 units ₹1.50/unit; next 50 ₹2.50; next 100 ₹4.00; next 100 ₹5.00; remaining ₹6.50.</small></p>
</body></html>
