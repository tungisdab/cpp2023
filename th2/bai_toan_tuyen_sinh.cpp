#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1;
    getline(cin, s1);
    int khuVuc = s1[2]-'0';   
    float diemCong = 0;
    if(khuVuc==1)
        diemCong=0.5;
    else if(khuVuc==2)
        diemCong=1;
    else if(khuVuc==3)
        diemCong=2.5;
    string s2;
    getline(cin, s2);
    float a, b, c;
    cin>>a>>b>>c;
    float diem = a*2 +b+c;
    cout<<s1<<" "<<s2<<" ";
    if(khuVuc==1)
        cout<<"1";
    else 
        cout<<diemCong;
    cout<<" ";
    if(diem==(int)diem)
        cout<<(int)diem;
    else    
        cout<<fixed<<setprecision(1)<<diem;
    cout<<" ";
    if(diem+diemCong>=24)
        cout<<"TRUNG TUYEN";
    else    
        cout<<"TRUOT";
    return 0;
}