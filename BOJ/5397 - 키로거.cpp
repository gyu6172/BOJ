#include <iostream>
using namespace std;
typedef struct Node {
	char elem;
	Node* prev;
	Node* next;
}Node;
void addCharToCursorLeft(Node* head, Node*& cursor, char elem) {
	//cursor가 가리키는 노드 다음에 새로운 노드 추가
	Node* newnode = new Node;
	newnode->elem = elem;
	newnode->prev = cursor;
	newnode->next = cursor->next;

	cursor->next->prev = newnode;
	cursor->next = newnode;

	cursor = newnode;
}
void moveCursorToLeft(Node*& cursor) {
	if (cursor->prev != NULL) {
		cursor = cursor->prev;
	}
}
void moveCursorToRight(Node*& cursor) {
	if (cursor->next->next != NULL) {
		cursor = cursor->next;
	}
}
void deleteChar(Node*& cursor) {
	if (cursor->prev == NULL) {
		return;
	}
	cursor->next->prev = cursor->prev;
	cursor->prev->next = cursor->next;

	Node* tmp = cursor;
	moveCursorToLeft(cursor);
	delete tmp;
}
void printStr(Node* head) {
	Node* p = head->next;
	while (true) {
		if(p->next == NULL)break;

		cout<<p->elem;
		p=p->next;		
	}
	cout<<endl;
}
int main() {
	int t;
	cin>>t;

	for (int i = 0; i < t; i++) {
		string str;
		cin>>str;

		Node* head = new Node;
		Node* tail = new Node;

		head->next = tail;
		head->prev = NULL;
		tail->next = NULL;
		tail->prev = head;

		//cursor가 가리키는 노드 오른쪽에 커서가 있다.
		Node* cursor = head;

		for (int idx = 0; idx < str.length(); idx++) {
			if (str[idx] == '<') {
				moveCursorToLeft(cursor);
			}
			else if (str[idx] == '>') {
				moveCursorToRight(cursor);
			}
			else if (str[idx] == '-') {
				deleteChar(cursor);
			}
			else {
				addCharToCursorLeft(head, cursor, str[idx]);
			}
		}
		printStr(head);

		delete head;
		delete tail;
	}


}