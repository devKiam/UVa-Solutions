#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

main()
{
  double s,u,a,v,t;
  int c,i;

  for(i=1; scanf("%d",&c)==1; i++){
    if(c==0) break;
    else if(c==1){
      cin>>u>>v>>t;
      s=(u+v)*t/2;
      a=(v-u)/t;
      printf("Case %d: %0.3lf %0.3lf\n",i,s,a);
    }
    else if(c==2){
      cin>>u>>v>>a;
      t=(v-u)/a;
      s=(u+v)*t/2;
      printf("Case %d: %0.3lf %0.3lf\n",i,s,t);
    }
    else if(c==3){
      cin>>u>>a>>s;
      v=sqrt(u*u + 2*a*s);
      t=(v-u)/a;
      printf("Case %d: %0.3lf %0.3lf\n",i,v,t);
    }
    else if(c==4){
      cin>>v>>a>>s;
      u=sqrt(v*v - 2*a*s);
      t=(v-u)/a;
      printf("Case %d: %0.3lf %0.3lf\n",i,u,t);
    }
  }
}
