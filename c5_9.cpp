#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

 
int main()
{
    
vector <double> v;
    double x,n;
    cin>>n;
    for (int i=0; i<n;i++)

    {cin>> x;
    
    
        v.push_back(x);
       
        cout<<v[i]<<endl;
       
    }
    if (v.size()<n) cout<<"ERROR"<<endl;
    else
    { int sum_1= 0;
  sum_1 = v[0]+v[1]+v[2];
        
        double sum_2=0;
        sum_2 = v[0]+v[1]+v[2];
        double y;
        y= sum_1-sum_2;
        if (y== 0) cout<<sum_1<< endl;
        else
        cout <<"the value of vector not belong to int"<<endl;
        
    }
    
