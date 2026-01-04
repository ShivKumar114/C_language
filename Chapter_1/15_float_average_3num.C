# include <stdio.h>

int main(){
    float a ,b,c;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);
    printf("Enter 3rd number: ");
    scanf("%f",&c);
    float average ((a+b+c)/3);
    printf("The average of your given numbers is %f",average);
    return 0;
}