#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[10000],i,j,c=0,k,l=0,t,b[100];
    clrscr();
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
                c++;
            }
        }
            if(c>=k)
            {
            a[i]='$';
            }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='$')
        {
            b[l]=a[i];
            l++;
        }
        
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
        printf("%d ",b[i]);
    }
    getch();
}
