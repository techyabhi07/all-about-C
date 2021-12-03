#include<stdio.h>
int main()
{
int l,b,r, area1,perimeter;
float area2 , circum;
printf("/n enter length & breadth of the rectangle:";
scanf("%d %d,&l,&b");
area1=l*b;
perimeter=2*l+2*b;
printf("area of rectangle=%d/n",area1);
printf("perimeter of rectangle=%d\n",perimeter);
printf("\n\n enter radius of circle:");
scanf("%d,&r);
area2=3.14*r*r;
printf("area of circle=%f\n",area2);
printf("circumference of circle=%f\n",circum);

return 0;






}