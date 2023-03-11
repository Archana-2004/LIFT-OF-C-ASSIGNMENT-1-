#include<stdio.h>
int main(){
    float r;
    printf("Enter the radius of circle:\n");
    scanf("%f",&r);
    printf("Diameter of the circle is: %f\n",2*r);
    printf("Circumference of the circle is:%f\n",2*3.14*r);
    printf("Area of the circle is: %f\n",3.14*r*r);
    return 0;
}