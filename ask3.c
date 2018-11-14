#include <stdio.h>

int main()
{
	int i;
	float syn=0,ba8;
	for(i=1;i<=10;i++) {
		printf("Show me what you got:\n");
		scanf("%f",&ba8);
		while(ba8<0 || ba8>10){
			printf("prepei apo 0 ews 10:\n");
			scanf("%f",&ba8);
		}
		syn+=ba8;
	}
	
	printf("mesos oros=%f",syn/10);

}
	
	
