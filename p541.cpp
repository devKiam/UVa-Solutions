#include <iostream>
using namespace std;

main()
{
    int n;

    while(cin>>n){
        if(n==0) break;

        int arr[100][100], rowcount=0, colcount=0, rowflag=0, colflag=0;

        for(int i=0; i<n; i++){ //input loop
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
            }
        }

        for(int i=0; i<n; i++){ //row check
            int sum=0;

            for(int j=0; j<n; j++){
                sum+=arr[i][j];
            }
            if(sum%2==1){
                rowcount++;
                rowflag=i+1;
            }
        }

        for(int i=0; i<n; i++){ //column check
            int sum=0;

            for(int j=0; j<n; j++){
                sum+=arr[j][i];
            }
            if(sum%2==1){
                colcount++;
                colflag=i+1;
            }
        }
        if(rowcount + colcount == 0) cout<<"OK"<<endl;
        else if(rowcount==1 && colcount==1) cout<<"Change bit ("<<rowflag<<","<<colflag<<")"<<endl;
        else cout<<"Corrupt"<<endl;
    }
}
