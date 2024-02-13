#include <stdio.h>
 
int main() {
    int n, height;
    scanf("%d", &n);
    
    int h1 = 0, h2 = 101, maxindex = 0, minindex = 0;
 
    for (int i = 0; i < n; ++i) {
        scanf("%d", &height);
        if (height > h1) {
            h1 = height;
            maxindex = i;
        }
        if (height <= h2) {
            h2 = height;
            minindex = i;
        }
    }
 
    int count = maxindex + (n - 1 - minindex);
    if (maxindex > minindex) {
        count--;
    }
 
    printf("%d", count);
 
    return 0;
}