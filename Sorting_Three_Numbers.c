#include<stdio.h>
int main(void)
{
	int a,b,c,temp,i;
	scanf("%d %d %d",&a,&b,&c);
	for(i = 0;i <= 1;i++){
	if(a > b){
		temp = a;
		a = b;
		b = temp;
		if(b > c){
                	temp = b;
                	b = c;
                	c = temp;
		}
	}else if(b > c){
		temp = b;
                b = c;
                c = temp;
		if(a > b){
                	temp = a;
                	a = b;
                	b = temp;
		}
	}else{
		i++;
	}
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
