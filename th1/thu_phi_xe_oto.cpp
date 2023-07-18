#include<bits/stdc++.h>
using namespace std;
typedef struct xe
{
    string bien_so;
    string ten_xe;
    int so_ghe;
    string dir;
    string day;
} Xe;

int main(){
    int n;
    cin >> n;
    Xe xe[n + 10];
    set<string> days;

    for (int i = 0; i < n; i++){
        cin >> xe[i].bien_so >> xe[i].ten_xe >> xe[i].so_ghe >> xe[i].dir >> xe[i].day;

        days.insert(xe[i].day);

    }

    for(auto x: days)
    {
        cout << x << ": ";
        long long cost = 0;
        for(int i = 0; i < n; i++)
        {
            if(xe[i].day ==x){
                if(xe[i].dir == "IN")
            {
                if(xe[i].ten_xe == "Xe_con")
                {
                    if(xe[i].so_ghe == 5)cost += 10000;
                    if(xe[i].so_ghe == 7) cost += 15000;

                }
                else if(xe[i].ten_xe == "Xe_khach")
                {
                    if(xe[i].so_ghe == 29)cost += 50000;
                    if(xe[i].so_ghe == 45) cost += 70000;
                }
                else
                {
                    cost += 20000;
                }
            }
            }
            
        }
        cout << cost << endl;
    }

}