#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
//by KMA dil and man

struct Point{

     double x, y;

};
void input(Point &A){
    cin>>A.x>>A.y;

}
double distance(Point A, Point B){
    return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}