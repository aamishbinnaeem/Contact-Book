#include "ContactsBook.h"
#include <iomanip>
#include <iostream>
using namespace std;

void print_menu();
ContactsBook create_list();
void add_contact(ContactsBook& contacts_book);
void merge_duplicates(ContactsBook& contacts_book);
void store_to_file(ContactsBook& contacts_book);
void load_from_file(ContactsBook& contacts_book);
void print_contacts_sorted(ContactsBook& contacts_book);
void print_contacts(ContactsBook& contacts_book);
void search_contacts(ContactsBook& contacts_book);
void display_contact_count(ContactsBook& contacts_book);

int main() {
    // Initialize with any number of contacts
    ContactsBook contacts_book(4);
    int choice;
    do {
        system("cls"); // Clear the console screen
        print_menu();
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            contacts_book = create_list();
            break;
        case 2:
            add_contact(contacts_book);
            break;
        case 3:
            merge_duplicates(contacts_book);
            break;
        case 4:
            store_to_file(contacts_book);
            break;
        case 5:
            load_from_file(contacts_book);
            break;
        case 6:
            print_contacts_sorted(contacts_book);
            break;
        case 7:
            print_contacts(contacts_book);
            break;
        case 8:
            search_contacts(contacts_book);
            break;
        case 9:
            display_contact_count(contacts_book);
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        cout << "\n";
        system("pause"); // Pause the program
    } while (choice != 0);
    return 0;
}

void print_menu() {
    cout << setw(50) << "Welcome to Your Contact Manager!" << endl << endl;
    cout << setw(45) << "MAIN MENU" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1. Create a new contact list" << endl;
    cout << "2. Add a new contact" << endl;
    cout << "3. Merge duplicate contacts" << endl;
    cout << "4. Save contacts to file" << endl;
    cout << "5. Load contacts from file" << endl;
    cout << "6. Print contacts sorted" << endl;
    cout << "7. Print all contacts" << endl;
    cout << "8. Search contacts" << endl;
    cout << "9. Display total contacts count" << endl;
    cout << "0. Exit" << endl;
    cout << "----------------------------------------------" << endl;
}

ContactsBook create_list() {
    cout << "\nEnter the number of contacts you want to add: ";
    int list_size;
    cin >> list_size;
    ContactsBook contacts_book(list_size);
    return contacts_book;
}

void add_contact(ContactsBook& contacts_book) {
    Contact contact;
    cin >> contact;
    contacts_book.add_contact(contact);
}

void merge_duplicates(ContactsBook& contacts_book) {
    contacts_book.merge_duplicates();
}

void store_to_file(ContactsBook& contacts_book) {
    string file_name;
    cout << "\nEnter the file name to save contacts: ";
    cin >> file_name;
    contacts_book.save_to_file(file_name);
}

void load_from_file(ContactsBook& contacts_book) {
    string file_name;
    cout << "\nEnter the file name to load contacts: ";
    cin >> file_name;
    contacts_book.load_from_file(file_name);
}

void print_contacts_sorted(ContactsBook& contacts_book) {
    string choice;
    cout << "\nEnter sorting criteria (first_name or last_name): ";
    cin >> choice;
    contacts_book.print_contacts_sorted(choice);
}

void print_contacts(ContactsBook& contacts_book) {
    cout << "\nList of all contacts:" << endl;
    contacts_book.print_contacts();
}

void search_contacts(ContactsBook& contacts_book) {
    int choice;
    cout << "\nSearch by:" << endl;
    cout << "1. First Name" << endl;
    cout << "2. Last Name" << endl;
    cout << "3. Mobile Number" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    string keyword;
    cout << "Enter the search keyword: ";
    cin >> keyword;

    switch (choice) {
    case 1:
        if (contacts_book.search_contact(keyword, " ") == nullptr) {
            cout << "Contact not found" << endl;
        }
        else {
            cout << "\nContact found:" << endl;
            contacts_book.search_contact(keyword, " ")->print_contact();
        }
        break;
    case 2:
        if (contacts_book.search_contact(" ", keyword) == nullptr) {
            cout << "Contact not found" << endl;
        }
        else {
            cout << "\nContact found:" << endl;
            contacts_book.search_contact(" ", keyword)->print_contact();
        }
        break;
    case 3:
        if (contacts_book.search_contact(keyword) == nullptr) {
            cout << "Contact not found" << endl;
        }
        else {
            cout << "\nContact found:" << endl;
            contacts_book.search_contact(keyword)->print_contact();
        }
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}

void display_contact_count(ContactsBook& contacts_book) {
    cout << "\nTotal number of contacts: " << contacts_book.total_contacts() << endl;
}
