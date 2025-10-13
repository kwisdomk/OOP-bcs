#include <iostream>
using namespace std;

// 1.A base class named Person, with;
// a protected data member(string) to rep person's name.
// public member fnt setName(string n) to set the name.
// public member fnt getName() to return the name.

class Person {
    protected:
        string name;
    public:
        void setName(string n) {
            name = n;
        }
    public:
        string getName() {
            return name;
        }
};

// 2.A derived class LibraryMember that inherits from Person class including;
// a private data member memberID (int).
// private data member booksBorrowed (int).
// constructor that inits name, memberID, & booksBorrowed by calling base class constructor.
// public member fnt getMemberID() to return member ID.
// public member fnt getBooksBorrowed() to return the number of borrowed books.

class LibraryMember : public Person {
    private:
        int memberID;
        int booksBorrowed;
    public:
        LibraryMember(string n, int memberID, int booksBorrowed) {
            setName(n);
            memberID = memberID;
            booksBorrowed = booksBorrowed;
        }
    public:
        int getMemberID() {
            return memberID;
        }
    public:
        int getbooksBorrowed() {
            return booksBorrowed;
        } 
};


// 3.Another derived class PremiumMember, inheriting from the LibraryMember class; including;
// a private data member membershipFee (double).
// constructor that inits name, memberID, booksBorrowed & membershipFee by calling appropriate constructors.
// public member fnt getMembershipFFee() that returns the membership fee for premium member.

class PremiumMember : public LibraryMember {
    private:
        double membershipFee;
    public:
        PremiumMember(string n, int memberID, int booksBorrowed, double membershipFee)
            : LibraryMember(n, memberID, booksBorrowed), membershipFee(membershipFee) {
        }
        double getMembershipFFee() {
            return membershipFee;
        }
};


int main () {
    PremiumMember ("Wisdom K", 0103, 3, 999.99);
    cout << "Name: " << getName() << endl;
    cout << "Member ID: " << getMemberID() << endl;
    cout << "Books Borrowed: " << getbooksBorrowed() << endl;
    cout << "Membership Fee: $" << getMembershipFFee() << endl;
    
    return 0;
}