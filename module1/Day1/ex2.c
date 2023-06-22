#include <stdio.h>

int main()
{
int n;
scanf("%d",&n);
if(n>=90&&n<=100)
printf("GRADE A");
else if(n>=75&&n<=89)
printf("GRADE B");
else if(n>=60&&n<=74)
printf("GRADE C");
else if(n>=50&&n<=59)
printf("GRADE D");
else if(n>=0&&n<=49)
printf("GRADE F");
    
     return 0;
}
