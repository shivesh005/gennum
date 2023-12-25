#include<stdio.h>
int gennum(int b){
    int i,j,k=3;
    for ( i = 0; i < b; i++)
    {
        j=4*k*(1-3*i);
    } 
    return j;
}
    int main()
{ 
      int x,i;
      i=45;
    x=gennum(i);
    printf("%d",x);
} 