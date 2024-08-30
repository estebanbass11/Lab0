#include <stdio.h>

float calcBmi(float h,float w);

float pIdeal(float bmi, int altura);

int main(){
  
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
    float Peso_IDeal[users];
    
    float porcBaj, porcNor, porcSob, porcOb;
    float BMI_Normal = 24.9;
   
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
        Peso_IDeal[i] = pIdeal(BMI_Normal, height[i]);
        printf("\nTu peso ideal es: %.2fkg", Peso_IDeal[i]);
        b++;    
        }
    else if (bmi[i]>18.5 && bmi[i]<=24.9){
        printf("\nPeso normal\n");
        n++;
    }
    else if (bmi[i]>24.9 && bmi[i]<29.9){
        printf("\nSobrepeso\n");
        Peso_IDeal[i] = pIdeal(BMI_Normal, height[i]);
        printf("\nTu peso ideal es: %.2fkg", Peso_IDeal[i]);
        s++;
    }
    else if(bmi[i]>=29.9){
        printf("\nObesidad\n");
        Peso_IDeal[i] = pIdeal(BMI_Normal, height[i]);
        printf("\nTu peso ideal es: %.2fkg", Peso_IDeal[i]);
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

float calcBmi(float h,float w){
    float bmi;
    
    
    bmi=w/((h/100.0)*(h/100.0));
    return bmi;
}

float pIdeal(float bmi, int altura){
    float altura_1 = altura / 100.0;
    float peso = (bmi)*(altura_1*altura_1);

    return peso;
}