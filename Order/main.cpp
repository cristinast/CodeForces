#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    std::vector<int> squence(n);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> squence[i];
    }

    for(int i = 0;i <n;++i){
        for (int j = 0; j < n; ++j) {
            if(squence[j]>squence[j+1]){
                int m =0;
                m= squence[j];
                squence[j] = squence[j+1];
                squence[j+1] = m;
            }
        }
    }
    for (int i = 1; i < n+1; ++i) {
        cout << squence[i]<<endl;
    }
    return 0;
}