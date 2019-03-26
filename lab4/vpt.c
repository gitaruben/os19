#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double heron(double a, double b, double c)
{
	int p = (a+b+c)/2;
	double x = p*(p-a)*(p-b)*(p-c);
	return sqrt(x);
	
}

double volumept(double h, double a, double b, double c)
{
	double Ab = heron(a,b,c);
	double v = (Ab*h)/3;
	return v;
}

int main (int args, char* argv[])
{
	if (args != 5)
	{
		printf("Eroare parametrii\n");
		return -1;
	}
	int h = atof(argv[1]);
	int a = atof(argv[2]);
	int b = atof(argv[3]);
	int c = atof(argv[4]);
	
	double v = volumept(h,a,b,c);
	printf("%f\n", v);

	return 0;

}

