#include <iostream>
#include <string>
using namespace std;
class Book 
{
private:
    string title;
    string author;
    bool isAvailable;
public:
    void setBookDetails(string t, string a) 
    {
        title = t;
        author = a;
        isAvailable = true;
    }
    void checkoutBook() 
    {
        if (isAvailable) 
        {
            isAvailable = false;
            cout << "Book checked out successfully." << endl;
        } 
        else 
        {
            cout << "Book is already checked out." << endl;
        }
    }
    void returnBook() 
    {
        isAvailable = true;
        cout << "Book returned successfully." << endl;
    }
    void showStatus()  
    {
        cout << "\nBook Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
    }
};
int main() 
{
    Book b1;
    b1.setBookDetails("The Alchemist", "Paulo Coelho");
    b1.showStatus();
    b1.checkoutBook();
    b1.showStatus();
    b1.returnBook();
    b1.showStatus();
    return 0;
}
