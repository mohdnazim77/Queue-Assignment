#include <stdio.h>

struct Element {
    int data;
    int priority;
};

int main() {
    struct Element pq[10];
    int n = 0;

    // Insert elements with priorities
    pq[n].data = 10; pq[n].priority = 2; n++;
    pq[n].data = 20; pq[n].priority = 1; n++;
    pq[n].data = 30; pq[n].priority = 3; n++;
    
    // Delete highest priority element (max priority value here is 3)
    int max = 0;
    for(int i = 1; i < n; i++) {
        if(pq[i].priority > pq[max].priority) {
            max = i;
        }
    }
    
    // Shift elements after deletion
    for(int i = max; i < n - 1; i++) {
        pq[i] = pq[i + 1];
    }
    n--;
    
    // Display remaining elements
    printf("Priority Queue Remaining:\n");
    for(int i = 0; i < n; i++) {
        printf("Data: %d, Priority: %d\n", pq[i].data, pq[i].priority);
    }
    return 0;
}