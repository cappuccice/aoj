/*#include<stdio.h>
int main(void)
{
  int m,f,r,i,j;
  i = 0;
  char grade[10000];
  while(1){
    scanf("%d %d %d",&m,&f,&r);
    if(m == -1 && f == -1 && r == -1){
      break;
    }
    if(m == -1 || f == -1 || m + f < 30){
      grade[i] = 'F';
    }else if(m + f >= 80){
      grade[i] = 'A';
    }else if(m + f >= 65 && m + f < 80){
      grade[i] = 'B';
    }else if(m + f >= 50 && m + f < 65){
      grade[i] = 'C';
    }else if(m + f >= 30 && m + f < 50){
      grade[i] = 'D';
      if(r >= 50){
        grade[i] = 'C';
      }
    }
    i++;
  }
  for(j = 0;j <= i;j++){
    printf("%c\n",grade[j]);
  }
  return 0;
}*/
#include <stdio.h>

int main(){
    int m, f, r;
    while(1){
        scanf("%d %d %d ", &m, &f, &r);
        if(m==-1&&f==-1&&r==-1)break;
        if(m==-1||f==-1){
            printf("F\n");
        }else if(m+f>=80){
            printf("A\n");
        }else if(m+f>=65){
            printf("B\n");
        }else if(m+f>=50){
            printf("C\n");
        }else if(m+f>=30){
            if(r>=50){
                printf("C\n");
            }else{
                printf("D\n");
            }
        }else{
            printf("F\n");
        }
    }
    return 0;
}
