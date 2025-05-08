#include <iostream>
using namespace std;

struct Book
{
    int bookid;
    char title[20];
    float price;
};

void showBook(struct Book b)
{
    cout << "\n"
         << b.bookid << "\n"
         << b.price << "\n"
         << b.title << endl;
}

struct Book inputBook()
{
    struct Book b;
    cout << "Enter the Book id " << endl;
    cin >> b.bookid;
    cout << "Enter the Book price " << endl;
    cin >> b.price;
    cout << "Enter the Book title " << endl;
    cin.ignore();
    cin.getline(b.title, 20);
    return b;
}

int main()
{
    struct Book b1;
    b1=inputBook();
    showBook(b1);
    return 0;
}