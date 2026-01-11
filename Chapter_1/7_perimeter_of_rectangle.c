# include <stdio.h>

int main(){
    int a,b;
    printf("Enter side a: ");
    scanf("%d", &a);
    printf("Enter side b: ");
    scanf("%d",&b);
    int perimeter = (2*(a+b));
    printf("Perimeter of rectangle is %d",perimeter);
    return 0;

}