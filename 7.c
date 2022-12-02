//this code has been updated
#include<stdio.h>

int main(){
    char next,c;
    long long int max,t=-1,i=0,d=0,n,l=0;
    scanf("%lld\n",&n);    
    for(long long int f=1;f<=n;f++){
        c=getchar();
        next=c;
        i=0;
        d=0;
        t=-1;
        do
        {
            t++;
            c=getchar();
            if(c>=next){
                i=i+(1<<t);
                next=c;
            }else{
                i=i;
                next=c;
            }
        
        }while(c!='\n');            
        for(long long int b=1;b<t;b++){
            if(((i>>(b-1))&1)!=((i>>b)&1)){
                d++;
            } 
        }
        if(d==0){
            l=l+(3<<(2*(f-1)));
        }else if(d==1)
                l=l+(2<<(2*(f-1)));
            else
                l=l+(1<<(2*(f-1)));
   
    }
    for(long long int g=1;g<=n;g++){
        if(((l>>((((g-1)*2)))&(3)))==3)
            printf("common\n");
        else if(((l>>((((g-1)*2)))&(3)))==2)
                printf("efficient\n");
            else if(((l>>((((g-1)*2)))&(3)))==1)
                    printf("inefficient\n");
    }
    return 0;
}