// Atividade de matemática discreta

#include <stdio.h>
#include <math.h>

// Descomente a importação da biblioteca math.h acima para que o código funcione
// Funções de math.h que estão sendo utilizadas: sin()

// Série de Taylor: Utilizada para encontrar uma aproximação de uma função mais complexa num determinado intervalo. Uma maneira de escrever uma função em formato de um polinômio infinito

// (Utiliza arctan) Funciona mas precisa de milhares de iterações pra convergir, não vale a pena na prática
double gregLeibnizForPI(int iterations) {
    // exemplo: 4 - 4/3 + 4/5 - 4/7 + 4/9;
    double res = 4.0;
    // "a" = add; "s" = subtract
    char operation = 's';
    for(int i=3; i<iterations; i++) {
        if (i%2 != 0) {
            if (operation == 's') {
                res -= 4.0/i;
                operation = 'a';
            } else {
                res += 4.0/i;
                operation = 's';
            }
        }
    }
    return res;
}

// double arcTanSeries(double x, int iterations) {
//     double res = x;
//     // "a" = add; "s" = subtract
//     char operation = 's';
//     for(int i=3; i<iterations; i++) {
//         if (i%2 != 0) {
//             if (operation == 's') {
//                 res -= (pow(x, i))/i;
//                 operation = 'a';
//             } else {
//                 res += (pow(x, i))/i;
//                 operation = 's';
//             }
//         }
//     }
//     return res;
// }

double arcTanSeries(double x, double erro) {

    double termo = x;
    double soma = x;

    int n = 1;
    int sinal = -1;

    while (fabs(termo) > erro) {

        termo = pow(x, 2*n+1)/(2*n+1);

        soma += sinal * termo;

        sinal *= -1;
        n++;
    }

    return soma;
}

double calculaPI(int casas) {

    double erro = pow(10, -casas);

    double pi = 4 * (4*arcTanSeries(1.0/5.0, erro) - arcTanSeries(1.0/239.0, erro));

    return pi;
}

int main() {
   double a;
   double pi;
   int casas = 50;

   a = sin(32);
   printf("Sin(32): ");
   printf("%lf\n", a);

   a = gregLeibnizForPI(50);
   printf("Método de Gregory e Leibniz para encontrar PI: ");
   printf("%lf\n", a);

   pi = calculaPI(casas);
   printf("PI aproximado: %.50lf\n", pi);
}



