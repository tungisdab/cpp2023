#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct SinhVien{
    string ten;
    string lop;
    string ng;
    string th;
    string nam;
    float diem;
};
void nhap(SinhVien &a){
    getline(cin, a.ten);
    getline(cin, a.lop);
    string date;
    getline(cin, date);
    string s="";
    int cc=1;
    for(int i=0;i<date.length();i++){
        if(date[i]=='/' || i==date.length()-1){
            if(cc==1){
                if(s.length()==1)
                    a.ng='0'+s;
                else
                    a.ng=s;
                cc++;
            }
            else if(cc==2){
                if(s.length()==1)
                    a.th='0'+s;
                else
                    a.th=s;
                cc++;
            }
            else{
                s+=date[i];
                a.nam=s;
                cc++;
            }
            s="";
        }
        else{
            s+=date[i];
        }
    }
    cin>>a.diem;
}
void in(SinhVien a){
    cout<<"B20DCCN001 ";
    cout<<a.ten<<" ";
    cout<<a.lop<<" ";
    cout<<a.ng<<"/"<<a.th<<"/"<<a.nam<<" ";
    cout<<fixed<<setprecision(2)<<a.diem<<endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}