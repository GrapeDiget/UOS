#include <stdio.h>

typedef struct {
	double real;
	double imag;
} Complex;

void print_complex(Complex a) {
	printf("%4.1f + %4.1fi\n", a.real, a.imag);
}



Complex complex_add(Complex a, Complex b) {
	Complex c;
	c.real = a.real + b.real;
	c.imag = a.imag + b.imag;
	return c;
}

int main()
{
	Complex a = {1.0, 2.0};		//1+2i
	Complex b = {3.0, 5.0};		//3+5i
	Complex c;
	
	printf("a =");
	print_complex(a);
	printf("b =");
	print_complex(b);
	
	c = complex_add(a, b);
	printf("a+b =");
	print_complex(c);
	return 0;
}
