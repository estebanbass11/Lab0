#include <stdio.h>

// Prototype of calcBmi function
float calcBmi(float h,float w);

// Main function - entry point
int main(){
    // Local variable declaration
    int users;
    int b = 0;
    int n = 0;
    int s = 0;
    int o = 0;

    printf("Ingrese la cantidad de personas: ");
    scanf("%d",&users);

    float height[users];
    float weight[users];
    float bmi[users];
    float porcBaj, porcNor, porcSob, porcOb;
   
    for(int i=0;i<users;i++){
        printf("\nUsuario: %d",i+1);

        printf("\nIngrese su altura en cms: ");
        scanf("%f",&height[i]);

        printf("Ingrece su peso en kg: ");
        scanf("%f",&weight[i]);

        bmi[i] = calcBmi(height[i],weight[i]);
        printf("\nSu indice de masa corporal es:%.2f kg/cm^2",bmi[i]);
        

        
    if(bmi[i]<=18.5){
        printf("\nBajo peso\n");
        b++;    
        }
    else if (bmi[i]>18.5 && bmi[i]<=24.9){
        printf("\nPeso normal\n");
        n++;
    }
    else if (bmi[i]>24.9 && bmi[i]<29.9){
        printf("\nSobrepeso\n");
        s++;
    }
    else if(bmi[i]>=29.9){
        printf("\nObesidad\n");
        o++;
    }
    }

    porcBaj = (100*b)/users;
    porcNor = (100*n)/users;
    porcSob = (100*s)/users;
    porcOb = (100*o)/users;
    printf("\nPorcentaje de personas en Bajo peso: %.1f%%", porcBaj);
    printf("\nPorcentaje de personas en Peso Normal: %.1f%%", porcNor);
    printf("\nPorcentaje de personas en Sobrepeso: %.1f%%", porcSob);
    printf("\nPorcentaje de personas en Obesidad: %.1f%%", porcOb);

}
// Implementation of calcBmi function
float calcBmi(float h,float w){
    float bmi;
    
    // Compute body mass index
    bmi=w/((h/100.0)*(h/100.0));
    return bmi;
}