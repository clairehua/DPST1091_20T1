#include <stdio.h>

int non_decreasing(int n, int a[n]);

int main(void) {




}


// This function checks if the array given by 'a'
// is non-decreasing
// returns 1 if true, 0 if false
int non_decreasing(int n, int a[n]) {
    int i = 0;

    // single element array
    if (n == 1) {
        return 1;
    }

    i++; 
    // i = 1 (so [i-1] is not an illegal index)
    while (i < n) {
        if (a[i] < a[i-1]) {
            // as soon as it is false, it can never be true
            // we say it is false now
            return 0;
        }
        i++;
    }

    return 1;
}
