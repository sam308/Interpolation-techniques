#include<stdio.h>
#include<math.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;

    return f;
}

int main()
{
    int x[4]={1,2,3,4};
    int y[4]={1,8,27,64};
    int i=0,j=0,k=0;
    float h=0.0;
    h=x[1]-x[0];
    float z[4][4]={0};
    for(i=0;i<4;i++)
    {
        z[i][0]=y[i];
    }
    for(i=1;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            z[j][i]=z[j+1][i-1]-z[j][i-1];
        }
    }
    printf("f(x)=x^3\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f\t",z[i][j]);
        }
        printf("\n");
    }

    float v=0;
    printf("Enter the value of x: ");
    scanf("%f",&v);

    float ans=0;
    ans+=z[0][0];
    float diff=1.0;
    for(i=1;i<4;i++)
    {
        diff=1.0;
        for(j=0;j<i;j++)
        {
            diff*=v-x[j];
        }
        ans+=((z[0][i]*diff)/(fact(i)*pow(h,i)))*1.0;
    }

    printf("The answer is: %f",ans);

    return 0;
}
