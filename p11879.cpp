#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

main()
{
    string s;
    int temp;

    for(int i=0; cin>>s, i<10; i++){
        if(s[0]=='0' && s.size()==1)
            break;
        temp=0;
        for(int i=0; i<s.size(); i++){
            temp=( (temp*10)+(s[i]-'0') )%17;
        }

        
        if(temp==0)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
}
