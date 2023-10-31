#include <stdio.h>
int main()
{
	float a;
	float b;
	scanf("%f",&a);
if(a<=800){
	b=a*0.9;
	double db;
	printf("%.1f",b);
}else{
	if(a>800 && a<=1500){
		b=a*0.9*0.9;
		double db;
		printf("%.1f",b);
	}else{
		if(a>1500){
			b=a*0.9*0.79;
			double db;
			printf("%.1f",b);
		}
	}
}
}
  
