#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

main()
{
    int n;
    cin>>n;
    getchar();

    for(int i=0; i<n; i++){
        string s;
        int count=0;
        getline(cin,s);

        for(int j=0; j<s.size(); j++){

            if(s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j' ||
            s[j]=='m' || s[j]=='p' || s[j]=='t' || s[j]=='w' || s[j]==' ') {
                count++;
            }
            else if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k' ||
            s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x'){
                    count=count+2;
                    }
            else if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l' ||
            s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y'){
                    count=count+3;
               }
            else count=count+4;

        }

        cout<<"Case #"<<i+1<<": "<<count<<endl;
    }
}
