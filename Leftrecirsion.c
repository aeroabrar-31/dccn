#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
charnt;
charb,a;
intnum;
int i;
char p[10][SIZE];
int index=3;
printf("Enter Number of productions:");
scanf("%d",&num);
printf("Enter the grammar as E->E-A:\n");
for(i=0;i<num;i++)
scanf("%s",p[i]);
for(i=0;i<num;i++)
{
printf("\nGRAMMAR:%s",p[i]);
nt=p[i][0];
if(nt==p[i][index])
{
a=p[i][index];
printf("is left recursive:\n");
while(p[i][index]!=0 && p[i][index]!='|')
{
index++;
}
if(p[i][index]!=0)
{
b=p[i][index+1];
printf("Grammar without left recursion;\n");
printf("%c->%c%c\'\n",nt,b,nt);
printf("\n%c\'->%c%c\'|E\n",nt,a,nt);
}
else
printf("can't be reduced\n");
}
else
printf("is not left recursive\n");
index=3;
}
}
Sample Output:
Enter number of productions: 3
Enter the grammar as E->E-A:
E->EA|A
A->a
E->i
Grammar:E->EA|A is left recursive
Grammar without left recursion
E->AE’
E’->AE’|E
Grammar:A->a is not left recursive
Grammar:E->I is not left recursive
