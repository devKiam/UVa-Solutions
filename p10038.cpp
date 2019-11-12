#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//solution by Kiam Ahmed

main()
{
    int n;

    while(cin>>n){
        vector<int> arr, check;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            arr.push_back(x);
        }

        int flag=1;

        for(int i=0; i<n-1; i++){
            int diff;

            diff = abs(arr[i]-arr[i+1]);
            check.push_back(diff);
        }

        sort(check.begin(),check.end());

        for(int i=0; i<check.size(); i++){
            if(check[i]!=i+1)
            {
                flag=0;
                break;
            }
        }

        if(flag==0) cout<<"Not jolly"<<endl;
        else cout<<"Jolly"<<endl;
    }
}
