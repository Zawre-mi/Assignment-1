#include<stdio.h>
#include<conio.h>
/*float const pi=3.14;*/
void main()
{
    system("cls");
	float r,a,c;
	float const pi=3.14;
	printf("Enter Radius: ");
	scanf("%f",&r);
	a=pi*r*r;
	c=2*pi*r;
	printf("Area: %.3f\n",a);
	printf("Circumference: %.3f",c);
	getch();
}
