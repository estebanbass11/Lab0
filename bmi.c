// Include header file for prototypes of scanf and printf
#include <stdio.h>

// Prototype of calcBmi function
float calcBmi(float h,float w);

// Main function - entry point
int main(){
    // Local variable declaration
    float height;
    float weight;
    float bmi;

    // Ask user for height in cms
    printf("Enter your height in cms: ");
    scanf("%f",&height);

    // Ask user for weight in kgs
    printf("Enter your weight in kgs: ");
    scanf("%f",&weight);

    // Call calcBmi function
    bmi=calcBmi(height,weight);

    // Print result
    printf("Your body mass index is %.2f kg/cm^2",bmi);

    if(bmi<=18.5){
        printf("\nBajo peso");    
        }
    else if (bmi>18.5 && bmi<=24.9){
        printf("\nPeso normal");
    }
    else if (bmi>24.9 && bmi<29.9){
        printf("\nSobrepeso");
    }
    else if(bmi>=29.9){
        printf("\nObesidad");
    }
}

// Implementation of calcBmi function
float calcBmi(float h,float w){
    float bmi;

    // Compute body mass index
    bmi=w/((h/100.0)*(h/100.0));
    return bmi;
}