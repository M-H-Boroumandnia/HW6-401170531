#include<stdio.h>
int main(){
    int n,r,d,s=1,l=0;
    scanf("%d %d",&n,&r);
    for(int i=1;i<=n;i++){
        l=0;
        for(int b=10;i*10>=b;b=b*10){
            d=0;
            d=((i%b)-(i%(b/10)))/(b/10);
            s=1;
            for(int c=1;c<=d;c++){
                s=s*c;
            }
            l=l+s;
        }
        if(l%i==r){
            printf("%d\n",i);
        }
    }
    return 0;
}