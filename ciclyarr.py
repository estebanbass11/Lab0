def calc_bmi(height, weight):
    bmi = weight / ((height / 100.0) ** 2)
    return bmi

def main():
    users = int(input("Ingrese la cantidad de personas: "))
    b = 0
    n = 0
    s = 0
    o = 0

    height = []
    weight = []
    bmi = []

    for i in range(users):
        print(f"\nUsuario: {i + 1}")

        height.append(float(input("Ingrese su altura en cms: ")))
        weight.append(float(input("Ingrese su peso en kg: ")))

        bmis = calc_bmi(height[i], weight[i])
        bmi.append(bmis)
        print(f"\nSu índice de masa corporal es: {bmis:.2f} kg/cm^2")

        if bmis<=18.5:
            print("Bajo peso")
            b +=1
            
        elif bmis>18.5 and bmis<=24.9:
            print("Peso normal")
            n +=1
            
        elif bmis>24.9 and bmis<29.9:
            print("Sobrepeso")
            s +=1
        
        elif bmis>=29.9:
            print("Obesidad") 
            o +=1  

    porcBaj = (100 * b) / users
    porcNor = (100 * n) / users
    porcSob = (100 * s) / users
    porcOb = (100 * o) / users

    print(f"\nPorcentaje de personas en Bajo peso: {porcBaj:.1f}%")
    print(f"Porcentaje de personas en Peso Normal: {porcNor:.1f}%")
    print(f"Porcentaje de personas en Sobrepeso: {porcSob:.1f}%")
    print(f"Porcentaje de personas en Obesidad: {porcOb:.1f}%")

if __name__ == "__main__":
    main()
