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
void rutgon(PhanSo &A){
    ll ucln=__gcd(A.tu, A.mau);
    A.tu/=ucln;
    A.mau/=ucln;
}
void in(PhanSo A){
    cout<<A.tu<<"/"<<A.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}