//Linked List with add, delete and display the elements
//Singly Linked List

#include <iostream>
#include <string>
using namespace std;

// Node class
class Node {
public:
    string name;
    Node* next_ptr;

    Node(string name, Node* next_ptr = nullptr) {
        this->name = name;
        this->next_ptr = next_ptr;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    // Constructor
    LinkedList() {
        head = tail = nullptr;
    }

    // Add element to the end
    void add_element(const string& name) {
        Node* newNode = new Node(name);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next_ptr = newNode;
            tail = newNode;
        }
        cout << "Added: " << name << endl;
    }

    // Delete element by name
    void delete_element(const string& name) {
        if (!head) {
            cout << "List is empty. Cannot delete \"" << name << "\".\n";
            return;
        }

        // Deleting head node
        if (head->name == name) {
            Node* temp = head;
            head = head->next_ptr;
            if (tail == temp) {
                tail = nullptr; // was only node
            }
            delete temp;
            cout << "Deleted: " << name << " (head node)\n";
            return;
        }

        // Deleting non-head node
        Node* current = head;
        while (current->next_ptr && current->next_ptr->name != name) {
            current = current->next_ptr;
        }

        if (current->next_ptr) {
            Node* toDelete = current->next_ptr;
            current->next_ptr = toDelete->next_ptr;

            // If deleting tail
            if (toDelete == tail) {
                tail = current;
            }

            delete toDelete;
            cout << "Deleted: " << name << endl;
        } else {
            cout << "Element \"" << name << "\" not found.\n";
        }
    }

    // Display the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->name << " -> ";
            current = current->next_ptr;
        }
        cout << "NULL" << endl;
    }

    // Destructor
    ~LinkedList() {
        Node* current = head;
        while (current) {
            Node* next = current->next_ptr;
            cout << "Deleting: " << current->name << endl;
            delete current;
            current = next;
        }
    }
};

// Main function
int main() {
    cout << "--- Creating Linked List ---" << endl;
    LinkedList list;

    cout << "\n--- Adding Elements ---" << endl;
    list.add_element("Apple");
    list.add_element("Banana");
    list.add_element("Cherry");
    list.add_element("Durian");

    cout << "\n--- Displaying List ---" << endl;
    list.display(); // Apple -> Banana -> Cherry -> Durian -> NULL

    cout << "\n--- Deleting 'Banana' ---" << endl;
    list.delete_element("Banana"); // Middle

    cout << "\n--- Deleting 'Apple' (head) ---" << endl;
    list.delete_element("Apple"); // Head

    cout << "\n--- Deleting 'Durian' (tail) ---" << endl;
    list.delete_element("Durian"); // Tail

    cout << "\n--- Deleting 'Mango' (non-existent) ---" << endl;
    list.delete_element("Mango");

    cout << "\n--- Displaying Final List ---" << endl;
    list.display(); // Should show: Cherry -> NULL

    cout << "\n--- Program Ending ---" << endl;
    return 0;
}
