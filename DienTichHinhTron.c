#include <stdio.h>
#include <math.h>
main (){
	float r,area,pi=3.14159;
	printf("Enter the radius of circle: ");
	scanf("%f",&r);
	if (r>0){
		area=pow(r,2)*pi;
		printf("%f",area);
	}
	else printf("-1");
}
