#include<stdio.h>
int main(){
    long int sum,xor,b,a,c,d,t=0;
    scanf("%ld %ld",&sum,&xor);
    for(a=0,b=sum;a<=b;a++,b--){
            if((a^b)==xor){
                c=a;
                d=b;
                t=1;
            }
        }
    if(t==0)
        printf("None");
    if(t==1)
        printf("%ld %ld",c,d);
}