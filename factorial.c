// program to find factorial of a number 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,i;
    long long int j=1;
    
    printf("Enter a number to find factorial \t");
    scanf("%d",&a);
    if(a==0||a==1){
        printf("Factorial fo %d is 1\n",a);
    }
    else{
    for(i=1;i<=a;i++){
        j=i*j;
    }
    printf("Factorial of %d is %lld\n",a,j);
   
    }
   
    return 0;
}