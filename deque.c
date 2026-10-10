#include <stdio.h>
int dq[10], f = 5, r = 4;

int main() {
    dq[--f] = 10; // Insert 10 from Front
    dq[++r] = 20; // Insert 20 from Rear
    dq[--f] = 30; // Insert 30 from Front
    f++;          // Delete one from Front
    r--;          // Delete one from Rear
    
    printf("Deque Remaining: ");
    for(int i = f; i <= r; i++) {
        printf("%d ", dq[i]);
    }
    printf("\n");
    return 0;
}