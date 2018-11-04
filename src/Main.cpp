#include <iostream>
using namespace std;

void ord3(double& a, double& b, double& c);
void ord3(double* a, double* b, double* c);
void getMinMax(double &a, double& b, double& c, double*& ptrMin, double*& ptrMax);
void getMinMax(double *a, double* b, double* c, double** ptrMin, double** ptrMax);

int main() {

	double a, b, c, *ptrMin, *ptrMax;

	a = 2; b = 1; c = 3;

	ord3(a, b, c);

	cout << a << " " << b << " " << c << endl;

	a = 3; b = 2; c = 1;

	ord3(&a, &b, &c);

	cout << a << " " << b << " " << c << endl;

	a = 2; b = 3; c = 1;

	ptrMin = ptrMax = nullptr;

	getMinMax(a, b, c, ptrMin, ptrMax);

	cout << "Min = " << *ptrMin << "; " << "Max = " << *ptrMax << endl;

	a = 3; b = 1; c = 2;

	ptrMin = ptrMax = nullptr;

	getMinMax(&a, &b, &c, &ptrMin, &ptrMax);

	cout << "Min = " << *ptrMin << "; " << "Max = " << *ptrMax << endl;

	return 0;
}

void ord3(double& a, double& b, double& c) {
	double foo;
	if (a > c) {
		foo = c;
		c = a;
		a = foo;
	}
	if (a > b) {
		foo = a;
		a = b;
		b = foo;
	}
	if (b > c) {
		foo = c;
		c = b;
		b = foo;
	}
}

void ord3(double* a, double* b, double* c) {
	double foo;
	if (*a > *c) {
		foo = *c;
		*c = *a;
		*a = foo;
	}
	if (*a > *b) {
		foo = *a;
		*a = *b;
		*b = foo;
	}
	if (*b > *c) {
		foo = *c;
		*c = *b;
		*b = foo;
	}
}

void getMinMax(double &a, double& b, double& c, double*& ptrMin, double*& ptrMax) {

	ptrMin = &a;

	if (*ptrMin > b)
		ptrMin = &b;

	if (*ptrMin > c)
		ptrMin = &c;

	ptrMax = &a;

	if (*ptrMax < b)
		ptrMax = &b;

	if (*ptrMax < c)
		ptrMax = &c;

}

void getMinMax(double *a, double* b, double* c, double** ptrMin, double** ptrMax) {
	*ptrMin = a;

	if (**ptrMin > *b)
		*ptrMin = b;

	if (**ptrMin > *c)
		*ptrMin = c;

	*ptrMax = a;

	if (**ptrMax < *b)
		*ptrMax = b;

	if (**ptrMax < *c)
		*ptrMax = c;
}
