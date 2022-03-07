#include <iostream>

struct Book
{
    char name[32];
    char author[32];
    char ISBN[16];
    char genre[16];
    double price;

    void enterBook()
    {

        std::cout << "Enter name: ";
        std::cin.ignore();
        std::cin.getline(name, 32);
        std::cout << "Enter author: ";
        std::cin.getline(author, 32);
        std::cout << "Enter ISBN: ";
        std::cin.getline(ISBN, 16);
        std::cout << "Enter genre: ";
        std::cin.getline(genre, 16);
        std::cout << "Enter price: ";
        std::cin >> price;
    }
    void print()
    {
        std::cout << name << std::endl;
        std::cout << author << std::endl;
        std::cout << ISBN << std::endl;
        std::cout << genre << std::endl;
        std::cout << price << std::endl;
    }
};
const int Book_Capacity = 500;
struct BookStore
{
    int countOfBook;
    Book listOfBooks[Book_Capacity];
};
void initializeBookstore(BookStore& store) {
    std::cout << "Book count: ";
    std::cin >> store.countOfBook;

    for (int i = 0; i < store.countOfBook; i++) {
        Book b;
        b.enterBook();
        store.listOfBooks[i] = b;
    }
}

void getAllBooks(BookStore& store) {
    for (int i = 0; i < store.countOfBook; i++) {
        store.listOfBooks[i].print();
        std::cout << std::endl;
    }
}
int main()
{
    BookStore store1;
    initializeBookstore(store1);
    getAllBooks(store1);
}