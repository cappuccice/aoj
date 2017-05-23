#include<stdio.h>
int main(void)
{
        int i = 1,j,x[10000],y[10000];
        while(1){
                scanf("%d %d",&x[i],&y[i]);
                if(x[i] == 0 && y[i] == 0){
                        break;
                }
                i++;
        }
        for(j = 1;j <= i-1;j++){
		if(x[j] < y[j]){
                	printf("%d %d\n",x[j],y[j]);
		}else{
			printf("%d %d\n",y[j],x[j]);
        	}
	}	
        return 0;
}
