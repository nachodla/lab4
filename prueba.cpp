#include <stdio.h>
#include <stdint.h>

// Función para convertir de complemento a 1 a magnitud y signo
void complemento1_a_magnitud_signo(int16_t complemento1, int16_t *magnitud, int8_t *signo) {
    // Verifica si el número es negativo (complemento a 1)
    if (complemento1 < 0) {
        *signo = -1;  // Número negativo
        *magnitud = ~complemento1;  // Invertir los bits (complemento a 1)
    } else {
        *signo = 1;   // Número positivo
        *magnitud = complemento1;  // Mantener el valor igual
    }
}

int main() {
    int16_t complemento1 = -1234;  // Número en complemento a 1
    int16_t magnitud;
    int8_t signo;

    complemento1_a_magnitud_signo(complemento1, &magnitud, &signo);

    printf("Signo: %d, Magnitud: %d\n", signo, magnitud);

    return 0;
}
