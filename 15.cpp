#include<stdio.h>

int main()
{
int i,j,a[50],b[50],n,m;

printf("\n Enter the no of value  :  ");
scanf("%d",&n);
printf("enter the first set value  :  ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
a[i]=b[i];
}
printf("enter the second set value  :  ");
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]>b[j])
{
m=a[i];
a[i]=a[j];
a[j]=m;
m=b[i];
b[i]=b[j];
b[j]=m;
}
else if(b[i]==b[i+1])
{
if(a[i]>a[j])
{
m=a[i];
a[i]=a[j];
a[j]=m;
}
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;


}