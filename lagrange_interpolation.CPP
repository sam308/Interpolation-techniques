#include<stdio.h>

int main()
{
    float x[4]={1,2,3,4};
    float y[4]={1,8,27,64};

    float ans=0.0,prod=1.0;

    int i=0,j=0;
    float v=0;

    printf("F(x)=x^3\n");
    printf("Enter the value of x: ");
    scanf("%f",&v);
    for(i=0;i<4;i++)
    {
        prod=1.0;
        for(j=0;j<4;j++)
        {
            if(j!=i)
            {
                prod*=((v-x[j])/(x[i]-x[j]))*1.0;
            }
        }
        ans+=y[i]*prod*1.0;
    }

    printf("The answer is: %f",ans);

    return 0;
}
