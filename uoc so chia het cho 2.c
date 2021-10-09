#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a--)
    {
      int n;
      int i=2,d=0;
      scanf("%d",&n);
      while(i <= sqrt(n))
       {
           if(n%i==0) {
               if(i%2==0) d++;
               if (i != (n / i)) {
                   if((n/i)%2==0) d++;
               }
           }
            i++;
       }
       if (n%2==0) printf("%d\n",d+1);
       else printf("%d\n",d);
    }
}
