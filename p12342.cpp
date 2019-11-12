#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

main()
{
  int n,i,k;
  double tax;

  cin>>n;

  for(i=1; i<=n; i++){

    cin>>k;

    if(k<=180000){
      tax=0;
    }

    else if(k>180000 && k<=480000){
      tax=(k-180000)*0.1;
      if(tax<2000) { tax=2000;}
      else { tax=ceil(tax);}
    }

    else if(k>480000 && k<=880000){
      tax=30000+((k-480000)*0.15);
      tax=ceil(tax);
    }

    else if(k>880000 && k<=1180000){
      tax=90000+((k-880000)*0.2);
      tax=ceil(tax);
    }

    else if(k>1180000){
      tax=150000+((k-1180000)*0.25);
      tax=ceil(tax);
    }

    printf("Case %d: %0.0lf\n",i,tax);
  }
}
