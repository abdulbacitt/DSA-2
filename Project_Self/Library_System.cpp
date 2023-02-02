#include<iostream>
#include<algorithm>
#include <vector>
#include <set>
#include<assert.h>

using namespace std;
const int max_books = 10;
const int max_users = 10;

struct book {
    string name;
    int id;
    int total_qty;

    book(){
        name = " ";
        id = -1;
        total_qty = 0;
    }

    bool add() {
        cout << " Enter the name, id, and total quantity" << endl;

        cin >> name ;
        cout << " Named sucessfully \n";
        cin >> id;
        cout << " Identification sucessfull" << endl;
        cin >> total_qty ;

        return true;
    }

    void print() {
        cout << name << " ID : " << id << " , total quantity : " << total_qty << endl;
    }
    bool borrow() {
        if(total_qty){
            total_qty--;
            return true;
        } else {
            cout << " No copies of the book are present";
            return false;
        }
        
    }


};
bool contains_prefix(book &b, string &prefix) {

    if((prefix).size() > (b.name).size()) {
        return false;
    }
    int i = 0;

    for(char c: prefix){
        if(b.name[i++]!= c) {
            return false;
        }
    }

    return true;
}

bool comp_by_id(book &a, book &b) {
    return a.id < b.id ;
}


struct user {
    string name;
    int id;
    int books_borrowed;
    set <int> borrowed_books_ids;

    user() {
        name = " ";
        id   = -1 ;
        books_borrowed = 0;
        
    }
    void add() {
            cout << " Enter the name and the ID of the user " << endl;
            cin >> name;
            cin >> id;
    }

    void borrow(int &id) {
        if(books_borrowed < max_books)
        {borrowed_books_ids.insert(id);
        books_borrowed++;}
        else
        cout << " Registry for the maximum books is full" << endl;
    }

    void print() {
        cout << " User " << name << " ; book ids: ";
        for(auto ids: borrowed_books_ids) {
            if(ids != -1)
            cout << ids << " ";
        }
    }

    bool has_book(int &book_id) {
        auto it = borrowed_books_ids.find(book_id);
        if(it != borrowed_books_ids.end()) {
           
            return true;
        }
        
        return false;
    }

    bool return_book(int &book_id){
        auto it = borrowed_books_ids.find(book_id);
        if(it != borrowed_books_ids.end()) {
            borrowed_books_ids.erase(it);
            return true;
        }
        
        
        return false;
    }

};

struct lib_sys {
    int total_books;
     vector<book> books;

    int total_users;
    vector<user> users;

    //This constructor is excuted on initialization of a variable with lib_sys
    //for example initializing all the data arrays with some data like here all the user
    //names are " " and ids are -1.
    //Edit : This was wrong concept, essentially when the books array will be constructed,
    //       the default constructors will automatically initialize the each user as well as book element.
    lib_sys() {
        total_books = total_users = 0;
    }

    void run() {
        int choice;
        while (true) {
        choice = menu();
        if (choice == 1)
        add_book();
        if (choice == 2)
        search_by_prefix();
        if(choice == 3)
        print_borrowed_by_name();
        if(choice == 4)
        print_library_by_id();
        if(choice == 6)
        add_user();
        if(choice == 7)
        user_borrow_book();
        if(choice == 8)
        user_return_book();
        if(choice == 9)
        print_users();
        }
       
    }

    int menu() {
        int choice = -1;
        while( choice == -1) {
            cout <<" 1) Add Book "<< endl;
            cout <<" 2) Search Books by prefix" << endl;
            cout <<" 3) Print who borrowed by their names" << endl;
            cout <<" 4) Print library by id" << endl;
            cout <<" 5) Print library by name" << endl;
            cout <<" 6) Add a user" << endl;
            cout <<" 7) User borrow book" << endl;
            cout <<" 8) User return book" << endl;
            cout <<" 9) Print users" << endl;


            cin >> choice;

            if( !(1 <= choice <= 10)) {
            cout << " Invalid Choice " << endl;
            choice = -1;
        }
        }

        return choice;

        
    }

    void add_book() {
        book b;
        b.add();
        books.push_back(b);
    }

    void print_library_by_id() {
        sort(books.begin(), books.end(), comp_by_id);

        for(book &b: books) {
            b.print();
        }

    }
    
    void search_by_prefix() {
        string prefiks;
        cout << " Enter the prefix " << endl;
        cin >> prefiks;

        for(book &b: books) {
            if(contains_prefix(b, prefiks)) {
                cout << b.name << endl;
                return;
            }
            
        }

        cout << " There is no book with such prefix" << endl;
        return;
    }
    
    void add_user() {
       user u;
       u.add();
       users.push_back(u);

    }
    void user_borrow_book(){
        int u_idx, b_idx;



        if(idx_book(b_idx) && idx_user(u_idx)) {
            int book_id = books[b_idx].id;
            if(books[b_idx].borrow())
            users[u_idx].borrow(book_id);
            cout << " Book Borrowed " << endl;
        }

    }
    bool idx_book(int &b_idx) {
        cout << " Enter the registered book name" << endl;
    string name;
    cin >> name;
    for(int i = 0; i < books.size(); i++) {
        cout << " acessed " << endl;
    if(books[i].name == name){
        b_idx = i;
        cout << "Book Name succesfully found" << endl;
        return true;
    }
    }
    cout << " Book not found \n";
    return false;
    }
    bool idx_user(int &u_idx) {
        cout << " Enter the registered user name" << endl;
    string name;
    cin >> name;
    for(int i = 0; i < users.size(); i++) {
    if(users[i].name == name){
        u_idx = i;
        cout << " Username sucessfully found" << endl;
        return true;
    }
    }
    return false;

    }
    
    void print_users() {
        {

        for(auto &usr: users) {
           {
            usr.print();
            cout << endl;
            }
        }
        }
    }

    void print_borrowed_by_name(){
        int book_idx;
        if(idx_book(book_idx)) {
            int book_id = books[book_idx].id;
            for(int i = 0; i < users.size(); i++) {
                if(users[i].has_book(book_id)) {
                    cout << users[i].name << endl;
                }
            }
        } else {
            cout << " No such book registered" << endl;
            return;
        }

    }

    void user_return_book() {
        int book_idx, user_idx;
        if(idx_book(book_idx) && idx_user(user_idx)){
            
            if(users[user_idx].return_book(books[book_idx].id))
            cout << "Book returned sucessfully" << endl;books[book_idx].total_qty++;
            return;
        }
         cout << " Book not returned" << endl;
    }


};
int main() {
    lib_sys library;
    library.run();

    return 0;
}