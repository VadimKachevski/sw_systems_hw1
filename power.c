#include "myMath.h"
#define E 2.71828
double Exp(int x)
{
    return Pow(E,x);
}
double Pow(double x,int y)
{
     if(y==0)
    {
        return 1;
    }
    double ans = 1;
    if(y>0)
    {
      for(int i=0;i<y;i++)
        {
            ans = ans*x;
        }
    }
    else
    {
        for(int i=0;i>y;i--)
        {
            ans = ans*x;
        }
        ans = 1/ans;
    }
    return ans;
}
