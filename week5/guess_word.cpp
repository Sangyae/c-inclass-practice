#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<random>
#include<cctype>

int main() {
    std::vector<std::string> word_list = {"apple", "banana", "cherry", "date", "elderberry"};
    std::set<char> guessed_letters;
    std::string secret_word = word_list[rand() % word_list.size()];
    std::string display_word(secret_word.size(), '_');
    int attempts = 6;
    std::cout << "****** The word Gussing game ******" << "\n"<< std::endl;
    while (attempts > 0 && display_word != secret_word) {
        std::cout << "Word: " << display_word << "\n";
        std::cout << "Guessed letters: ";
        for (char letter : guessed_letters) {
            std::cout << letter << " ";
        }
        std::cout << "\nAttempts left: " << attempts << "\n";
        std::cout << "Enter a letter: ";
        char guess;
        std::cin >> guess;
        guess = std::tolower(guess);

        if (guessed_letters.count(guess)) {
            std::cout << "You already guessed that letter. Try again.\n";
            continue;
        }

        guessed_letters.insert(guess);
        bool correct_guess = false;

        for (size_t i = 0; i < secret_word.size(); ++i) {
            if (secret_word[i] == guess) {
                display_word[i] = guess;
                correct_guess = true;
            }
        }

        if (!correct_guess) {
            --attempts;
            std::cout << "Wrong guess! Try again.\n";
        }
    }
    
    if (display_word == secret_word) {
        std::cout << "Congratulations! You guessed the word: " << secret_word << "\n";
    } else {
        std::cout << "Game over! The secret word was: " << secret_word << "\n";
    }

    return 0;
}