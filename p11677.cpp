#include <cstdio>
#include <iostream>
using namespace std;

main()
{
  int h1,m1,h2,m2;
  int time1,time2,FullDay;
  FullDay=1440;

  for(int i=0; ;i++){

    cin>>h1>>m1>>h2>>m2;

    if(h1+m1+h2+m2==0)
      break;
    time1=(h1*60)+m1;
    time2=(h2*60)+m2;
    
    if(time2<time1){
      time2+=FullDay;
    }
    cout<<time2-time1<<endl;
  }
}
