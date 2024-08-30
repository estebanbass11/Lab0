# Función para calcular el índice de masa corporal (IMC)
def calc_bmi(height, weight):
    bmi = weight / ((height / 100.0) ** 2)
    return bmi

# Función principal
def main():
    # Solicitar al usuario la altura en centímetros
    height = float(input("Ingrese su altura en cms: "))

    # Solicitar al usuario el peso en kilogramos
    weight = float(input("Ingrese su peso en kgs: "))

    # Calcular el IMC llamando a la función calc_bmi
    bmi = calc_bmi(height, weight)

    # Imprimir el resultado
    print(f"Su índice de masa corporal es {bmi:.2f} kg/m^2")
    
    if bmi<=18.5:
        print("\nBajo peso")
    
    elif bmi>18.5 and bmi<=24.9:
        print("\nPeso normal")
 
    elif bmi>24.9 and bmi<29.9:
        print("\nsobrepeso")
        
    elif bmi>=29.9:
        print("\nobesidad")    
    
        
# Ejecutar la función principal
if __name__ == "__main__":
    main()
