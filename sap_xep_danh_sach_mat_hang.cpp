#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct MatHang{
    int id;
    string ten;
    string hang;
    float mua;
    float ban;
};

void nhap(MatHang &a){
    scanf("\n");
    getline(cin, a.ten);
    getline(cin, a.hang);
    cin>>a.mua>>a.ban;
}
bool cmp(MatHang a, MatHang b){
    return a.ban-a.mua>b.ban-b.mua;
}
void in(MatHang a[], int n){
    for (int i=0;i<n;i++){
        cout<<a[i].id<<" "<<a[i].ten<<" "<<a[i].hang<<" "<<fixed<<setprecision(2)<<(a[i].ban-a[i].mua)<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    MatHang *ds = new MatHang[n];
    for(int i=0;i<n;i++){
        ds[i].id = i+1;
        nhap(ds[i]);
    }
    sort(ds, ds+n, cmp);
    in(ds, n);
    return 0;
}