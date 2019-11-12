#include <iostream>
#include <set>
#include <iterator>
using namespace std;
//solution by Kiam Ahmed (approximate solving + debugging time took 3 hr)

main()
{
    string s;
    int blank_line=0;

    while(getline(cin,s)){

        if(blank_line > 0) cout<<endl;

        set <int> a;
//storing the unique values from string
        for(int i=0; i<s.size(); i++){
            a.insert(s[i]);
        }

        set <int> :: iterator itr;
        int x=0;
        int arr[2][1005];
//storing those unique values from set to array
        for(itr=a.begin(); itr!=a.end(); itr++){
            arr[0][x++]=*itr;
        }
//checking from array to string and counting
        for(int i=0; i<x; i++){
            int c=0;
            for(int j=0; j<s.size(); j++){
                if(s[j] == arr[0][i])
                {
                    arr[1][i]=++c;
                }
            }
        }

        for(int i=0; i < (x-1); i++){
			for(int j=i+1; j<x; j++){
				if(arr[1][i] > arr[1][j]){
					int tm;
					tm=arr[1][i];
					arr[1][i]=arr[1][j];
					arr[1][j]=tm;

					tm=arr[0][i];
					arr[0][i]=arr[0][j];
					arr[0][j]=tm;
				}
				else if(arr[1][i] == arr[1][j]){
					if(arr[0][i] < arr[0][j]){
						int t;

						t=arr[0][i];
						arr[0][i]=arr[0][j];
						arr[0][j]=t;
					}
				}
			}
		}


        for(int i=0; i<x; i++){
			cout<<arr[0][i]<<" "<<arr[1][i]<<endl;
		}

        blank_line++;
    }
}
