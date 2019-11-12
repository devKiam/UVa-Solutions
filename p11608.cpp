#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    long long int c=0;

    while(1){
        int created[13],required[12];

        cin>>created[0];

        if(created[0]<0) break;

        for(int i=1; i<13; i++){
            cin>>created[i];
        }
        for(int i=0; i<12; i++){
            cin>>required[i];
        }

        c++;
        cout<<"Case "<<c<<":"<<endl;

        for(int i=0; i<12; i++){
            int temp=0;
            if(created[i] < required[i]){
                cout<<"No problem. :("<<endl;
                created[i+1]+=created[i];
            }
            else{
                cout<<"No problem! :D"<<endl;
                temp=created[i]-required[i];
                created[i+1]+=temp;
            }
        }

    }
}
