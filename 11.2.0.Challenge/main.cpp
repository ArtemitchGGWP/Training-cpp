#include <iostream>
using namespace std;

int main()
{
    string alphabet{"* abcdefghijklmnopqstruvwxyzABCDEFGHIJKLMNOPQSTRUVWXYZ"};
    string key{" *XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message{};
    cout << "Enter your secret message" << endl;
    getline(cin, secret_message);

    string encrypted_message{};
    cout << "\nEncrypting message..." << endl;

    for (char c: secret_message){
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_character{key.at(position)};
            encrypted_message += new_character;
        } else {
            encrypted_message += c;
        }
    }

    cout << "\nEncrypted message: " << encrypted_message << endl;

    string decrypted_message{};
    cout << "\nDecrypting message..." << endl;

    for (char c: encrypted_message){
        size_t position = key.find(c);
        if (position != string::npos){
            char new_character{alphabet.at(position)};
            decrypted_message += new_character;
        } else {
            decrypted_message += c;
        }
    }
    cout << "\nDecrypted message: " << decrypted_message << endl;

    return 0;
}