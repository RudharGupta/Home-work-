#include <stdio.h>
void main()
{
    float r;
    printf("enter the radius");
    scanf("%f",&r);
float area,peri;
area=3.14*r*r;
peri=2*3.14*r; 
printf("area of circle=%.2f",area);
printf("peri of circle=%.2f",peri);
int a;
printf("enter the side square");
scanf("%d",&a);
area = a*a;
peri=4*a;
printf("areas of square=%d\n",area);
printf("perimters of square=%d\n",peri);
int l,b;
printf("enter the length and breath");
scanf("%d",&l,&b);
area=l*b;
peri=2*(l+b);
printf("area of rectangle=%d\n",area);
printf("perimeter of rectangle=%d\n",peri);
}
