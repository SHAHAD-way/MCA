<?php
require __DIR__ . "/db.php";
$stmt = $pdo->query("SELECT id, name, email, course FROM students ORDER BY id");
$students = $stmt->fetchAll();
?>
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><title>Student Records</title></head>
<body><h1>Student Details from MySQL Database</h1>
<?php if (!$students): ?><p>No records found.</p><?php else: ?>
<table border="1" cellpadding="8"><tr><th>ID</th><th>Name</th><th>Email</th><th>Course</th></tr>
<?php foreach ($students as $s): ?><tr><td><?= (int)$s["id"] ?></td>
<td><?= htmlspecialchars($s["name"]) ?></td><td><?= htmlspecialchars($s["email"]) ?></td>
<td><?= htmlspecialchars($s["course"]) ?></td></tr><?php endforeach; ?>
</table><?php endif; ?></body></html>
