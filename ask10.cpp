#include <stdio.h>
#include <math.h>

int main(){
	
	int x,y,p;
	double lx,ly;
	printf("give 2 integers:");
	scanf("%d %d",&x,&y);
	
	printf("their sum is %d\n",x+y);
	printf("bigger is %d\n",x>y?x:y);
	p=pow(x,y);
	printf("x^y is %d\n",p);
	lx=log(x);
	ly=log(y);
	printf("log(%d)=%lf , log(%d)=%lf",x,lx,y,ly);
}
