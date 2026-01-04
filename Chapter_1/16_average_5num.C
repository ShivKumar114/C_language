# include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    printf("Enter 4th number: ");
    scanf("%d",&d);
    printf("Enter 5th number: ");
    scanf("%d",&e);
    int average ((a+b+c+d+e)/5);
    printf("The Average of your given numbers is %d",average);
    return 0;
}