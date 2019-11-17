#include <stdio.h>
#include "myMath.h"

double f1(double x);
double f2(double x);
double f3(double x);

int main()
{
    double x;
    printf("Enter the number x \n");
    scanf("%lf",&x);
    double ans = f1(x);
    printf("The value of f(x)= e^x + x^3 -2 at the point %0.4lf is: %0.4lf \n",x,ans);
    ans = f2(x);
    printf("The value of f(x)= 3x+2x^2 at the point %0.4lf is: %0.4lf \n",x,ans);
    ans = f3(x);
    printf("The value of f(x)= (4x^3)/5-2x at the point %0.4lf is: %0.4lf \n",x,ans);

    return 0;
}
double f1(double x)
{
    double ans1 = Exp(x);
    double ans2 = Pow(x,3);
    double ans3 = add(ans1,ans2);
    return (sub(ans3,2));
}
double f2(double x)
{
    double ans1 = mul(x,3);
    double ans2 = mul(Pow(x,2),2);
    return add(ans1,ans2);
}
double f3(double x)
{
    double ans1 = mul(Pow(x,3),4);
    double ans2 = div(ans1,5);
    double ans3 = mul(x,2);
    return sub(ans2,ans3);
}