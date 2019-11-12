#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

main()
{
    int n;
    char arr1[]={'o','n','e'}, arr2[]={'t','w','o'};

    cin>>n;

    for(int i=0; i<n; i++){

        string s;
        cin>>s;

        if(s.size()==3){

            int count1, count2;
            count1=count2=0;

            for(int j=0; j<3; j++){
                if(s[j]==arr1[j]) count1++;
                else if(s[j]==arr2[j]) count2++;
            }
            if(count1>count2) cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
        else if(s.size()==5) cout<<"3"<<endl;

    }

}
