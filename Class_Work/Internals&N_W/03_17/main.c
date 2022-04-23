#include<stdio.h>

#include "calc_mean.h"

int main(int argc, char *argv[])
{
	double v1,v2,m1,m2;
	v1=5.2;
	v2=7.9;
	m1=mean(v1,v2);
	m2=sub(v1,v2);

	printf("The mean of %f and %f is %f",v1,v2,m1);

	printf("\nThe subtraction of %f and %f is %f",v1,v2,m2);
}
