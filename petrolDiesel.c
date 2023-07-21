// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c,d,e,pet,die;
    int a1,b1,c1,d1,e1;
    int m=60;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    scanf("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1);
    pet=c+m*(d/(a*b)+e);
    die=c1+m*(d1/(a1*b1)+e1);
    
    printf("The cost for petrol vehicle is %d\n",pet);
    printf("The cost for petrol vehicle is %d\n",die);
    if(pet>die)
    {
        printf("DiEsEl");
    }
    else
    {
        printf("PeTrOl");
    }

    return 0;
}