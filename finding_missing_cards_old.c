#include<stdio.h>
struct card{
  char mark;
  int num;
  int check;
};
int main(void)
{
  struct card tcards[52]=
  {
    {'S',1,0},{'S',2,0},{'S',3,0},{'S',4,0},{'S',5,0},{'S',6,0},{'S',7,0},{'S',8,0},{'S',9,0},{'S',10,0},{'S',11,0},{'S',12,0},{'S',13,0},
    {'H',1,0},{'H',2,0},{'H',3,0},{'H',4,0},{'H',5,0},{'H',6,0},{'H',7,0},{'H',8,0},{'H',9,0},{'H',10,0},{'H',11,0},{'H',12,0},{'H',13,0},
    {'C',1,0},{'C',2,0},{'C',3,0},{'C',4,0},{'C',5,0},{'C',6,0},{'C',7,0},{'C',8,0},{'C',9,0},{'C',10,0},{'C',11,0},{'C',12,0},{'C',13,0},
    {'D',1,0},{'D',2,0},{'D',3,0},{'D',4,0},{'D',5,0},{'D',6,0},{'D',7,0},{'D',8,0},{'D',9,0},{'D',10,0},{'D',11,0},{'D',12,0},{'D',13,0}
  };
  struct card fcards[52];
	int i,n;
	scanf("%d",&n);
	for(i = 0;i < n*2;i++){
		scanf("%c %d",&fcards[i].mark,&fcards[i].num);
	}
  printf("\n");
	for(i = 0;i < n*2;i++){
    if(fcards[i].mark == 'S'){
      tcards[fcards[i].num-1].check = 1;
    }
    if(fcards[i].mark == 'H'){
      tcards[fcards[i].num+12].check = 1;
    }
    if(fcards[i].mark == 'C'){
      tcards[fcards[i].num+25].check = 1;
    }
    if(fcards[i].mark == 'D'){
      tcards[fcards[i].num+38].check = 1;
    }
  }
  for(i = 0;i <= 51;i++){
    if(tcards[i].check == 0){
      printf("%c %d\n",tcards[i].mark,tcards[i].num);
    }
  }
	return 0;
}
