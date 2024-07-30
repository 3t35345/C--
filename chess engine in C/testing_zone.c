#include <stdio.h>

int main() {
    int a = 12, b = 7;
    
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT of a: %d\n", ~a);
    printf("Bitwise left shift of a by 2: %d\n", a << 2);
    printf("Bitwise right shift of a by 2: %d\n", a >> 2);
    
    return 0;
}