#include <iostream>
#include <string>
using namespace std;
typedef struct Node {
	char elem;
	Node* prev;
	Node* next;
}Node;
void addCharCursorLeft(Node* head, Node*& cursor, char elem) {
	//cursor가 가리키는 노드 다음에 노드를 추가한다.
	Node* newnode = new Node;
	newnode->elem = elem;
	newnode->prev = cursor;
	newnode->next = cursor->next;

	cursor->next->prev = newnode;
	cursor->next = newnode;

	cursor = newnode;
}
void moveCursorLeft(Node* head, Node*& cursor) {
	if (cursor == head) {
		return;
	}
	cursor = cursor->prev;
}
void moveCursorRight(Node* head, Node*& cursor) {
	if (cursor->next->next == NULL) {
		return;
	}
	cursor = cursor->next;
}
void deleteCharCursorLeft(Node* head, Node*& cursor) {
	if (cursor == head) {
		return;
	}
	//cursor가 가리키는 노드 삭제하기
	cursor->next->prev = cursor->prev;
	cursor->prev->next = cursor->next;
	Node* tmp = cursor;
	cursor = cursor->prev;
	delete tmp;
}
void printList(Node* head) {
	Node* p = head->next;
	for (; p->next != NULL; p = p->next) {
		cout<<p->elem;
	}
	cout<<endl;
}
int main() {

	string str;
	cin>>str;

	int n;
	cin>>n;

	Node* list = new Node;
	Node* tail = new Node;
	list->prev = NULL;
	list->next = tail;

	tail->next = NULL;
	tail->prev = list;

	//cursor가 가리키는 노드 오른쪽에 커서가 있다.
	Node* cursor = tail->prev;

	for (int i = 0; i < str.length(); i++) {
		addCharCursorLeft(list, cursor, str[i]);
	}


	for (int i = 0; i < n; i++) {
		char code;
		cin>>code;
		if (code == 'L') {
			moveCursorLeft(list, cursor);

		}
		else if (code == 'D') {
			moveCursorRight(list, cursor);

		}
		else if (code == 'B') {
			deleteCharCursorLeft(list, cursor);

		}
		else if (code == 'P') {
			char c;
			cin>>c;
			addCharCursorLeft(list, cursor, c);
		}
	}

	printList(list);

}