# include<stdio.h>

int main(){
    int a;
    printf("Enter your number: ");
    scanf("%d", &a);
    int b;
    printf("Enter your number: ");
    scanf("%d", &b);
    int division = a/b;
    printf("The division of given numbers is %d",division);
    return 0;
}