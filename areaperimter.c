//2.Write a C program to compute the perimeter and area of a rectangle, Circle.
#include<stdio.h>
int main(){
	int l, b, r;                                            //perimeter of rectangle = 2(l+b)
	float PI = 3.14;                                       //perimeter of circle = 2PIr
	printf("enter length and breadth of rectangle:");
	scanf("%d%d",&l,&b);                                    //area of circle = PIr^2
	printf("\nenter radius of circle:");                       //area of rectangle = l*b
    scanf("%d",&r);
    printf("\nperimeter of rectangle is:%d",2*(l+b));
    printf("\narea of rectangle is:%d",l*b);
    printf("\nperimeter of circle:%f",2*PI*r);
    printf("\narea of circle :%f",PI*r*r);
    return 0;
	
}
