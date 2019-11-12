#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

main()
{
    int n;

    cin>>n;

    for(int i=0; i<n; i++){
        double c,d,answer=0;
        cin>>c>>d;
        answer = c + ( (5.0*d) / 9.0 );

        printf("Case %d: %.2lf\n", i+1, answer);
    }
}
