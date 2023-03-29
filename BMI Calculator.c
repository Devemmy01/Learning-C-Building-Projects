#include <stdio.h>

int main(){
    int weight;
    double height;
    double BMI;

    printf("Enter your weight in kilograms: ");
    scanf("%d", &weight);

    printf("Enter your height on meters: ");
    scanf("%lf", &height);

    if(BMI < 18.5){
        printf("Your BMI is %.2lf, which is underweight", BMI);
    }
    else if (BMI > 18.5 && BMI < 25){
        printf("Your BMI is %.2lf, which is a normal weight range", BMI);
    }
    else if (BMI > 25 && BMI < 30){
        printf("Your BMI is %.2lf, and you are overweight", BMI);
    }
    else if (BMI >= 30){
        printf("Your BMI is %.2lf, and you are obese!!", BMI);
    }

    return 0;
}