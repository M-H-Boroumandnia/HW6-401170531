//this code let you to work with bitwise oprations
#include<stdio.h>
int main(){
    unsigned long long int a=0,b,c;
    int d,n,s,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&d);
        if(d==0)
            a=a+1;
        else
            a=a+((long long)1<<(d));
    }    
    scanf("%d",&s);
    for(int f=0;f<64;f++){
        b=a;
        if(((b>>f)&1)==1){
            for(int k=f+1;k<64;k++){
                c=a;
                if((((c>>k)&1)==1) && ((f+k)==s)){
                    count++;
                    printf("YES");
                    break;
                }
            }
        }
        if(count==1)
            break;
    }
    if(count==0){
        printf("NO");
    }
    return 0;
}