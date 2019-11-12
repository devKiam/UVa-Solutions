#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

main()
{
    while(1){
        int a,b,c=0;
        cin>>a>>b;
        if(a+b==0) break;

        for(int j=a; j<=b; j++){
            int temp;
            temp=sqrt(j);

            if(temp*temp == j) c++;
        }

        cout<<c<<endl;

    }
}
