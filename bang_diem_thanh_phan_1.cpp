#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct SinhVien{
    string id;
    string ten;
    string lop;
    float a, b, c;

};
bool cmp(SinhVien a, SinhVien b){
    return a.id<b.id;
}
void nhap(SinhVien &a){
    scanf("\n");
    cin>>a.id;
    scanf("\n");
    getline(cin,a.ten);
    scanf("\n");
    cin>>a.lop>>a.a>>a.b>>a.c;
}
void sap_xep(SinhVien a[], int n){
    sort(a, a+n, cmp);
}
void in_ds(SinhVien a[], int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" ";
        cout<<a[i].id<<" "<<a[i].ten<<" ";
        cout<<a[i].lop<<" "<<fixed<<setprecision(1)<<a[i].a<<" "<<fixed<<setprecision(1)<<a[i].b<<" "<<fixed<<setprecision(1)<<a[i].c<<endl;
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}