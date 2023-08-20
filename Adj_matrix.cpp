#include <iostream>
 using namespace std;
const int MAX_SIZE = 20;
template < typename T >
class Array {
    private: T arr[MAX_SIZE][MAX_SIZE]={0};
    int size;
    public: Array(): size(0) {}

    void insert(T u,T v,int vertex) {
        if (vertex < MAX_SIZE) {
            arr[u][v] = 1;
            arr[v][u] = 1;
        }
    }

    void deleteElement(T u,T v) {
       
    }

    void searchElement(T u,T v) {
            
        cout << arr[u][v]<< endl;
               }
    
    void print(int vertex) {
            for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << arr[i][j] << " ";
        }
                cout<<endl;
            }
    }
};

int main() {
    Array<int> list;
    int operation;
    int u,v,vertex;
    cout<<"enter no of vertices"<<endl;
    cin>>vertex;
    while (1) {
        cout << "Select Operation To Perform on Array" << endl;
        cout << "1.Insert" << endl;
        cout << "2.Search" << endl;
        cout << "3.Delete" << endl;
        cout << "4. Exit" << endl;
        cin >> operation;
        switch (operation) {
        case 1:
            cout << "enter the edge to be inserted" << endl;
            cin >>u>>v;
            list.insert(u,v,vertex);
            list.print(vertex);
            cout << endl;
            break;
        case 2:
            cout << "enter position to be searched" << endl;
            cin >>u>>v;
         list.searchElement(u,v);
             list.print(vertex);
            cout << endl;
            break;
        case 3:
            cout << "enter element to be deleted" << endl;
          cin >>u>>v;
           list.deleteElement(u,v);
            list.print(vertex);
            cout << endl;
            break;
        case 4:
            return 0;
        }
    }
}
