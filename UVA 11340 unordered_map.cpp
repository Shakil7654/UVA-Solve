#include <iostream>
#include <unordered_map>
#include <iomanip>

using namespace std;

typedef long long ll;
#define INF 1000000000 
        
int main(){
    int N;
    cin>>N;
    while (N--){
        unordered_map<char, int> um;
        int K;
        cin>>K;
        while (K--){
            char c;
            int d;
            cin>>c>>d;
            um[c] = d;
        }
        int M,ans = 0;
        cin>>M;
        cin.ignore();
        char c;
        while (c = getchar()){
            if (c == '\n') M--;
            if (M == 0) break;
            if (um.find(c) != um.end()){
                ans += um[c];
            }
        }
        cout<<fixed<<setprecision(2)<<ans/100.0<<'$'<<endl;
    }

}