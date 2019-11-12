#include <cstdio>
#include <iostream>
using namespace std;

int mid(int a, int b, int c){
  if((a>b && a<c)||(a>c && a<b)){
    return a;
  }
  else if((b>a && b<c)||(b>c && b<a)){
    return b;
  }
  else{
    return c;
  }
}

main()
{
  int a,b,c,n,i;

  cin>>n;

  for(i=1; i<=n; i++){
    cin>>a>>b>>c;
    cout<<"Case "<<i<<": "<<mid(a,b,c)<<endl;
  }
}
