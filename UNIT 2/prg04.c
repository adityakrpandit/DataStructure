// enrollment number 92500527175
// 4. Write a program to find the factorial of a given integer number using stack.

#include <stdio.h>

#define MAX 100

// Stack implementation
int stack[MAX];
int top = -1;

void push(int value) {
    if (top < MAX - 1)
        stack[++top] = value;
}

int pop() {
    if (top >= 0)
        return stack[top--];
    return -1;
}

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        push(a);
        push(b);

        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);

    printf("Stack contents (top to bottom):\n");
    while (top != -1) {
        printf("%d ", pop());
    }

    return 0;
}
