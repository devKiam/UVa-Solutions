#include <cstdio>
#include <iostream>
using namespace std;

main()
{
  long int a,b,c;
  int i,n;

  cin>>n;

  for(i=1; i<=n; i++){

    cin>>a>>b>>c;

//detemines the kinds of tiangle
    if(a<=0 || b<=0 || c<=0)
      cout<<"Case "<<i<<": Invalid"<<endl;

    else if((a+b)>c && (a+c)>b && (c+b)>a){
        
      if(a==b && a==c)
        cout<<"Case "<<i<<": Equilateral"<<endl;
      else if(a==b || a==c || b==c)
        cout<<"Case "<<i<<": Isosceles"<<endl;
      else if(a!=b!=c)
        cout<<"Case "<<i<<": Scalene"<<endl;

    }
    else{
      cout<<"Case "<<i<<": Invalid"<<endl;
    }
  }
}
