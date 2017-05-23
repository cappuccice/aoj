#include<stdio.h>
int main(void)
{
	int a[20000],b[20000];
	char op[20000];
	int j,i = 0;
	while(1){
		scanf("%d %c %d",&a[i],&op[i],&b[i]);
		if(op[i] == '?'){
			i--;
			break;
		}
		i++;
	}
	for(j = 0;j <= i;j++){
		if(op[j] == '+'){
			printf("%d\n",a[j]+b[j]);
		}else if(op[j] == '-'){
			printf("%d\n",a[j]-b[j]);
		}else if(op[j] == '*'){
			printf("%d\n",a[j]*b[j]);
		}else if(op[j] == '/'){
			printf("%d\n",a[j]/b[j]);
		}
	}
	return 0;
}
 
