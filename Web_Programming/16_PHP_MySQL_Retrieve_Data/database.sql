CREATE DATABASE IF NOT EXISTS web_programming_lab CHARACTER SET utf8mb4 COLLATE utf8mb4_unicode_ci;
USE web_programming_lab;
CREATE TABLE IF NOT EXISTS students (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(100) NOT NULL,
  email VARCHAR(150) NOT NULL,
  course VARCHAR(50) NOT NULL
);
INSERT INTO students (name,email,course) VALUES
('Amina','amina@example.com','MCA'),
('Arun','arun@example.com','MCA'),
('Rahul','rahul@example.com','MCA');
