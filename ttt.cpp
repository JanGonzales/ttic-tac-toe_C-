#include <iostream>
#include <vector>

int main(){
    std::vector <char> row1 = 
    {'1','2','3',
    '4','5','6',
    '7','8','9'};
    std::string old_answers; //this will contain all the numbers already chosen, if user or computer chose the same number he needs to chose a new one.
    int action;
    bool user;
    bool computer;
    int user_choice;

    std::cout << "Welcome to the most fun game tic-tac-toe" << std::endl;

    while (action <= 9 or computer == true or user == true){
        std::cout << "Enter your number: ";
        std::cin >> user_choice;
        // write the function on a seperate cpp

        std::cout << "    |    |    " << "\n";
        std::cout << "  " << row1[0] << " | " << row1[1]<<"  |  " << row1[2]  << "\n";
        std::cout << "____|____|____" << "\n";
        std::cout << "    |    |    " << "\n"; 
        std::cout << "  " << row1[3] << " | " << row1[4]<<"  |  " << row1[5]  << "\n";
        std::cout << "____|____|____" << "\n";
        std::cout << "    |    |    " << "\n";
        std::cout << "  " << row1[6] << " | " << row1[7]<<"  |  " << row1[8]  << "\n";
        std::cout << "    |    |    " << "\n";
        action ++;  
    } 
}