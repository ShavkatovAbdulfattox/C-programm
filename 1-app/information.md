#Call by Value:
In call by value, the actual value of the argument is passed to the function. This means that the function receives a copy of the data, and any modifications made to the parameter inside the function do not affect the original value outside the function. Essentially, the function works with its own local copy of the data.

#include <stdio.h>

void increment(int x) {
    x++;
}

int main() {
    int num = 5;
    increment(num);
    printf("Original value: %d\n", num);  // Output: Original value: 5
    return 0;
}


#Call by Address (or Call by Reference in some contexts):
In call by address, the memory address (reference) of the actual argument is passed to the function. This means that the function can directly access and modify the original data through its memory address.

#include <stdio.h>

void incrementByReference(int *x) {
    (*x)++;
}

int main() {
    int num = 5;
    incrementByReference(&num);
    printf("Modified value: %d\n", num);  // Output: Modified value: 6
    return 0;
}
