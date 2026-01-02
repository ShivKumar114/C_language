# include <stdio.h>

int main(){
    int side;
    printf("Enter side: ");
    scanf("%d", &side);
    int square = (side*side);
    printf("Area of square is %d",square);
    return 0;
}