#include <iostream>
using namespace std;
typedef struct Node {
	int elem;
	Node* prev;
	Node* next;
}Node;
void addNode(Node* head, Node*& tail, int elem) {
	Node* newnode = new Node;
	newnode->elem = elem;
	newnode->prev = tail;
	newnode->next = NULL;

	tail->next = newnode;
	tail = tail->next;
}
void deleteNode(Node*& head, Node*& tail, Node*& tmp) {
	if (tmp == head) {
		head = head->next;
	}
	else if (tmp == tail) {
		tail = tail->prev;
	}
	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;

	Node* d = tmp;
	tmp = tmp->next;
	delete d;
}
int main() {
	int n,k;
	cin>>n>>k;

	Node* node = new Node;
	node->elem = 1;
	node->next = NULL;
	node->prev = NULL;

	Node* head = node;
	Node* tail = node;
	for (int i = 2; i <= n; i++) {
		addNode(head, tail, i);
	}
	tail->next = head;
	head->prev = tail;

	//head->elem = 1;
	//tail->elem = n;

	Node* iter = head;
	cout<<"<";
	while (head != tail) {
		for (int i = 0; i < k - 1; i++) {
			iter = iter->next;
		}
		cout<<iter->elem<<", ";
		deleteNode(head, tail, iter);
	}
	cout<<head->elem<<">";
	
	delete head;

}
