#include <iostream>
using namespace std;

class Student {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
};

class LibraryUser : public Student {
private:
    int userID;
    int booksBorrowed;
public:
    // Constructor
    LibraryUser(string n, int id, int books) {
        setName(n);
        userID = id;
        booksBorrowed = books;
    }
    int getUserID() {
        return userID;
    }
    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

class VIPUser : public LibraryUser {
private:
    double subscriptionFee;
public:
    // Constructor
    VIPUser(string n, int id, int books, double fee) : LibraryUser(n, id, books) {
        subscriptionFee = fee;
    }
    double getSubscriptionFee() {
        return subscriptionFee;
    }
};

int main() {
    VIPUser myVIP("Njohn Ndio", 3799, 2, 450.98);
    cout << "User Name: " << myVIP.getName() << endl;
    cout << "User ID: " << myVIP.getUserID() << endl;
    cout << "Books Borrowed: " << myVIP.getBooksBorrowed() << endl;
    cout << "Subscription Fee: Ksh " << myVIP.getSubscriptionFee() << endl;
    return 0;
}