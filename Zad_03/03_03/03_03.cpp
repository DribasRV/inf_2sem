#include <iostream>

using namespace std;

int main() {
    int ar[100][100] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            int buff = ar[j][i];
            ar[j][i] = ar[i][j];
            ar[i][j] = buff;
        }
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
