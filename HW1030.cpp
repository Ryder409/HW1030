#include <iostream>
#include <algorithm> // for std::copy

using namespace std;

// 如果沒有定義 M_PI，則手動定義它
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

extern void print_arr(int* arr, int size);
extern void change_size(int*& arr, int size, int new_size, const string& method);

int main() {
    int size = 3;
    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    print_arr(arr, size);  
    int new_size = size * 2;
    change_size(arr, size, new_size, "double");
    print_arr(arr, new_size);

    new_size = size + 2;
    change_size(arr, size, new_size, "add_two");
    print_arr(arr, new_size);

    int esize = 1;
    new_size = size + static_cast<int>(esize * M_PI);
    change_size(arr, size, new_size, "add_pi");
    print_arr(arr, new_size); 
    delete[] arr;
    return 0;
}

void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

void change_size(int*& arr, int size, int new_size, const string& method) {
    int* new_arr = new int[new_size];

    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }

    if (method == "double") {
    }
    else if (method == "add_two") {
    }
    else if (method == "add_pi") {
    }

    for (int i = size; i < new_size; i++) {
    }

    delete[] arr;

    arr = new_arr;
}
