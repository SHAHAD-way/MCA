CREATE DATABASE IF NOT EXISTS library_lab CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
USE library_lab;
CREATE TABLE IF NOT EXISTS books (
  accession_no VARCHAR(30) PRIMARY KEY,
  title VARCHAR(200) NOT NULL,
  authors VARCHAR(200) NOT NULL,
  edition VARCHAR(50) NOT NULL,
  publisher VARCHAR(150) NOT NULL
);
INSERT INTO books (accession_no,title,authors,edition,publisher) VALUES
('BK001','Web Programming','R. S. Pressman','3rd','Tech Publications'),
('BK002','PHP and MySQL','Luke Welling, Laura Thomson','5th','Pearson'),
('BK003','HTML and CSS','Jon Duckett','1st','Wiley')
ON DUPLICATE KEY UPDATE title=VALUES(title);
