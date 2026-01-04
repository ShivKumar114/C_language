# include <stdio.h>
 int main(){
    float c,farenheit ;
    printf("Celsius to Farenheit Converter\n");
    printf("Enter degree in celcius: ");
    scanf("%f",&c);
    farenheit = (c*9/5+32);
    printf("Temprature in Farenheit is: %.2f",farenheit);
    return 0;

 }