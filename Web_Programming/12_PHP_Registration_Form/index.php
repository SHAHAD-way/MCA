<?php
$errors = [];
$success = false;
$name = $email = $phone = "";
if ($_SERVER["REQUEST_METHOD"] === "POST") {
    $name = trim($_POST["name"] ?? "");
    $email = trim($_POST["email"] ?? "");
    $phone = trim($_POST["phone"] ?? "");
    $password = $_POST["password"] ?? "";
    if (strlen($name) < 3) $errors[] = "Name must contain at least 3 characters.";
    if (!filter_var($email, FILTER_VALIDATE_EMAIL)) $errors[] = "Enter a valid email.";
    if (!preg_match('/^[0-9]{10}$/', $phone)) $errors[] = "Phone must contain 10 digits.";
    if (strlen($password) < 6) $errors[] = "Password must contain at least 6 characters.";
    if (!$errors) $success = true; // Demonstration only: no data is stored.
}
function h($value) { return htmlspecialchars($value, ENT_QUOTES, "UTF-8"); }
?>
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><title>PHP Registration</title></head>
<body><h1>PHP Registration Form</h1>
<?php if ($errors): ?><div style="color:red"><ul><?php foreach ($errors as $e): ?><li><?= h($e) ?></li><?php endforeach; ?></ul></div><?php endif; ?>
<?php if ($success): ?><p style="color:green">Registration details validated successfully.</p><?php endif; ?>
<form method="post">
<p>Name: <input name="name" value="<?= h($name) ?>" required></p>
<p>Email: <input type="email" name="email" value="<?= h($email) ?>" required></p>
<p>Phone: <input name="phone" value="<?= h($phone) ?>" maxlength="10" required></p>
<p>Password: <input type="password" name="password" required></p>
<button type="submit">Register</button>
</form></body></html>
