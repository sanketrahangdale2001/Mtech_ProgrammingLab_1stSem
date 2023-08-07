#include<iostream>
using namespace std;
template <typename T>
class Node{
public:
T data;
	Node* next;
Node()
    {
        data = 0;
        next = NULL;
    }
  
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};
template <typename T>

class SinglyLinkedList{
	Node<T>* head;
//	Node<T>* tops=NULL;
public:
	void insertionAtEnd(T data)
	{
		Node<T>* newnode = new Node<T>(data);
		if(head==NULL ){
			head= newnode;
		//	tops=newnode;
			return;}
		Node<T>* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=newnode;
		//top=newnode;
		}
	void searchElement(){
	    Node<T>* temp=head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		cout << temp->data<< endl;

	}
	void deleteElement(){
		Node<T>* temp=head;
		Node<T>* previous=NULL;
		if(head->next==NULL){
		cout<<"Stack empty";
		    head=NULL;
		    exit(0);
		}
		while (temp->next != NULL)
		{
			previous = temp;
			temp = temp->next;
		}
			previous->next = NULL;
		}
	void print(){
		Node<T>* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
};

int main(){
	SinglyLinkedList<int> list;
	int operation;
	int data;
	while(1){
	cout << "Select Operation To Perform on Stack" << endl;
	cout << "1.Push" << endl;
	cout << "2.Top" << endl;
	cout << "3.Pop" << endl;
	cout << "4. Exit" << endl;
	cin >> operation;
	switch(operation){
		case 1 : 
		cout << "enter element to be push"<< endl;
		cin >> data;
		list.insertionAtEnd(data);
		list.print();
		cout << endl;
		break;
		case 2: 
		list.searchElement();
		list.print();
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
