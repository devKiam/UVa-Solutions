#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    int n,k;

    while(cin>>n>>k){
        int sum=n;

        while(n>=k){
            sum+=n/k;
            n=(n/k)+(n%k);
        }

        cout<<sum<<endl;
    }
}

/* n=10, k=3
  (1 1 1)( 1 1 1)( 1 1 1)  1
     1       1       1     1
             1             1*/
