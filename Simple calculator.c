#include <stdio.h>
int main() {
    char op;
    float a, b;
    scanf(" %c", &op);
    scanf("%f %f", &a, &b);
    
    switch(op){
        case '+': printf("%f", a + b); break;
        case '-': printf("%f", a - b); break;
        case '*': printf("%f", a * b); break;
        case '/': printf("%f", a / b); break;
        default: printf("Invalid");
    }
}
