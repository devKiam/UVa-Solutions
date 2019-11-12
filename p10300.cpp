#include <iostream>
#include <cstdio>
using namespace std;

main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int f;
        double sum=0;
        cin>>f;

        for(int j=0; j<f; j++){
            double size, animal, env;

            cin>>size>>animal>>env;
            double a,b;

            a=size/animal;
            b=a*env;
            sum=sum+(b*animal);
        }

        printf("%.0lf\n",sum);
    }
}
