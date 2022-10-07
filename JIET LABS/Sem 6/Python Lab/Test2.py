#VAIBHAV SARAN 18EJICS169 END TERM PRACTICAL
import random
word_list = ["ArtificialIntelligence", "NeuralNet", "MediaPipe", "Django", "sklearn", "python", "Hashing"]

def get_word(word_list):
    word = random.choice(word_list)
    return word.upper()


def play(word,points = 0):
    word_completion = "_" * len(word)
    guessed = False
    guessed_letters = []
    guessed_words = []
    tries = 6
    print("Let's play Hangman")
    print(f"You have {tries} turns to guess the word")
    print(word_completion)
    print("\n")
    while not guessed and tries > 0:
        guess = input("guess a letter or word: ").upper()
        if len(guess) == 1 and guess.isalpha():
            if guess in guessed_letters:
                print("you already tried", guess, "!")
                print("Points: ", points)
                print("Turns Left: ", tries)
            elif guess not in word:
                print(guess, "isn't in the word :(")
                tries -= 1
                guessed_letters.append(guess)
                print("Points: ", points)
                print("Turns Left: ", tries)
            else:
                print("Nice one,", guess, "is in the word!")
                guessed_letters.append(guess)
                word_as_list = list(word_completion)
                indices = [i for i, letter in enumerate(word) if letter == guess]
                for index in indices:
                    word_as_list[index] = guess
                word_completion = "".join(word_as_list)
                if "_" not in word_completion:
                    guessed = True
        elif len(guess) == len(word) and guess.isalpha():
            if guess in guessed_words:
                print("You already tried ", guess, "!")
                print("Points: ", tries)
                print("Turns Left: ", tries)
            elif guess != word:
                print(guess, " ist The ord :(")
                tries -= 1
                guessed_words.append(guess)
                print("Points: ", points)
                print("Turns Left: ", tries)
            else:
                guessed = True
                word_completion = word
        else:
            print("invalid input")
        print(word_completion)
        print("\n")
    if guessed:
        points = +1
        print("Good Job, you guessed the word!")
        print("Points: ", points)
        print("Turns Left: ", tries)
    else:
        print("I'm sorry, but you ran out of tries. The word was " + word + ". Maybe next time!")
        print("Points: ", points)
        print("Turns Left: ", tries)
def main():
    print("Python End Sem Practical Examination")
    print("Name: Vaibhav Saran")
    print("Roll No.: 18EJICS169")
    print("Q2")
    word = get_word(word_list)
    play(word)
    while input("Again? (Y/N) ").upper() == "Y":
        word = get_word(word_list)
        play(word)
if __name__ == "__main__":
    main()