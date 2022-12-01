#include<stdio.h>
int main(){
    long int n,b;
    scanf("%ld",&n);
    for(int i=0;i*i<=n;i++){
        b=i*i;
        }
        if(b==n){
            printf("YES");
        }
        else
            printf("NO");

    return 0;
}