# Structures

**1)** Declare structure `Vector`, which contains float X and Y coordinates

----

**2)** Implement functions:

a) `Vector sum(Vector a, Vector b)`:  a + b

b) `Vector diff(Vector a, Vector b)`: a - b

c) `float len(Vector a)`: square root of (`a.x` squared plus `a.y` squared)

d) `float dist(Vector a, Vector b)`: len(a - b)

----

**3)** User enters few points. Every point consists of X, Y coordinates and some letter (name of point). 

When user enters `0 0 0`, program should print all points' names with theirs distance to (0, 0). 

Example:

Input 
```
10 0 A
0 20 B
10 10 C
0 0 0
```
Output:
```
A 10
B 20
C 14.14213
```

----

**4)** User enters few points. Every point consists of X, Y coordinates and some letter (name of point). 

When user enters `0 0 0`, program asks him for his position (X, Y) and then prints all points' names ordered by distance to user position. Use bubble sort for this task.

Example:


Input 
```
10 0 A
0 20 B
10 10 C
15 20 D
0 0 0
10 10
```
Output:
```
C 0
A 10
D 11.18033989
B 14.14213562
```
