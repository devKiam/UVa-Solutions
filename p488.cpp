#include <iostream>
using namespace std;

main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){

        int amp,freq;
        cin>>amp>>freq;

        if(amp>9) amp=9;


        for(int j=1; j<=freq; j++){


            for(int k=1; k<=amp; k++){

                for(int l=1; l<=k; l++){
                    cout<<k;
                }
                cout<<endl;

            }
            for(int k=amp-1; k>0; k--){

                for(int l=k; l>0; l--){
                    cout<<k;
                }

                cout<<endl;

            }

            if(j<freq) cout<<endl;//frequency

        }

        if(i<t) cout<<endl;

    }
}
