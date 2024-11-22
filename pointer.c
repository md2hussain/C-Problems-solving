#include <stdio.h>

int main() {
    int num = 10;        // Declare an integer variable
    int *ptr = &num;     // Declare a pointer and store the address of 'num'

    // Display the value of 'num' and its address
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    // Display the value stored in the pointer 'ptr' (which is the address of 'num')
    printf("Value of ptr (Address of num): %p\n", ptr);

    // Use the pointer to get the value stored at the address it points to
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Change the value of 'num' using the pointer
    *ptr = 20;
    printf("Value of num after modification using pointer: %d\n", num);

    return 0;
}