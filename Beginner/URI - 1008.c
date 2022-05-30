#include<stdio.h>

int main(){
int n,p;
float r;
while(scanf("%d%d%f",&n,&p,&r)!=EOF){
printf("NUMBER = %d\nSALARY = U$ %0.2f\n",n,(float)p*r);
}
return 0;
}
