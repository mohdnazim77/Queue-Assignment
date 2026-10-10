#include <stdio.h>
int q[10], f = 0, r = -1;

int main() {
    q[++r] = 10; q[++r] = 20; q[++r] = 30; // Insert 10, 20, 30
    f += 2;                               // Delete two from front
    q[++r] = 40;                          // Insert 40 to rear
    
    printf("Linear Queue Remaining: ");
    for(int i = f; i <= r; i++) {
        printf("%d ", q[i]);
    }
    printf("\n");
    return 0;
}