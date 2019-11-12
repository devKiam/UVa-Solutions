#include <cstdio>
#include <cstring>
#include <iostream>
#include <stack>
using namespace std;

main()
{
  int n;
  bool flag;

  cin>>n;
  getchar();

  for(int i=0; i<n; i++){
    string ch;
    stack<char> slot;
    flag=false;

    getline(cin,ch);

    for(int j=0; j<(ch.length()); j++){

      if(ch[j]=='(' || ch[j]=='['){
        slot.push(ch[j]);
      }
      else{
        if(slot.size()==0){
          flag=true;
          break;
        }
        if(slot.top()=='(' && ch[j]!=')' || slot.top()=='[' && ch[j]!=']'){
          flag=true;
          break;
        }
        slot.pop();
      }
    }

    if(slot.size()>0){
      flag=true;
    }
    cout<<(flag ? "No":"Yes")<<endl;
  }
}
