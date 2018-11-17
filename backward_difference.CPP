#include<stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int x[5]={1,2,3,4,5};
    int y[5]={1,8,27,64,125};
    float z[5][5]={0};
    int i=0,j=0,k=0;

    for(i=0;i<5;i++)
    {
        z[i][0]=y[i];
    }
    for(i=1;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            z[j][i]=z[j][i-1]-z[j-1][i-1];
        }
    }
    printf("F(x)=x^3\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%f\t",z[i][j]);
        }
        printf("\n");
    }

    float v=0;
    printf("Enter the value of x: ");
    scanf("%f",&v);

    float ans=0;
    float sum=1.0;

    float h=x[1]-x[0];

    float u=((v-x[4])/h)*1.0;

    ans+=z[4][0];

    for(i=1;i<5;i++)
    {
        sum=1.0;
        for(j=0;j<i;j++)
        {
            sum*=u+j;
        }
        ans+=((sum*z[4][i])/fact(i))*1.0;
    }

    printf("The answer is: %f",ans);

    return 0;
}
