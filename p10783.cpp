#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    int a,b,n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int sum=0;
        cin>>a>>b;

        for(int j=a; j<=b; j++){
            if(j%2!=0) { sum+=j;}
        }
        cout<<"Case "<<i<<": "<<sum<<endl;
    }
}
