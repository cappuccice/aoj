#include<stdio.h>
int main(void)
{
	int count[5][4][11] = {0};
	int i,j,k,n,b,f,r,v;
	scanf("%d",&n);
	for(i = 0;i <= n-1;i++){
		scanf("%d %d %d %d",&b,&f,&r,&v);
		count[b][f][r] += v;
	}
	for(i = 1;i <= 4;i++){
		for(j = 1;j <= 3;j++){
			for(k = 1;k <= 10;k++){
				printf(" %d",count[i][j][k]);
			}
			printf("\n");
		}
		if(i <= 3){
			printf("####################\n");
		}
	}
	return 0;
}
