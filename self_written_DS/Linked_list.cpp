#include <iostream>
#include <limits>

using namespace std;

class Node{
    private:
        int mValue;
        Node *mNext;

    public:
        Node(int value){
            mValue = value;
            mNext = nullptr;
        }

        void setValue(int value){
            mValue = value;
        }

        void setNext(Node *next){
            mNext = next;
        }

        int getValue(){
            return mValue;
        }

        Node* getNext(){
            return mNext;
        }
};

class LinkedList{
    private:
        Node *head = nullptr;
        Node *tail = nullptr;
        int length = 0;

    public:
        LinkedList(){
            head = tail = nullptr;
            length = 0;
        }

        LinkedList(int value){
            head = tail = new Node(value);
            length = 1;
        }

        ~LinkedList(){
            Node *node = head;
            while(head != nullptr){
                node = head;
                head = head->getNext();
                delete node;
            }
            tail = nullptr;
        }

        void insert(int value){
            Node *node = new Node(value);
            if(tail == nullptr){
                head = tail = node;
                length = 1;
            }
            else{
                tail->setNext(node);
                tail = node;
                length++;
            }
        }

        void insertAtStart(int value){
            Node *node = new Node(value);
            node->setNext(head);
            if(head == nullptr){
                tail = node;
            }
            head = node;
            length++;
        }

        void insertAt(int value, int index){
            if(index == 0 || head == nullptr){
                insertAtStart(value);
            }
            else{
                Node *node = new Node(value);
                Node *left = head;
                for(int i = 1; i < index && left->getNext() != nullptr; i++){
                    left = left->getNext();
                }
                node->setNext(left->getNext());
                left->setNext(node);
                length++;
            }
        }

        int get(int index){
            if(index >= length){
                return INT32_MIN;
            }
            Node *node = head;
            for(int i = 0; i < index; i++){
                node = node->getNext();
            }
            return node->getValue();
        }

        int getLength(){
            return length;
        }

        int find(int value){
            Node *node = head;
            for(int i = 0; node != nullptr; i++){
                if(node->getValue() == value){
                    return i;
                }
                node = node->getNext();
            }
        }//returns the index of first occurence of a value in the list

        LinkedList* findAll(int value){
            LinkedList *list;
            Node *node = head;
            for(int i = 0; node != nullptr; i++){
                if(node->getValue() == value){
                    list->insert(i);
                }
            }
            return list;
        }

        int getCount(int value){
            Node *node = head;
            int count = 0;
            while(node != nullptr){
                if(node->getValue() == value){
                    count++;
                }
            }
            return count;
        }

        bool removeAt(int index){
            if(index < length){
                Node *node = head;
                for(int i = 1; i < index; i++){
                    node = node->getNext();
                }
                Node *nodeTORemove = node->getNext();
                node->setNext(nodeTORemove->getNext());
                length--;
                delete nodeTORemove;
                return true;
            }
            else{
                return false;
            }
        }

        bool removeFirst(int value){
            if(head == nullptr){
                return false;
            }
            if(head->getValue() == value){
                Node *node = head;
                head = head->getNext();
                delete node;
                length--;
                if(length == 1){
                    tail = head;
                }
                else if(length == 0){
                    tail = nullptr;
                }
                return true;
            }
            Node *previous = head;
            Node *node = head->getNext();
            while(node != nullptr){
                if(node->getValue() == value){
                    previous->setNext(node->getNext());
                    delete node;
                    length--;
                    if(length == 1){
                        tail = head;
                    }
                    else if(length == 0){
                        tail = nullptr;
                    }
                    return true;
                }
            }
            return false;
        }

        int removeAll(int value){
            int count = 0;
            if(head == nullptr){
                return false;
            }
            if(head->getValue() == value){
                Node *node = head;
                head = head->getNext();
                delete node;
                length--;
                if(length == 1){
                    tail = head;
                }
                else if(length == 0){
                    tail = nullptr;
                }
                count++;
            }
            Node *previous = head;
            Node *node = head->getNext();
            while(node != nullptr){
                if(node->getValue() == value){
                    previous->setNext(node->getNext());
                    delete node;
                    length--;
                    if(length == 1){
                        tail = head;
                    }
                    else if(length == 0){
                        tail = nullptr;
                    }
                    count++;
                }
            }
            return count;
        }//Removes all occurences of a given value in the list

        int* toArray(){
            Node *node = head;
            int *arr = new int[length];
            for(int i = 0; i < length && node != nullptr; i++){
                arr[i] = node->getValue();
            }
            return arr;
        }

        void printAll(){
            Node *node = head;
            while(node != nullptr){
                cout << node->getValue() << " ";
                node = node->getNext();
            }
            cout << endl;
        }

        
};

int main(){
    LinkedList list;
    string str;
    cout << "Enter the commands for operating on the linked list" << endl;
    cout << "For guide enter help" << endl;
    while(true){
        cout << ">>> ";
        cin >> str;
        for(int i = 0; i < str.length(); i++){
            str.at(i) = tolower(str.at(i));
        }
        if(str == "help"){      //help
            cout <<"This is HELP" << endl;
        }
        
    }
}