#include <stdio.h>

void even_or_odd(int num){
    if(num % 2 == 0){
        printf("The number %d is Even\n", num);
    } else {
        printf("The number %d is Odd\n", num);
    }
}

// Program to determine even or odd
int main(){
    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);
    even_or_odd(num);
    return 0;
}
