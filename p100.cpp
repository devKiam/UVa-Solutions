#include <cstdio>
#include <iostream>
using namespace std;

main()
{
    int i,j;

    while(cin>>i>>j){
        cout<<i<<" "<<j;
        long long int maxcount=0;

        if(i>j) swap(i,j);

        for(int k=i; k<=j; k++){
            int temp_i=k;
            long long int count=1;

            while(temp_i!=1){
                if(temp_i%2==0)
                    temp_i/=2;
                else
                    temp_i=3*temp_i+1;
                count++;
            }

            if(maxcount < count)
                maxcount=count;
        }

        printf(" %lld\n",maxcount);
    }
}
