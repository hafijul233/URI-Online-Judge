#include <stdio.h>

int main()
{
    int product1,product2,serial1,serial2;
    float prize1,prize2,total;
    while(scanf("%d %d %f\n%d %d %f",&product1,&serial1,&prize1,&product2,&serial2,&prize2)!=EOF){
        total = (serial1*prize1)+(serial2*prize2);
        printf("VALOR A PAGAR: R$ %0.2f\n",total);
    }
    return 0;
}
