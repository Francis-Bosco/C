// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a=0;
    int b=1;
    int c,n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
    }
    printf("%d",c);

    return 0;
}
