import random

def play_hangman():
    # Prepopulated list of words
    word_list = ["PYTHON", "DEVELOPER", "ALGORITHM", "VARIABLE", "FUNCTION", "ITERATION"]
    
    # Select a random target word
    target_word = random.choice(word_list)
    
    # Game state variables
    guessed_letters = set()
    attempts_left = 6
    
    print("Welcome to Hangman!")
    print("Try to guess the hidden word, one letter at a time.")
    
    # Main game loop
    while attempts_left > 0:
        # Build the current state of the word (revealed letters and underscores)
        display_word = [letter if letter in guessed_letters else "_" for letter in target_word]
        
        # Check if the player has won
        if "_" not in display_word:
            print(f"\nCongratulations! You won! The word was: {target_word}")
            return
            
        # Display current game state
        print(f"\nWord: {' '.join(display_word)}")
        print(f"Attempts left: {attempts_left}")
        if guessed_letters:
            print(f"Guessed letters: {', '.join(sorted(guessed_letters))}")
        
        # Prompt player input
        guess = input("Guess a letter: ").upper()
        
        # Input validation
        if len(guess) != 1 or not guess.isalpha():
            print("Invalid input. Please enter a single letter.")
            continue
            
        # Check for duplicate guesses
        if guess in guessed_letters:
            print("You already guessed that letter. Try a different one.")
            continue
            
        # Record the valid guess
        guessed_letters.add(guess)
        
        # Check if the guess is correct or incorrect
        if guess in target_word:
            print(f"Good job! '{guess}' is in the word.")
        else:
            print(f"Sorry, '{guess}' is not in the word.")
            attempts_left -= 1
            
    # If the loop finishes without a return, the player ran out of attempts
    print(f"\nGame Over! You've run out of attempts.")
    print(f"The correct word was: {target_word}")

if __name__ == "__main__":
    play_hangman()