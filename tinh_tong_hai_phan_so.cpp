#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct PhanSo{
    ll tu, mau;
};
void nhap(PhanSo &A){
    cin>>A.tu>>A.mau;
}
PhanSo tong(PhanSo A, PhanSo B){
    PhanSo C;
    C.tu=A.tu*B.mau+B.tu*A.mau;
    C.mau=A.mau*B.mau;
    return C;
}
void in(PhanSo C){
    ll gcd=__gcd(C.tu, C.mau);
    cout<<C.tu/gcd<<"/"<<C.mau/gcd;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}