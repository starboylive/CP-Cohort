#include<stdio.h>

int main()
{
    int t,i;
    int l[6];
    scanf("%d",&t);
    int l1,l2,l3,b1,b2,b3;
    while(t--)
    {
        for(i=0;i<6;i++)
            scanf("%d",&l[i]);
        l1=l[0];
        b1=l[1];
        l2=l[2];
        b2=l[3];
        l3=l[4];
        b3=l[5];
        
        if(l1>b1)
        {
            if(b2==b3)
            {
                if(l1==l2 && l2==l3 && l3==l1 && l1==b1+b2+b3)
                    printf("yes\n");
                else if(l1==l2+l3 && b1+b2 ==l1)
                    printf("yes\n");
                else
                    printf("no\n");
            }
            else if(l1==l2 && l2==l3 && l3==l1 && l1==b1+b2+b3)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(b1>l1)
        {
            if(l2==l3)
            {
                if(b1==b2 && b2==b3 && b3==b1 && b1==l1+l2+l3)
                    printf("yes\n");
                else if(b1==b2+b3 && l1+l2==b1)
                    printf("yes\n");
                else
                    printf("no\n");
            }
            else if(b1==b2 && b2==b3 && b3==b1 && b1==l1+l2+l3)
                    printf("yes\n");
            else
                printf("no\n");
        }
        else
        {
            if(b2==b3)
            {
                if(l2+l3==l1 && b1+b2==l1)
                    printf("yes\n");
                else 
                    printf("no\n");
            }
            else if(l2==l3)
            {
                if(b2+b3==b1 && l1+l2==b1)
                    printf("yes\n");
                else 
                    printf("no\n");
            }
            else 
                printf("no\n");
        }
    }
    return 0;
}
