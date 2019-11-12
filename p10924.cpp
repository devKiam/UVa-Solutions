#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

main()
{
    string s;

    while(cin>>s){
        int sum=0, temp;

        for(int i=0; i<s.size(); i++){

            if(s[i]>='a' && s[i]<='z'){
                temp=s[i]-96;
                sum+=temp;
            }
            else{
                temp=s[i]-38;
                sum+=temp;
            }

        }
        int flag=0;

        for(int i=2; i<=sqrt(sum); i++){
            if(sum%i == 0){
                flag=1;
                break;
            }
        }
        if(sum==1 || flag==0) cout<<"It is a prime word."<<endl;
        else if(flag==1) cout<<"It is not a prime word."<<endl;
    }
}
