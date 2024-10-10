#include <stdio.h>
#include <conio.h>

int main()
{
    int no, arm = 0, x = 0, count = 0, y=0,z,count2=0,arm2=0,i;

    printf("Enter a number:");
    scanf("%d",&no);

    arm2=y = no;
    while (no > 0)
    {
        count += 1;
        no = no/10;
    }

    count2=count;

   while(count>0)
   {
     x=y%10;
     z=x;
     for(i=0;i<count2-1;i++)
     {
     z=z*x;
     //printf("z is%d\n",z);

     }


     arm+=z;
     count--;
     y=y/10;
   }

    printf("%d\n",arm);

if(arm==arm2)
{
    printf("The number is armstrong.\n");
}
else
{
      printf("The number is not armstrong.\n");
}
    getch();
    return 0;
}
