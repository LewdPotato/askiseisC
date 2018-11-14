#include <stdio.h>

int main()
{
	int a,b,syn=0;
	printf("give 2 integers:");
	scanf("%d %d",&a,&b);
	if(a*b>0 && a*b<10){
		syn=a+b;
		printf("their sum is:%d",syn);
	}else if(a*b>100 && a*b<1000){
		syn=a-b;
		printf("their difference is:%d",syn);
	}else{
		printf("the numbers do not meet the requirements");
	}

}

