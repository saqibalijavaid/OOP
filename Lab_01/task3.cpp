// Task 3: Design a `Book` class with the following attributes and member functions.
// Attributes:
//     • Title
//     • Author
//     • Genre
//     • Publication Year
//     • Price
// All data members will be hidden from user.

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string genre;
    int publiationYear;
    int price;

public:
    // setters
    void setTitle(string x)
    {
        title = x;
    }
    void setAuthor(string x)
    {
        author = x;
    }
    void setGenre(string x)
    {
        genre = x;
    }
    void setPublicationYear(int x)
    {
        publiationYear = x;
    }
    void setPrice(int x)
    {
        price = x;
    }

    // getters

    string getTitle()
    {
        return title;
    }
    string getAuthor()
    {
        return author;
    }
    string getGenre()
    {
        return genre;
    }
    int getPublicationYear()
    {
        return publiationYear;
    }
    int getPrice()
    {
        return price;
    }
    int getDiscountedPrice()
    {
        return price;
    }

    void printBookDetails()
    {
        cout << "\nBook details:" << endl;
        cout << "Roll No: " << title << endl;
        cout << "Author Name: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Publication Year: " << publiationYear << endl;
        cout << "Price: " << price << endl;
        cout << "Discounted Price: " << (price / 100)*90 << endl;
    }

    // void giveDiscount(int price)
    // {
    //     price = (price / 100) * 90;
    // }
};

int main(void)
{

    Book b1;

    string title;
    string author;
    string genre;
    int publiationYear;
    int price;

    cout << "Enter price: ";
    cin >> price;

    b1.setTitle(title);
    b1.setAuthor(author);
    b1.setGenre(genre);
    b1.setPublicationYear(publiationYear);
    b1.setPrice(price);

    // b1.giveDiscount(price);

    // cout << b1.getPrice() << endl;
    // cout << b1.giveDiscount(price) << endl;

    b1.printBookDetails();

    return 0;
}