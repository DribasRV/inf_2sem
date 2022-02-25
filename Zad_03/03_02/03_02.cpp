#include <iostream>

using namespace std;

int main() {
    int arr[1000];
    int n;
    cin >> n;
    int av = 0;
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
        av += arr[i];
    }
    av /= n;
    for (int i = n - 1; i >= 0; --i)
        if (arr[i] > av)
            cout << arr[i] << " ";
    return 0;
}
