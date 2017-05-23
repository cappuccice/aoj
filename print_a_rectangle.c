#include<stdio.h>
int main(void)
{
	int i,j,wide,height;
	int h[10000],w[10000];
	i = 1;
	while(1){
		scanf("%d %d",&h[i],&w[i]);
		if(h[i] == 0 && w[i] == 0){
			break;
		}
		i++;
	}
	for(j = 1;j < i;j++){
		for(height = 1;height <= h[j];height++){
			for(wide = 1;wide <= w[j];wide++){
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
