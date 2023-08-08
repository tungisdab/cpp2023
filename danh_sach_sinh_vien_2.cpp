#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct SinhVien{
    string id;
    string ten;
    string lop;
    string ns;
    float diem;
};
void nhap(SinhVien a[], int n){
    for(int i=0;i<n;i++){
        scanf("\n");
        if(i+1<10){
            a[i].id="B20DCCN00"+to_string(i+1);
        }
        else{
            a[i].id="B20DCCN0"+to_string(i+1);
        }
        getline(cin, a[i].ten);
        cin>>a[i].lop>>a[i].ns>>a[i].diem;
        for(int j=0;j<a[i].ten.length();j++){
            a[i].ten[j]=tolower(a[i].ten[j]);
        }
        if(a[i].ns[1]=='/'){
            a[i].ns="0"+a[i].ns;
        }
        if(a[i].ns[4]=='/'){
            a[i].ns=a[i].ns.insert(3,"0");
        }
    }
}
void in(SinhVien a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i].id<<" ";
        stringstream ss(a[i].ten);
        string tmp;
        while(ss>>tmp){
            tmp[0]=toupper(tmp[0]);
            cout<<tmp<<" ";
        }
        cout<<a[i].lop<<" "<<a[i].ns<<" "<<fixed<<setprecision(2)<<a[i].diem<<endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}