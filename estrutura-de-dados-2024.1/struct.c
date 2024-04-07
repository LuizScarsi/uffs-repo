#include <stdio.h>

typedef struct stdata {
    int day;
    int month;
    int year;
} Data;

typedef struct stfraction {
    int numerator;
    int denominator;
} Fraction;

int extractDay(Data data);
int compareDays(Data data1, Data data2);
Fraction setFraction(int n, int d);
Fraction multFraction(Fraction f1, Fraction f2);

int main() {
    Fraction f1, result;
    Data data1 = {20,1,2020}, data2 = {20,1,2020};
    printf("%d\n", compareDays(data1, data2));

    f1 = setFraction(4,2);
    printf("%d, %d\n", f1.numerator, f1.denominator);

    result = multFraction(f1, setFraction(3,5));
    printf("Mult: %d / %d\n", result.numerator, result.denominator);
    return 0;
}

int extractDay(Data data) {
    return data.day;
}

int compareDays(Data data1, Data data2) {
    int d1, d2;
    d1 = data1.day + data1.month * 30 + data1.year*365;
    d2 = data2.day + data2.month * 30 + data2.year*365;

    if (d1 > d2) {
        return 1;
    } else if (d2 > d1) {
        return -1;
    } else {
        return 0;
    }
}

Fraction setFraction(int n, int d) {
    Fraction f = {n, d};
    return f;
}

Fraction multFraction(Fraction f1, Fraction f2) {
    Fraction result = {(f1.numerator * f2.numerator),(f1.denominator * f2.denominator)};
    return result;
}