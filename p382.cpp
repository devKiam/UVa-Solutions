#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    long int n;

    cout<<"PERFECTION OUTPUT"<<endl;

    while(cin>>n){
        if(n==0) { break;}
        int sum=0;

        for(long int i=1; i<=n/2; i++){
            if(n%i==0) { sum+=i;}
        }
        
        if(sum>n) { printf("%5.0ld  ABUNDANT\n",n);}
        else if(sum<n) {printf("%5.0ld  DEFICIENT\n",n);}
        else {printf("%5.0ld  PERFECT\n",n);}
    }
    cout<<"END OF OUTPUT"<<endl;
}
