#include <stdio.h>

int main() {
    int size;
    printf("enter the size of the array \n");
    scanf("%d",&size);
    int a[size];
    int i,j;
    for( i=0;i<=(size-1);i++)
    {
        printf("enter the %d value: \n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(size-1);i++)
    {
        if(a[i]!=0)
        {
           for(j=i+1;j<=(size-1);j++)
           {
               if(a[i]==a[j])
               {
                   a[j]=0;
               }
           }
        }
    }
    for(i=0;i<=(size-1);i++)
    {
         printf("a[%d]=%d: \n",i,a[i]);
    }
    return 0;
}
