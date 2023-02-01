#include<iostream>
#include<algorithm>

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

        cin >> name >> id >> total_qty;

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
bool contains_prefix(book &a, string &prefix) {

    if((prefix).size() > (a.name).size()) {
        return false;
    }

    for(int i = 0; i < (prefix).size(); i++){
        if(a.name[i]!=prefix[i]) {
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
    int borrowed_books_ids[max_books];

    user() {
        name = " ";
        id   = -1 ;
        books_borrowed = 0;
        for(auto &ids: borrowed_books_ids) {
            ids = -1;
        }
    }
    void add() {

            cin >> name;
            cin >> id;
    }

    void borrow(int &id) {
        if(books_borrowed < max_books)
        borrowed_books_ids[books_borrowed++] = id;
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
        for(auto ids: borrowed_books_ids) {
            if(ids = book_id)
            return true;
        }
        return false;
    }

    bool return_book(int &book_id){
        for(int i = 0; i < books_borrowed; i++){
            if(borrowed_books_ids[i] == book_id){
                for(int j = i; j < books_borrowed; j++) {
                  
                  borrowed_books_ids[j] = borrowed_books_ids[j+1];
                
                }
                books_borrowed--;
                return true;
            }
        }
        return false;
    }

};

struct lib_sys {
    int total_books;
    book books[max_books];

    int total_users;
    user users[max_users];

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
        if(total_books < max_books) {
            books[total_books].add();
            total_books++;
        }
    }

    void print_library_by_id() {
        sort(books, books+total_books, comp_by_id);

        for(int i = 0; i < total_books; i++) {
            books[i].print();
        }

    }
    
    void search_by_prefix() {
        string prefiks;
        cout << " Enter the prefix " << endl;
        cin >> prefiks;

        for(int i = 0; i < total_books; i++) {
            if(contains_prefix(books[i], prefiks)) {
                cout << books[i].name << endl;
                return;
            }
            
        }

        cout << " There is no book with such prefix" << endl;
        return;
    }
    
    void add_user() {
        if(total_users < max_users){
            cout << "Enter the name of the user and ID" << endl;           
            users[total_users++].add();
        }

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
    for(int i = 0; i < total_users; i++) {
    if(books[i].name == name){
        b_idx = i;
        cout << "Book Name succesfully found" << endl;
        return true;
    }
    }
    return false;
    }
    bool idx_user(int &u_idx) {
        cout << " Enter the registered user name" << endl;
    string name;
    cin >> name;
    for(int i = 0; i < total_users; i++) {
    if(users[i].name == name){
        u_idx = i;
        cout << " Username sucessfully found" << endl;
        return true;
    }
    }
    return false;

    }
    
    void print_users() {
        if(total_users > 0) {

        for(auto usr: users) {
            if(usr.name != " ") {
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
            for(int i = 0; i < total_users; i++) {
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
            books[book_idx].total_qty++;
            if(users[user_idx].return_book(books[book_idx].id))
            cout << "Book returned sucessfully" << endl;
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