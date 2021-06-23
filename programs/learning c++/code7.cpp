#include <iostream>

using namespace std;
 
class Book {
    public:
        string title;
        string author;
        int pages;
        Book(string name){
            cout << "Creating Object : "<< name << endl;
        }
};

int main(){

    Book book1("Harry Potter");
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2("Lord of the Rings");
    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;   
    cout << book1.title << endl;  


    return 0;
}