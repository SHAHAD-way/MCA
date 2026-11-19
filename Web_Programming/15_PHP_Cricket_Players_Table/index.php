<?php
$players = [
 ["name"=>"Rohit Sharma","role"=>"Batter","team"=>"India"],
 ["name"=>"Virat Kohli","role"=>"Batter","team"=>"India"],
 ["name"=>"Jasprit Bumrah","role"=>"Bowler","team"=>"India"],
 ["name"=>"Ravindra Jadeja","role"=>"All-rounder","team"=>"India"],
 ["name"=>"KL Rahul","role"=>"Wicketkeeper-Batter","team"=>"India"]
];
?>
<!DOCTYPE html><html lang="en"><head><meta charset="UTF-8"><title>Indian Cricket Players</title></head>
<body><h1>Indian Cricket Players</h1><table border="1" cellpadding="10">
<tr><th>Sl. No.</th><th>Player Name</th><th>Role</th><th>Team</th></tr>
<?php foreach ($players as $i=>$player): ?><tr><td><?= $i+1 ?></td>
<td><?= htmlspecialchars($player["name"]) ?></td><td><?= htmlspecialchars($player["role"]) ?></td>
<td><?= htmlspecialchars($player["team"]) ?></td></tr><?php endforeach; ?>
</table></body></html>
