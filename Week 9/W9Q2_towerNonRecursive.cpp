#include <stdio.h>

void towerOfHanoiIterative(int n, char source, char auxiliary, char destination) {
    int moves = (1 << n) - 1;  // Total moves required
    
    for (int i = 1; i <= moves; ++i) {
        char from, to;
        if (i % 3 == 1) {
            from = source;
            to = destination;
        } else if (i % 3 == 2) {
            from = source;
            to = auxiliary;
        } else {
            from = auxiliary;
            to = destination;
        }
        printf("Move disk from %c to %c\n", from, to);
    }
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("Steps to solve the Tower of Hanoi problem:\n");
    towerOfHanoiIterative(n, 'A', 'B', 'C');
    return 0;
}

