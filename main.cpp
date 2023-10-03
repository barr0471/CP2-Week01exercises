#include <iostream>

void blastoff();
void output();

int main() {

    output();
    return 0;
}

void output(){
    using namespace std;

    cout << "I was printed by C++" << endl;
    cout << "\"I\" was printed by C++" << endl;
    cout << "\"I\" was printed by \"cout << \\\"I\\\" << endl\"" << endl;
}

void blastoff(){
    for(int i= 10; i > 0; i--){
        std::cout << i << ", ";
    }
    std::cout << "Blastoff!";
}
