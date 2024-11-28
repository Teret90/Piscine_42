#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Función para llenar las columnas de la matriz con la rotación especificada hacia arriba (colup)
void fill_column_with_rotation_up(int **matriz, int column, int colup) {
    int i = 0;
    while (i < 4) {
        // Ajustar la fórmula para rotar la secuencia según colup (hacia arriba)
        matriz[i][column] = (i + colup - 1) % 4 + 1;
        i++;
    }
}

// Función para llenar las columnas de la matriz con la rotación especificada hacia abajo (coldown)
void fill_column_with_rotation_down(int **matriz, int column, int coldown) {
    int i = 0;
    while (i < 4) {
        // Ajustar la fórmula para rotar la secuencia según coldown (hacia abajo)
        matriz[i][column] = (i + (4 - coldown)) % 4 + 1;
        i++;
    }
}

// Función para imprimir la matriz
void print_matrix(int **matriz) {
    int i = 0;
    while (i < 4) {
        int j = 0;
        while (j < 4) {
            printf("%d ", matriz[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

// Función principal
int main() {
    int **matriz;
    int i = 0, j;

    // Reserva memoria para 4 filas
    matriz = (int **)malloc(4 * sizeof(int *));
    if (matriz == NULL) {
        printf("Error de asignación de memoria para las filas.\n");
        return 1;  // Si malloc falla, termina el programa
    }

    // Reserva memoria para 4 columnas en cada fila
    while (i < 4) {
        matriz[i] = (int *)malloc(4 * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Error de asignación de memoria para la fila %d.\n", i);
            return 1;  // Si malloc falla, termina el programa
        }
        i++;  // Incremento manual de i
    }

    // Inicializar la matriz con ceros (opcional, para ver el cambio)
    i = 0;
    while (i < 4) {
        j = 0;
        while (j < 4) {
            matriz[i][j] = 0;  // Inicializamos con 0
            j++;  // Incremento manual de j
        }
        i++;  // Incremento manual de i
    }

    // Imprimir la matriz inicial (con ceros)
    printf("Matriz inicial (con ceros):\n");
    print_matrix(matriz);

    // Valores de las rotaciones de las columnas (colup y coldown)
    int colup1 = 4, coldown1 = 1;
    int colup2 = 3, coldown2 = 2;
    int colup3 = 2, coldown3 = 3;
    int colup4 = 1, coldown4 = 4;

    // Llenar las columnas con los valores según colup
    fill_column_with_rotation_up(matriz, 0, colup1);  // Columna 0 (1ra columna)
    fill_column_with_rotation_up(matriz, 1, colup2);  // Columna 1 (2da columna)
    fill_column_with_rotation_up(matriz, 2, colup3);  // Columna 2 (3ra columna)
    fill_column_with_rotation_up(matriz, 3, colup4);  // Columna 3 (4ta columna)

    // Imprimir la matriz después de llenar con rotación hacia arriba
    printf("\nMatriz después de llenar con rotación hacia arriba:\n");
    print_matrix(matriz);

    // Llenar las columnas con los valores según coldown (rotación hacia abajo)
    fill_column_with_rotation_down(matriz, 0, coldown1);  // Columna 0 (1ra columna)
    fill_column_with_rotation_down(matriz, 1, coldown2);  // Columna 1 (2da columna)
    fill_column_with_rotation_down(matriz, 2, coldown3);  // Columna 2 (3ra columna)
    fill_column_with_rotation_down(matriz, 3, coldown4);  // Columna 3 (4ta columna)

    // Imprimir la matriz después de llenar con rotación hacia abajo
    printf("\nMatriz después de llenar con rotación hacia abajo:\n");
    print_matrix(matriz);

    // Liberar la memoria
    i = 0;
    while (i < 4) {
        free(matriz[i]);
        i++;
    }
    free(matriz);

    return 0;
}