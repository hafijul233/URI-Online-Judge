#include <stdio.h>

int main(){
float a,b,c;
while(scanf("%f %f %f",&a,&b,&c)!=EOF){
printf("MEDIA = %0.1f\n",((a*2)+(b*3)+(c*5))/(2+3+5));
}
return 0;
}
