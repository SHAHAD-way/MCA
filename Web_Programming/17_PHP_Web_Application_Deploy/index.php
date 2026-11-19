<?php
// A small deployable PHP web application landing page.
$features = ["Responsive HTML interface", "PHP server-side processing", "Input validation", "Ready for Apache hosting"];
$name = trim($_POST["name"] ?? "");
$message = "";
if ($_SERVER["REQUEST_METHOD"] === "POST") {
    $message = $name !== "" ? "Welcome, " . htmlspecialchars($name, ENT_QUOTES, "UTF-8") . "!" : "Please enter your name.";
}
?>
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>PHP Web Application</title><style>body{font:16px Arial;max-width:720px;margin:40px auto;padding:0 16px;line-height:1.6}li{margin:8px 0}</style></head>
<body><h1>My PHP Web Application</h1><p>This is a simple HTML and PHP application.</p>
<h2>Features</h2><ul><?php foreach($features as $feature): ?><li><?= htmlspecialchars($feature) ?></li><?php endforeach; ?></ul>
<form method="post"><label>Enter your name: <input name="name" value="<?= htmlspecialchars($name) ?>" required></label>
<button type="submit">Submit</button></form><p><?= $message ?></p>
</body></html>
