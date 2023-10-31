#include <stdio.h>
int main()
{
	float a;
	float b;
	float c;
	scanf("%f %f",&a, &b);
	c=a*b;
if(a<=60){
	double dc;
	printf("%.1f",c);
}else{
	if(a>61 && a<=120){
		c*1.33;
		double dc;
		printf("%.1f",c);
	}else{
		if(a>120){
			c*1.66;
			double dc;
			printf("%.1f",c);
		}
	}
}
}
  
