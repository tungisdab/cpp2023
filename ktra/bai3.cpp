#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, m;
        cin>>n>>m;
        if(m==1){
            if(n<=19)
                cout<<"Ma Ket";
            else
                cout<<"Bao Binh";
        }   
        if(m==2){
            if(n<=18)
                cout<<"Bao Binh";
            else
                cout<<"Song Ngu";
        }  
        if(m==3){
            if(n<=20)
                cout<<"Song Ngu";
            else
                cout<<"Bach Duong";
        }  
        if(m==4){
            if(n<=19)
                cout<<"Bach Duong";
            else
                cout<<"Kim Nguu";
        }  
        if(m==5){
            if(n<=20)
                cout<<"Kim Nguu";
            else
                cout<<"Song Tu";
        }  
        if(m==6){
            if(n<=20)
                cout<<"Song Tu";
            else
                cout<<"Cu Giai";
        }  
        if(m==7){
            if(n<=22)
                cout<<"Cu Giai";
            else
                cout<<"Su Tu";
        }  
        if(m==8){
            if(n<=22)
                cout<<"Su Tu";
            else
                cout<<"Xu Nu";
        }  
        if(m==9){
            if(n<=22)
                cout<<"Xu Nu";
            else
                cout<<"Thien Binh";
        }  
        if(m==10){
            if(n<=22)
                cout<<"Thien Binh";
            else
                cout<<"Thien Yet";
        }  
        if(m==11){
            if(n<=22)
                cout<<"Thien Yet";
            else
                cout<<"Nhan Ma";
        }  
        if(m==12){
            if(n<=21)
                cout<<"Nhan Ma";
            else
                cout<<"Ma Ket";
        }  
        cout<<endl;
    }
    return 0;
}