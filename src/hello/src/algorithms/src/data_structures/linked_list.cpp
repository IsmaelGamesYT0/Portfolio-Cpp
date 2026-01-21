#include <iostream>

struct Node {
    int value;
    Node* next;
    Node(int v) : value(v), next(nullptr) {}
};

struct LinkedList {
    Node* head = nullptr;

    ~LinkedList() {
        Node* cur = head;
        while (cur) {
            Node* nxt = cur->next;
            delete cur;
            cur = nxt;
        }
    }

    void push_front(int v) {
        Node* n = new Node(v);
        n->next = head;
        head = n;
    }

    void print() const {
        Node* cur = head;
        while (cur) {
            std::cout << cur->value;
            if (cur->next) std::cout << " -> ";
            cur = cur->next;
        }
        std::cout << "\n";
    }
};

int main() {
    LinkedList list;
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);

    list.print(); // 1 -> 2 -> 3
}
