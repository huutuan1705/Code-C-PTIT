#include<stdio.h>
#include<math.h>
int main(){
    long long x,y,z,t,a,b,c,d;
    scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&x,&y,&z,&t,&a,&b,&c,&d);
    long long m,n,k,h;
    m=x-z; n=y-t;
    k=a-c; h=b-d;
    if((m*0+n*1==0)||(k*0+h*1==0)) printf("0");
    else{
        long maxhd,maxtd,minhd,mintd;
        maxhd=(x>z)?x:z;
        maxhd=(maxhd>a)?maxhd:a;
        maxhd=(maxhd>c)?maxhd:c;
        maxtd=(y>t)?y:t;
        maxtd=(maxtd>b)?maxtd:b;
        maxtd=(maxtd>d)?maxtd:d;
        minhd=(x<z)?x:z;
        minhd=(minhd<a)?minhd:a;
        minhd=(minhd<c)?minhd:c;
        mintd=(y<t)?y:t;
        mintd=(mintd<b)?mintd:b;
        mintd=(mintd<d)?mintd:d;
        long long m= abs(maxhd-minhd);
        long long n= abs(maxtd-mintd);
        if(m>=n) printf("%lld",(long long) m*m);
        else printf("%lld",(long long) n*n);
    }
}
