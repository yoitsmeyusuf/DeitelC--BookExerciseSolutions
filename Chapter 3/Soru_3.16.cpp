#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
 
    int n;

    n = rand() % 2 + 1;         // 1 ≤ n ≤ 2
    
    n = rand() % 100 + 1;       // 1 ≤ n ≤ 100
    n = rand() % 10;            // 0 ≤ n ≤ 9
    n = rand() % 113 + 1000;    // 1000 ≤ n ≤ 1112 (1112-1000+1=113)
    n = rand() % 3 - 1;         // -1 ≤ n ≤ 1
    n = rand() % 15 - 3;        // -3 ≤ n ≤ 11 (11-(-3)+1=15)

    return 0;
}