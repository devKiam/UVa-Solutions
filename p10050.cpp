#include <iostream>
#include <set>
#include <vector>
#include <iterator>
using namespace std;

main()
{
    int testCases;
    cin>>testCases;

    for(int i=0; i<testCases; i++)
    {
        int days;
        cin>>days;

        vector<int> v;
        set<int> s;
        int parties, count=0;

        cin>>parties;

        for(int j=0; j<parties; j++)
        {
            int hartal;
            cin>>hartal;
            v.push_back(hartal);
        }

        for(int k=0; k<v.size(); k++)
        {
            for(int j=1; j<days; j++)
            {
                if((v[k]*j) > days) break;

                if( (((v[k]*j) % 7) != 6) && (((v[k]*j) % 7) != 0) ){
                    s.insert(v[k]*j);
                }

            }
        }

        cout<<s.size()<<endl;
    }
}
