#include <stdio.h>

// Funciones para realizar la conversión
float convertirQuetzalesADolares(float quetzales) {
    return quetzales / 7.75; // Tasa de conversión aproximada (1 USD = 7.75 GTQ)
}

float convertirQuetzalesAEuros(float quetzales) {
    return quetzales / 8.50; // Tasa de conversión aproximada (1 EUR = 8.50 GTQ)
}

float convertirDolaresAQuetzales(float dolares) {
    return dolares * 7.75; // Tasa de conversión aproximada (1 USD = 7.75 GTQ)
}

float convertirDolaresAEuros(float dolares) {
    return dolares * 0.92; // Tasa de conversión aproximada (1 USD = 0.92 EUR)
}

float convertirEurosAQuetzales(float euros) {
    return euros * 8.50; // Tasa de conversión aproximada (1 EUR = 8.50 GTQ)
}

float convertirEurosADolares(float euros) {
    return euros * 1.09; // Tasa de conversión aproximada (1 EUR = 1.09 USD)
}

int main() {
    int opcion;
    float cantidad, resultado;

    printf("Bienvenido al conversor de monedas\n");
    printf("Elige la opción de conversión:\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    printf("7. Salir\n");
    
    do {
        printf("\nIngresa tu opción (1-7): ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 6) {
            printf("Ingresa la cantidad a convertir: ");
            scanf("%f", &cantidad);
        }

        switch(opcion) {
            case 1:
                resultado = convertirQuetzalesADolares(cantidad);
                printf("%.2f Quetzales son %.2f Dólares.\n", cantidad, resultado);
                break;
            case 2:
                resultado = convertirQuetzalesAEuros(cantidad);
                printf("%.2f Quetzales son %.2f Euros.\n", cantidad, resultado);
                break;
            case 3:
                resultado = convertirDolaresAQuetzales(cantidad);
                printf("%.2f Dólares son %.2f Quetzales.\n", cantidad, resultado);
                break;
            case 4:
                resultado = convertirDolaresAEuros(cantidad);
                printf("%.2f Dólares son %.2f Euros.\n", cantidad, resultado);
                break;
            case 5:
                resultado = convertirEurosAQuetzales(cantidad);
                printf("%.2f Euros son %.2f Quetzales.\n", cantidad, resultado);
                break;
            case 6:
                resultado = convertirEurosADolares(cantidad);
                printf("%.2f Euros son %.2f Dólares.\n", cantidad, resultado);
                break;
            case 7:
                printf("Saliendo del conversor. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Por favor, elige una opción entre 1 y 7.\n");
        }
    } while (opcion != 7);

    return 0;
}
