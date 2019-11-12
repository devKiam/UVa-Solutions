#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

main()
{
    int n, t=0, x;

    while(cin>>n){

        if(n == 0) break;

        vector <int> arr;
        int sum=0;

        for(int i=0; i<n ; i++){
            cin>>x;
            arr.push_back(x);
            sum+=x;
        }

        int avg;
        avg=sum/n;
        sum=0;

        for(int i=0; i<arr.size() ; i++){
            if(arr[i]>avg){
                sum=sum+(arr[i]-avg);
            }
        }

        ++t;
        cout<<"Set #"<<t<<endl<<"The minimum number of moves is "<<sum<<"."<<endl<<endl;
    }
}
