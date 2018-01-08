#include<stdio.h>

int main(){
char name[50];
double r,b;
while(scanf("%s%lf%lf",&name,&r,&b)!=EOF){
printf("TOTAL = R$ %0.2lf\n",r+((b*15)/100.0));
}
return 0;
}
