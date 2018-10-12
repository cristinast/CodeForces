#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n,a;
    std::priority_queue <int,vector<int>,greater<int>> squence;

    while (cin >> n) {
        int ins = n;
        while (n--) {
            cin >> a;
            squence.push(a);
        }

        while (ins--) {
            cout << squence.top() << endl;
            squence.pop();
        }

//        for (int i = n; i > 0; i--) {
//            cin >> a;
//            squence.push(a);
//        }
//
//        for (int i = n; i > 0; i--) {
//            cout << squence.top() << endl;
//            squence.pop();
//
//        }
    }
    return 0;
}