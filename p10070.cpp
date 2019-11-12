#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

main()
{
    int mod400,mod100,mod4,mod15,mod55,flag=0;
    string s;

    while(cin>>s){
        mod400=mod100=mod4=mod15=mod55=0;
        /*simply this loop won't create a blank-line immediately or 0
        at first execution,
        it shouldn't print a blank-line at the last execution of loop*/
        if(flag==1){
            cout<<endl;
        }
        for(int i=0; i<s.size(); i++){
            mod400=( (mod400*10) + (s[i]-'0') ) %400;
            mod100=( (mod100*10) + (s[i]-'0') ) %100;
            mod4=( (mod4*10) + (s[i]-'0') ) %4;
            mod15=( (mod15*10) + (s[i]-'0') ) %15;
            mod55=( (mod55*10) + (s[i]-'0') ) %55;
        }
        if( mod400==0 || (mod4==0 && mod100!=0) ){
            cout<<"This is leap year."<<endl;
            if(mod15==0)
                cout<<"This is huluculu festival year."<<endl;
            if(mod55==0)
                cout<<"This is bulukulu festival year."<<endl;
        }
        else if(mod15==0){
            cout<<"This is huluculu festival year."<<endl;
        }
        else{
            cout<<"This is an ordinary year."<<endl;
        }
        flag=1;
    }
}
