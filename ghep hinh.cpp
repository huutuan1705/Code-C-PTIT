#include<stdio.h>
#include<math.h>

long long ktcp(long long a)
{
	long long b=sqrt(a);
	if(b*b==a) return b;
	b++;
	if(b*b==a) return b;
	return 0;
}

int main()
{
	long long a,b,c,d,e,f,x,y;
	scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f);
	x=a*b+c*d+f*e;
	y=ktcp(x);
	if(y==0) printf("NO");
	else
	{
		if(a>b){
            int t = a;
            a = b;
            b = t;
		}
		if(c>d){
            int t = c;
            c = d;
            d = t;
		}
		if(e>f){
            int t = e;
    e = f;
    f = t;
		}
		if(b==d && d==f && f==y) printf("YES");
		else
		{
			if(d==y) {
                int t = a;
                a = c;
                c = t;
                int g = b;
                b = d;
                d = g;
            }
			if(f==y)
                {
                int t = a;
                a = e;
                e = t;
                int g = b;
                b = f;
                f = g;
            }

			if(b==y)
			{
				a=y-a;
				if((c==a && e==a) || (d==a && e==a)|| (c==a && f==a) || (d==a && f==a))  printf("YES");
				else printf("NO");
			}
			else printf("NO");
		}

	}
}
