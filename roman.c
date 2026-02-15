#include <stdio.h>
#include<string.h>
int value(char ch)
{
    int v=0;
    if(ch=='I')
    {
        v=1;
    }
    else if(ch=='V')
    {
        v=5;
    }
    else if(ch=='X')
    {
        v=10;
    }
    else if(ch=='L')
    {
        v=50;
    }
    else if(ch=='C')
    {
        v=100;
    }
    else if(ch=='D')
    {
        v=500;
    }
    else if(ch=='M')
    {
        v=1000;
    }
    return v;
}
int main()
    {
        char Rnum[100];
        printf("enter the roman numbers: \n");
        scanf("%s",Rnum);
        int size=strlen(Rnum);
        int res=0;
        int i;
        for(i=0;i<=size-1;i++)
        {
            char ch=Rnum[i];
            if(i!=size-1)
            {
                char ch1=Rnum[i+1];
                int v1=value(ch);
                int v2=value(ch1);
                if(v1>v2)
                {
                 res=res+v1;   
                }
                else
                {
                    res=res+(v2-v1);
                    i++;
                }
            }
            else
            {
                int v=value(ch);
                res=res+v;
            }
        }
        printf("v=%d \n",res);
        return 0;
    }
    
