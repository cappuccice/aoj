#include<stdio.h>
int main(void)
{
	int sheet[101][101];
	int r,c;
	int i,j,k,temp = 0;
	scanf("%d %d",&r,&c);
	for(i = 0;i < r;i++){
		for(j = 0;j < c;j++){
			scanf("%d",&sheet[i][j]);
		}
	}
	for(i = 0;i < r;i++){
		for(j = 0;j < c;j++){
			printf("%d ",sheet[i][j]);
			temp += sheet[i][j];
		}
		printf("%d\n",temp);
		temp = 0;
	}
	for(i = 0;i < c;i++){
		for(j = 0;j < r;j++){
			temp += sheet[j][i];
		}
		printf("%d ",temp);
		temp = 0;
	}
	for(i = 0;i < c;i++){
		for(j = 0;j < r;j++){
			temp += sheet[j][i];
		}
	}
	printf("%d\n",temp);
	return 0;
}
