/*
    ejer 3 -Dada la siguiente estructura generar una función que permita ordenar un array de dicha estructura por tipo. Ante igualdad de tipo deberá ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main.
*/
typedef struct
    {
        int id;
        char nombre[20];
        char tipo;
        float efectividad;
    }eVacuna;

    int main()
    {
        eVacuna vacunas[5] = {{1, "AstraZeneca", 'A', 0.9}, {2, "Sputnik", 'A', 0.95}, {3, "Pfizer", 'B', 0.95},{4, "Moderna", 'A', 0.94},{5, "AstraZeneca", 'B', 0.65}
};

        printf("Vacunas sin ordenar: \n");
        for(int i = 0; i < 5; i++)
        {
            printf("%d %s %c %.2f\n", vacunas[i].id, vacunas[i].nombre, vacunas[i].tipo, vacunas[i].efectividad);
        }

        ordenarVacunas(vacunas, 5);

        printf("\nVacunas ordenadas: \n");
        for(int i = 0; i < 5; i++)
        {
            printf("%d %s %c %.2f\n", vacunas[i].id, vacunas[i].nombre, vacunas[i].tipo, vacunas[i].efectividad);
        }

        return 0;
        /*fin ejer 3*/
        /*Ejer 1 inicio*/

    float aplicarAumento(float precio){
        float precioConAumento;
        precioConAumento=precio*1.05;
        return precioConAumento;
    }
    
    float precio;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    printf("El precio del producto con el 5%% de aumento es: $%.2f", aplicarAumento(precio));
    
    return 0;
    /**********fin ejer 1******************/

    /*  inicio ejer 2*/
 /*
     *Crear una función que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer parámetro, un carácter como segundo y otro carácter  como tercero,  la misma deberá reemplazar cada ocurrencia del segundo parámetro por el tercero y devolver la cantidad de veces que se reemplazo ese carácter  en la cadena
     */
    int reemplazarCaracteres(char* cadena, char caracter, char reemplazo){
        int i;
        int contador=0;
        for(i=0; cadena[i] != '\0'; i++){
            if(cadena[i] == caracter){
                cadena[i] = reemplazo;
                contador++;
            }
        }
        return contador;
    }
    /*fin ejer 2*/
    }

    void ordenarVacunas(eVacuna vacunas[], int tam)
    {
        eVacuna auxVacuna;
        for(int i = 0; i < tam - 1; i++)
        {
            for(int j = i + 1; j < tam; j++)
            {
                if(vacunas[i].tipo > vacunas[j].tipo || (vacunas[i].tipo == vacunas[j].tipo && vacunas[i].efectividad > vacunas[j].efectividad))
                {
                    auxVacuna = vacunas[i];
                    vacunas[i] = vacunas[j];
                    vacunas[j] = auxVacuna;
                }
            }
        }
    }
}