#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct NhanVien{
    int id;
    string ten;
    string gt;
    string ns;
    string dc;
    string ms;
    string ngay;
};

void nhap(NhanVien &a){
    scanf("\n");
    getline(cin,a.ten);
    getline(cin,a.gt);
    getline(cin,a.ns);
    getline(cin,a.dc);
    getline(cin,a.ms);
    getline(cin,a.ngay);
}
void inds(NhanVien a[], int n){
    for(int i = 0; i < n; i++){
        a[i].id=i+1;
        if(i+1<10)
            cout << "0000";
        else 
            cout << "000";
        cout<<a[i].id<<" "<< a[i].ten << " " << a[i].gt << " " << a[i].ns << " " << a[i].dc << " " << a[i].ms << " " << a[i].ngay << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}