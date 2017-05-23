#include<stdio.h>
int main(void)
{
	double a[10000];
	double min,max,sum;
	int i,n;
	sum = 0;
	max = -1000000;
	min = 1000000;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%lf",&a[i]);
		sum = sum + a[i];
		if(max < a[i]){
			max = a[i];
		}
		if(min > a[i]){
			min = a[i];
		}
	}
	printf("%.0f %.0f %.0f\n",min,max,sum);
	return 0;
}
