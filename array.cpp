#include <iostream>

using namespace std;
const int MAX_SIZE = 100;
class Array {
    private: int arr[MAX_SIZE];
    int size;
    public: Array(): size(0) {}

    void insert(int value) {
        if (size < MAX_SIZE) {
            arr[size++] = value;
        }
    }

    void deleteElement(int value) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                for (int j = i; j < size - 1; ++j) {
                    arr[j] = arr[j + 1];
                }
                --size;
            }
        }
    }

    void searchElement(int value) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == value) {
                cout << "Element found at index:" << i << endl;
            }
        }
    }
    void print() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Array list;
    int operation;
    int data;
    while (1) {
        cout << "Select Operation To Perform on Array" << endl;
        cout << "1.Insert" << endl;
        cout << "2.Search" << endl;
        cout << "3.Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> operation;
        switch (operation) {
        case 1:
            cout << "enter element to be inserted" << endl;
            cin >> data;
            list.insert(data);
            list.print();
            cout << endl;
            break;
        case 2:
            cout << "enter element to be searched" << endl;
            cin >> data;
            list.searchElement(data);
            list.print();
            cout << endl;
            break;
        case 3:
            cout << "enter element to be deleted" << endl;
            cin >> data;
            list.deleteElement(data);
            list.print();
            cout << endl;
            break;
        case 4:
            return 0;
        }
    }
}
