<?php
// Update these values to match your local MySQL configuration.
$host = "localhost"; $dbname = "web_programming_lab"; $username = "root"; $password = "";
$dsn = "mysql:host=$host;dbname=$dbname;charset=utf8mb4";
$options = [PDO::ATTR_ERRMODE => PDO::ERRMODE_EXCEPTION, PDO::ATTR_DEFAULT_FETCH_MODE => PDO::FETCH_ASSOC];
try { $pdo = new PDO($dsn, $username, $password, $options); }
catch (PDOException $e) { http_response_code(500); exit("Database connection failed. Check db.php and import database.sql."); }
