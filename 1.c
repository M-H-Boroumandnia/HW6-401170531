#include<stdio.h>
int main(){
    float a,max,min,s=0,t=0;
    scanf("%f ",&a);
    max=min=a;
    while(a!=-1){
        t++;
        if(max<a){
            max=a;
        }
        if(min>a){
            min=a;
        }
        s=a+s;
        scanf("%f",&a);
    }
    printf("%.0f\n%.0f\n%.2f",min,max,s/t);
    return 0;
}