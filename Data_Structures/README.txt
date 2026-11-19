MCA DATA STRUCTURES - C PROGRAMS

This folder contains 12 separate C programs. Each file has its own main()
function, so compile and run one file at a time.

Programs:
01. Insert an element at a specific position in an array
02. Delete an element at a specific position in an array
03. Menu-driven array operations (create, insert, delete, display, exit)
04. Merge two arrays and sort the merged array
05. Singly linked list operations
06. Stack operations using an array
07. Queue operations using an array (linear queue)
08. Circular queue operations using an array
09. Disjoint Set operations using an array (Make Set, Find, Union)
10. Stack operations using a linked list
11. Breadth First Search (BFS) using an array-based adjacency matrix and queue
12. Depth First Search (DFS) using an array-based adjacency matrix

Compile and run (GCC):
    gcc 01_array_insert_specific_position.c -o program
    ./program

On Windows PowerShell:
    gcc 01_array_insert_specific_position.c -o program.exe
    .\program.exe

Replace the source filename to compile a different program.
For BFS and DFS, vertices are numbered from 0 to n-1. Enter the graph
as an adjacency matrix, using 1 for an edge and 0 for no edge.

Note: The BFS and DFS programs traverse only the connected component
reachable from the chosen starting vertex.
