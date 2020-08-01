#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

 
int main()
{
    
vector <int> v;
    int x,n;
    cin>>n;
    for (int i=0; i<n;i++)

    {cin>> x;
    
        v.push_back(x);
       
        cout<<v[i]<<endl;
       
    }
    
  int sum= 0;
  sum =v[0]+v[1]+v[2];
  cout<< sum<< endl;
  
    
    
}
