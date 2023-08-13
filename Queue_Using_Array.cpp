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
        if(size==0)
        arr[0]=value;
        if (size < MAX_SIZE) {
        for(int i=0;i<=size;i++){
            int t=arr[i];
            arr[i] = value;
            value=t;
        }
        }
        size++;
    }

    void deleteElement() {
        if(size==0)
        cout<<"stack empty";
        else{
                    cout<<arr[0]<<" poped"<<endl;
            for(int i=0;i<size-1;i++){
            arr[i] = arr[i+1];
        }

        size--;}
    }

    void searchElement() {
        cout<<arr[0];
         }
    void print(){
        if(size==0)
        cout<<"stack empty";
        else{
        for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }}
    }
};

int main() {
    Array list;
   int operation;
	int data;
	while(1){
	cout << "Select Operation To Perform on linked list" << endl;
	cout << "1.push" << endl;
	cout << "2.top" << endl;
	cout << "3.pop" << endl;
	cout << "4. Exit" << endl;
	cin >> operation;
	switch(operation){
		case 1 : 
		cout << "enter element to be inserted"<< endl;
		cin >> data;
		list.insert(data);
		list.print();
		cout << endl;
		break;
		case 2: 
		list.searchElement();
		
		cout << endl;
		break;
		case 3:
		list.deleteElement();
		list.print();
		cout << endl;
		break;
		case 4:
		return 0;
	}
	}
}
