#include <iostream>
using namespace std;

main()
{
    long int a,b;

    while(cin>>a>>b){
        if(a<b) { swap(a,b);}
        printf("%ld\n",a-b);
    }
}
