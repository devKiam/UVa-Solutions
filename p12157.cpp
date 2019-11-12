#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++){//test cases

        int num_of_calls, arr[20];
        cin>>num_of_calls;

        for(int j=0; j<num_of_calls; j++){//inputs
            cin>>arr[j];
        }
//calculation part
        int mile=0;
        for(int j=0; j<num_of_calls; j++){//mile calculation for number of inputs

            for(int k=0; k<=arr[j]; k+=29){
                mile+=10;
                k++;
            }

        }

        int juice=0;
        for(int j=0; j<num_of_calls; j++){

            for(int k=0; k<=arr[j]; k+=59){//juice calculation for number of inputs
                juice+=15;
                k++;
            }

        }

        if(mile<juice) cout<<"Case "<<i+1<<": "<<"Mile "<<mile<<endl;
        else if(mile==juice) cout<<"Case "<<i+1<<": "<<"Mile Juice "<<mile<<endl;
        else cout<<"Case "<<i+1<<": "<<"Juice "<<juice<<endl;
    }
}
