<?php
require __DIR__ . "/db.php";
$results=[]; $searched=false;
if ($_SERVER["REQUEST_METHOD"]==="GET" && isset($_GET["title"])) {
  $searched=true; $title=trim($_GET["title"]);
  if ($title!=="") {
    $stmt=$pdo->prepare("SELECT accession_no,title,authors,edition,publisher FROM books WHERE title LIKE :title ORDER BY title");
    $stmt->execute([":title"=>"%".$title."%"]); $results=$stmt->fetchAll();
  }
}
?>
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><title>Search Books</title></head>
<body><h1>Book Information Search</h1>
<form method="get"><label>Enter book title: <input name="title" value="<?= htmlspecialchars($_GET["title"]??"",ENT_QUOTES,"UTF-8") ?>" required></label>
<button type="submit">Search</button></form>
<?php if($searched): ?><h2>Search Results</h2>
<?php if(!$results): ?><p>No books found for the given title.</p><?php else: ?>
<table border="1" cellpadding="8"><tr><th>Accession Number</th><th>Title</th><th>Authors</th><th>Edition</th><th>Publisher</th></tr>
<?php foreach($results as $book): ?><tr>
<?php foreach($book as $value): ?><td><?= htmlspecialchars($value,ENT_QUOTES,"UTF-8") ?></td><?php endforeach; ?>
</tr><?php endforeach; ?></table><?php endif; ?><?php endif; ?>
</body></html>
