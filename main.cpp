#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int (*ptr)[3] = matrix;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(ptr + i) + j) << " ";
        }
        cout << endl;
    }

    return 0;
}
