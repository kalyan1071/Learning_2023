#include <stdio.h>
#include <string.h>

void main()
{
    int roll,phy,mat,che,total;
    float per;
    char name[20];
    scanf("%d",&roll);
    scanf("%s",name);
    scanf("%d%d%d",&phy,&mat,&che);
    total = phy+mat+che;
    per = total / 3.0;
     printf("\nRoll No : %d\nName : %s\n",roll,name);
     printf("Marks of Physics : %d\nMarks of Math : %d\nMarks of Chemistry : %d\n",phy,mat,che);
     printf("Total Marks = %d\nPercentage = %.2f\n",total,per);
}

