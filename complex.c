
// Complex numbers constitute of two parts -

// Real and Imaginary

// When you want to perform any arithmetic operation on two or more complex numbers, you need to perform the operation separately for the real part and imaginary part of the complex numbers.

// So, here in the given challenge also, we need to add the real parts separately and the imaginary parts separately. The same goes for multiplication operation also.

// For multiplication of Complex numbers, this is what happens:

// (a+bi) * (c+di) = (ac−bd) + (ad+bc)i

// where a and c are real parts of the two complex numbers and; b and d are imaginary parts.
#include <stdio.h>

struct complex
{
    int real;
    int imag;
};

struct complex add(struct complex a, struct complex b)
{
    struct complex d;
    d.real = a.real + b.real;
    d.imag = a.imag + b.imag;
    return d;
}

struct complex multiply(struct complex a, struct complex b)
{
    struct complex d;
    d.real = (a.real * b.real) - (a.imag * b.imag);
    d.imag = (a.real * b.imag) + (a.imag * b.real);
    return d;
}

int main()
{

    struct complex d1 = {12, 9};
    struct complex d2 = {18, 11};

    struct complex d = add(d1, d2);
    struct complex f = multiply(d1, d2);

    printf("SUM - %d + %di\n", d.real, d.imag);
    printf("PRODUCT - %d + %di\n", f.real, f.imag);
    return 0;
}