#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

main()
{
    long long l,h,v;

    while(scanf("%lld %lld",&l,&h)==2){
        if(l==0 && h==0) { break;}
        if(l>h) { swap(l,h);}
        long long int maxcount=0;

        for(long long int i=l; i<=h; i++){
            long long int temp,count=0;

            for(temp=i; temp!=0; ){//zero cannot be divided
                if(temp%2==0) { temp/=2; }
                else { temp=(3*temp)+1; }
                count++;
                if(temp==1) { break;}
            }
            if(maxcount<count){maxcount=count; v=i;}
        }
        printf("Between %lld and %lld, %lld generates the "
        "longest sequence of %lld values.\n",l,h,v,maxcount);
    }
}
