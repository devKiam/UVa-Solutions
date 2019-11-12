#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

main()
{
    string s;
    int i;
    while(cin>>s){
        for(i=0; i<s.size(); i++)
            printf("%c",s[i]-7);
        cout<<endl;
    }
}
