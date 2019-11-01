#include<stdio.h>
int main(void){
	{//case a
		int i,j,x;
		double sum, exp;
		printf("S=1+2^2+3^3+...+x^x\n");
		printf("Please input a number x:");
		scanf("%d", &x);
		sum=0;
		exp=1;
		for(i=1;i<=x;i++){
			exp=1;
			for(j=1;j<=i;j++)
				exp*=i;
			sum+=exp;
		}
		printf("S=%lf\n\n", sum);
	
	}	
	
	{//case bgi
		int i,j,neg;
		double x,sum,exp;
		printf("S=1/x^1-1/x^3+...-1/x^11");
		printf("Please input a number x:");
		scanf("%lf", &x);
		sum=0;
		neg=1;
		for(i=1;i<=11;i+=2){
			for(j=1, exp=1;j<=i;j++)
				exp*=x;
			sum+=(1./exp*neg);
			neg=-neg;
		}	
		printf("S=%.010lf\n\n", sum);
	}
	return 0;
}
//goodbye 
