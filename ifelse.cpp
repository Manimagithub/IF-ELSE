#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdin);
#endif

int savings;
savings=100;
if(savings>5000){
    if(savings>10000){
        cout<<("road trip with neha");
    }
    else{
        cout<<("shopping with neha");
    }}
    //cout<<("neha");}
   else if (savings>2000){
    cout<<("rashmi");
    }
    else{
        cout<<("friends");

    }

    return 0;
}