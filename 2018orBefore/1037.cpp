#include <iostream>  
#include <cmath> 
#include <iomanip>  
using namespace std; 

int main()  
{  
    int i,j,k,times;
    float n,m;
    cout<<setiosflags(ios::fixed)<<setprecision(2);
    cin>>times;
        for(k=1;k<=times;k++){
            cin>>n>>m;
            i=(int)n;
            j=(int)m;
            cout<<"Scenario #"<<k<<":"<<endl;
            if(i%2==0||j%2==0){
                cout<<m*n<<endl;
            }else{
                cout<<m*n-1+sqrt(2.0)<<endl;
            }
            cout<<endl;
        }
    return 0;
}  
