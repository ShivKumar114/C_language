# include <stdio.h>
int main(){
    float year;
    printf("Enter your number to get no of days: ");
    scanf("%f",&year);
    float convert = (year*365);
    printf("No of days is %.2f",convert);
    return 0;
}