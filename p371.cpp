#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

main()
{
/* v = the first value that generates the longest sequence(if two or more
values generate the longest sequence then only show the lower one)*/
    long long int i,l,h,v,s,largest_count,temp;
/*s = the length of generated sequence*/
    while(scanf("%lld %lld",&l,&h)==2){
        v=s=largest_count=0;

        if(l==0 && h==0) break;
        if(l>h) swap(l,h);

        for(i=l; i<=h; i++){
            long long int count=0;
            for(temp=i; temp!=0; ){//zero cannot be divided
                if(temp%2==0){
                    temp/=2;
                    count++;
                }
                else{
                
                    temp=(3*temp)+1;
                    count++;
                }
                if(temp==1)
                    break;
            }
            if(largest_count < count){
                s = largest_count = count;
                v=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence"
        " of %lld values.\n",l,h,v,s);
    }
}
