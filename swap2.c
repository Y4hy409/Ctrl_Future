// swapping of two values

#include <stdio.h>

int main() {
    int a,b,c;
   
    printf("enter values for a and b");
    scanf("%d%d",&a,&b);
    
    c=a;
    a=b;
    b=c;
    
    printf("new values of a and b are %d,%d",a,b);

    return 0;
}
