#include <stdio.h>
#include <stdlib.h>

double width = 32.3;
double height = 15.3;
double parimeter;
double area;




int main(){
	parimeter = 2.0 * (height + width);
	area = width * height;

	printf("The parimeter is %lf, and the area is %lf.\n", parimeter, area);

	return 0;
}