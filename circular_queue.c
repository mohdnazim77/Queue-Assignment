#include <stdio.h>
#define N 5
int q[N], f = 0, r = -1, count = 0;

void insert(int x) { 
    if(count < N) { 
        r = (r + 1) % N; 
        q[r] = x; 
        count++; 
    } 
}

void del() { 
    if(count > 0) { 
        f = (f + 1) % N; 
        count--; 
    } 
}

int main() {
    insert(10); insert(20); insert(30); insert(40); // Insert 10, 20, 30, 40
    del(); del();                                  // Delete two from front
    insert(50); insert(60);                        // Insert 50 and 60
    
    printf("Circular Queue Elements: ");
    for(int i = 0, idx = f; i < count; i++, idx = (idx + 1) % N) {
        printf("%d ", q[idx]);
    }
    printf("\n");
    return 0;
}