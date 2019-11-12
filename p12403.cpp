#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    int n,sum=0,a=0;

    cin>>n;

    for(int i=0; i<n; i++){//test cases
        string s;
        cin>>s;

        if(s=="donate"){
            cin>>a;
            sum+=a;
        }
        else if(s=="report") cout<<sum<<endl;
    }

}
