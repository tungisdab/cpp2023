#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man
struct SoPhuc{
    int thuc;
    int ao;
};
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
    SoPhuc C;
    C.thuc=A.thuc+B.thuc;
    C.ao=B.ao+A.ao;
    C.thuc=C.thuc*C.thuc-C.ao*C.ao;
    C.ao=2*C.ao*(A.thuc+B.thuc);
    return C;
}
void hien_thi(SoPhuc C){
    if(C.ao<0)
        cout << C.thuc << " - " << abs(C.ao) << "i";
    else
        cout << C.thuc << " + " << C.ao << "i";
    cout<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
