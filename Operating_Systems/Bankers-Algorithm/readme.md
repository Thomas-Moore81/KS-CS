# Banker's Algorithm
This program implements the Banker's Algorithm to detect if the system is in a safe or unsafe state. If no deadlock can occur than the program with read in data from a .txt file and print the safe sequence.

## Compiling
```
g++ bankers.cpp -o bankers
./bankers
```

## Data formating
```
Data must be formated in such a way that there is a space in between each number.
The first row of numbers is for the "mAlloc" array. This array handles allocation.
The second row of numbers is for the "mMax" array. This array handles the Max.
The third row of numbers is for "available" and handles availablity.

0 1 0 2 0 0 3 0 2 2 1 1 0 0 2 
7 5 3 3 2 2 9 0 2 2 2 2 4 3 3 
3 3 2
```
## Example output
```
SAFE STATE
Safe sequence is: P1 P3 P4 P0 P2 
```