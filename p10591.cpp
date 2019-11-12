#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int t, n, count=0;

    cin>>t;

    for(int i=0; i<t; i++){
        cin>>n;
        count++;
        int sum=0, temp=0, a, bichance, j;
        a=n;

        while(1){
            bichance=0, j=1;

            while(a!=0){
                temp=a%10;
                bichance+=(temp*j);
                sum=sum+(temp*temp);
                a/=10;
                j=j*10;
            }
            if(sum==n){
                cout<<"Case #"<<count<<": "<<n<<" is an Unhappy number."<<endl;
                break;
            }
            else if(sum==1){
                cout<<"Case #"<<count<<": "<<n<<" is a happy number."<<endl;
                break;
            }
            else{
                a=bichance;
                continue;
            }

        }

    }

}
