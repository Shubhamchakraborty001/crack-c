#include <stdio.h>
int main(){
    int a,b,c;
    printf("ENTER 2 NUMBERS:");
    scanf("%d%d",&a&b);
    printf("before swapping a=%d b=%d\n"a,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping a=%d b=%d",a,b);
}