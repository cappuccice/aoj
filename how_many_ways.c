#include<stdio.h>
int main(void)
{
	int n,x;
	int i,j,k,ans;
	while(1){
		scanf("%d %d",&n,&x);
		ans = 0;
		if(n == 0&&x == 0){
			break;
		}
		for(i = 1;i <= n - 2;i++){
			for(j = 2;j <= n - 1;j++){
				for(k = 3;k <= n;k++){
					if(i + j + k == x && i < j && j < k){
						ans++;
					}
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
