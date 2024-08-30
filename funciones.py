def calc_bmi(height, weight):
    bmi = weight / ((height / 100.0) ** 2)
    return bmi

def pIdeal(bmi, altura):
    altura_1 = altura / 100.0
    peso = bmi * (altura_1 ** 2)
    return peso

def main():
    users = int(input("Ingrese la cantidad de personas: "))
    
    height = []
    weight = []
    bmi = []
    peso_ideal = []
    
    b = n = s = o = 0
    BMI_NORMAL = 24.9
    
    for i in range(users):
        print(f"\nUsuario: {i + 1}")
        
        h = float(input("Ingrese su altura en cms: "))
        height.append(h)
        
        w = float(input("Ingrese su peso en kg: "))
        weight.append(w)
        
        bmis = calc_bmi(h, w)
        bmi.append(bmis)
        print(f"\nSu índice de masa corporal es: {bmis:.2f} kg/m^2")
        
        if bmis <= 18.5:
            print("\nBajo peso")
            ideal_weight = pIdeal(BMI_NORMAL, h)
            peso_ideal.append(ideal_weight)
            print(f"\nTu peso ideal es: {ideal_weight:.2f} kg")
            b += 1
        elif bmis>18.5 and bmis<=24.9:
            print("Peso normal")
            n += 1
        elif bmis>24.9 and bmis<29.9:
            print("Sobrepeso")
            ideal_weight = pIdeal(BMI_NORMAL, h)
            peso_ideal.append(ideal_weight)
            print(f"\nTu peso ideal es: {ideal_weight:.2f} kg")
            s += 1
        elif bmis>=29.9:
            print("Obesidad")
            ideal_weight = pIdeal(BMI_NORMAL, h)
            peso_ideal.append(ideal_weight)
            print(f"\nTu peso ideal es: {ideal_weight:.2f} kg")
            o += 1
    
    porc_baj = (100 * b) / users
    porc_nor = (100 * n) / users
    porc_sob = (100 * s) / users
    porc_ob = (100 * o) / users
    
    print(f"\nPorcentaje de personas en Bajo peso: {porc_baj:.1f}%")
    print(f"Porcentaje de personas en Peso Normal: {porc_nor:.1f}%")
    print(f"Porcentaje de personas en Sobrepeso: {porc_sob:.1f}%")
    print(f"Porcentaje de personas en Obesidad: {porc_ob:.1f}%")

if __name__ == "__main__":
    main()
