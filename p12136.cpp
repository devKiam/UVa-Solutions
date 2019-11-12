#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

main()
{
  int sh1,sm1,eh1,em1,stime1,etime1;
  int sh2,sm2,eh2,em2,stime2,etime2,i,n;

  cin>>n;

  for(i=1; i<=n; i++){
    scanf("%d:%d %d:%d",&sh1,&sm1,&eh1,&em1);
    stime1=(60*sh1)+sm1;
    etime1=(60*eh1)+em1;

    scanf("%d:%d %d:%d",&sh2,&sm2,&eh2,&em2);
    stime2=(60*sh2)+sm2;
    etime2=(60*eh2)+em2;

    if(etime1<stime2 || stime1>etime2)//O____O O----O
      cout<<"Case "<<i<<": "<<"Hits Meeting"<<endl;
    else
      cout<<"Case "<<i<<": "<<"Mrs Meeting"<<endl;
  }
  
}
