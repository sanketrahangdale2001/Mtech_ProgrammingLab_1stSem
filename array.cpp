#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Array {
private:
    int arr[MAX_SIZE];
    int size;

public:
    Array() : size(0) {}

    void insert(int value) {
        if (size < MAX_SIZE) {
            arr[size++] = value;
        }
    }

    bool remove(int value) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                for (int j = i; j < size - 1; ++j) {
                    arr[j] = arr[j + 1];
                }
                --size;
                return true;
            }
        }
        return false;
    }

    bool search(int value) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Array arr;
    arr.insert(5);
    arr.insert(10);
    arr.insert(15);

    cout << "Search 10: " << (arr.search(10) ? "Found" : "Not Found") << endl;
    cout << "Search 20: " << (arr.search(20) ? "Found" : "Not Found") << endl;

    arr.remove(10);
    cout << "Search 10 after deletion: " << (arr.search(10) ? "Found" : "Not Found") << endl;

    return 0;
}
