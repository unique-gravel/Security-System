#include <iostream>
#include <conio.h>
using namespace std;

int user = 0; // used to traverse to user in R[]

struct Register {
    int id;
    string email, name, password;
} R[25]; // can store data of 25 users

void registerAccount() {
    system("cls"); // clear the screen

    //heading
    char ch = 178;
    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    cout << " Security System using C++ " ;

    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    //Input the credentials from the user
    cout << "\n\n" << "Enter User ID: ";
    cin >> R[user].id;

    cout << "\n\n" << "Enter User Name: ";
    cin >> R[user].name;

    cout << "\n\n" << "Enter User Email: ";
    cin >> R[user].email;

    cout << "\n\n" << "Enter User Password: "; //dynamic password input
    char temp;
    do
    {
        temp = getch();
        if(isdigit(temp) || isalpha(temp) || ispunct(temp)) {
            R[user].password += temp;
            cout << "*";
        }
    } while (isdigit(temp) || isalpha(temp) || ispunct(temp));

    //increament the user index
    user++;
    
    //final confirmation message
    cout << "\n\n" << ch << ch << " Account Registerd " << ch << ch;

    
}

void loginAccount() {
    system("cls"); // clear the screen

    //heading
    char ch = 178;
    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    cout << " Security System using C++ " ;

    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    //login now
    if(user == 0) {
        cout << "\n\n" << ch << ch << " No Record Found " << ch << ch;
    }
    else {

        //take email and password as input for login
        string testEmail, testPassword;
        cout << "\n\n" << "Enter User Email: ";
        cin >> testEmail;

        cout << "\n\n" << "Enter User Password: "; //dynamic password input
        char temp;
        do
        {
            temp = getch();
            if(isdigit(temp) || isalpha(temp) || ispunct(temp)) {
                testPassword += temp;
                cout << "*";
            }
        } while (isdigit(temp) || isalpha(temp) || ispunct(temp));

        //check the credentials in the record R[]
        int found = 0;
        for(int k = 0; k < user; k++) {
            if(testEmail == R[k].email && testPassword == R[k].password) { //match found
                cout << "\n\n" << "User ID: " << R[k].id;
                cout << "\n\n" << "Enter User Name: " << R[k].name;
                cout << "\n\n" << "Enter User Email: " << R[k].email;
                cout << "\n\n" << "Enter User Password: " << R[k].password;
                found++;
                break; 
            }
        }
        if(found == 0) { // creadentials not found in the record R
            cout << "\n\n" << ch << ch << " Invalid Credentials " << ch << ch;
        }
    }
}

void forgotEmail() {
    system("cls"); // clear the screen

    //heading
    char ch = 178;
    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    cout << " Security System using C++ " ;

    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    //login now using password only
    if(user == 0) {
        cout << "\n\n" << ch << ch << " No Record Found " << ch << ch;
    }
    else {

        //take password as input for login
        string testPassword;

        cout << "\n\n" << "Enter User Password: "; //dynamic password input
        char temp;
        do
        {
            temp = getch();
            if(isdigit(temp) || isalpha(temp) || ispunct(temp)) {
                testPassword += temp;
                cout << "*";
            }
        } while (isdigit(temp) || isalpha(temp) || ispunct(temp));

        //check the credentials in the record R[]
        int found = 0;
        for(int k = 0; k < user; k++) {
            if(testPassword == R[k].password) { //match found
                cout << "\n\n" << "User ID: " << R[k].id;
                cout << "\n\n" << "Enter User Name: " << R[k].name;
                cout << "\n\n" << "Enter User Email: " << R[k].email;
                cout << "\n\n" << "Enter User Password: " << R[k].password;
                found++;
                break; 
            }
        }
        if(found == 0) { // creadentials not found in the record R
            cout << "\n\n" << ch << ch << " Invalid Credentials " << ch << ch;
        }
    }
}

void forgotPassword() {
    system("cls"); // clear the screen

    //heading
    char ch = 178;
    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    cout << " Security System using C++ " ;

    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    //login now using email only
    if(user == 0) {
        cout << "\n\n" << ch << ch << " No Record Found " << ch << ch;
    }
    else {

        //take email and password as input for login
        string testEmail;
        cout << "\n\n" << "Enter User Email: ";
        cin >> testEmail;

        //check the credentials in the record R[]
        int found = 0;
        for(int k = 0; k < user; k++) {
            if(testEmail == R[k].email) { //match found
                cout << "\n\n" << "User ID: " << R[k].id;
                cout << "\n\n" << "Enter User Name: " << R[k].name;
                cout << "\n\n" << "Enter User Email: " << R[k].email;
                cout << "\n\n" << "Enter User Password: " << R[k].password;
                found++;
                break; 
            }
        }
        if(found == 0) { // creadentials not found in the record R
            cout << "\n\n" << ch << ch << " Invalid Credentials " << ch << ch;
        }
    }
}

main () {
    p:
    system("cls");
    //create a heading using ascii code
    int ascii = 178;
    char ch = ascii;
    cout << "\n";

    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    cout << " Security System using C++ " ;

    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }

    //give options to the user and take choice as input
    cout << "\n\n" << ch << ch << " 1. Register Account";
    cout << "\n\n" << ch << ch << " 2. Login Account";
    cout << "\n\n" << ch << ch << " 3. Forgot Email";
    cout << "\n\n" << ch << ch << " 4. Forgot Password";
    cout << "\n\n" << ch << ch << " 5. Exit \n\n";

    for(int i = 1; i <= 25; i++) {
        cout << ch;
    }
    
    int choice;
    cout << "\n\nEnter your choice: ";
    cin >> choice;
    cout << "\n";
    
    //switch cases according to the user choice
    switch (choice) {
    case 1:
        registerAccount();
        break;
    case 2:
        loginAccount();
        break;
    case 3:
        forgotEmail();
        break;
    case 4:
        forgotPassword();
        break;
    case 5:
        exit(0);
    
    default:
        cout << ch << ch << " Please enter correct choice " << ch << ch;
    }
    getch();
    goto p;

}