#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

main()
{
    double n,p;

    while(scanf("%lf %lf",&n,&p)!=EOF){
        printf("%0.0lf\n",pow(p,1/n) );
    }
}
