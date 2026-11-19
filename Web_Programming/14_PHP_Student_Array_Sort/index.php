<?php
$students = ["Anu", "Rahul", "Meera", "Arun", "Zoya"];
$ascending = $students; sort($ascending, SORT_NATURAL | SORT_FLAG_CASE);
$reverse = $students; rsort($reverse, SORT_NATURAL | SORT_FLAG_CASE);
?>
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><title>Student Array</title></head>
<body><h1>Student Names Using PHP Arrays</h1>
<h2>Original array (print_r)</h2><pre><?php print_r($students); ?></pre>
<h2>Sorted using sort()</h2><pre><?php print_r($ascending); ?></pre>
<h2>Reverse sorted using rsort()</h2><pre><?php print_r($reverse); ?></pre>
</body></html>
