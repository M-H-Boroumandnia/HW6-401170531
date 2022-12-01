#include<stdio.h>
int main(){
    int xa,ya,xb,yb,xc,yc,xd,yd;
    int z1,z2,z3,z4,d1,d2,m1;
    int count=0;
    scanf("%d %d\n%d %d\n%d %d\n%d %d",&xa,&ya,&xb,&yb,&xc,&yc,&xd,&yd);
    z1=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
    z2=(xa-xd)*(xa-xd)+(ya-yd)*(ya-yd);
    z3=(xb-xc)*(xb-xc)+(yb-yc)*(yb-yc);
    z4=(xc-xd)*(xc-xd)+(yc-yd)*(yc-yd);
    d1=(xa-xc)*(xa-xc)+(ya-yc)*(ya-yc);
    d2=(xb-xd)*(xb-xd)+(yb-yd)*(yb-yd);
    m1=(d1==d2);
    if((xa==xb && ya==yb) || (xa==xc && ya==yc) || (xa==xd && ya==yd) || (xb==xc && yb==yc) || (xb==xd && yb==yd) || (xd==xc && yd==yc)){
        printf("None");
    }
    else{
        while(1){
            if(z1==z2 && z1==z3 && z1==z4 && z2==z3 && z2==z4 && z3==z4){
                switch(m1){
                    case 1 :printf("Square");break;
                    case 0 :printf("Diamond");break;
                }
                count=1;
            }
            if(z1==z4 && z2==z3 && z1!=z2 && z1!=z3 && z2!=z1 && z2!=z4){
                switch(m1){
                    case 1 :printf("Rectangle");break;
                    case 0 :printf("Parallelogram");break;
                }
                count=1;
            }
            if((z1==z2 && z3==z4 && z1!=z3 && z2!=z4)||(z1==z3 && z2==z4 && z1!=z2 && z3!=z4)){
                printf("Kite");
                count=1;
            }
            if(count==0){
                printf("None");
            }
            break;
        }
    }

    return 0;
}