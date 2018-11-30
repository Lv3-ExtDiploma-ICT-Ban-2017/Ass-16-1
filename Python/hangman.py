#importing the time module
import time
import random

#welcoming the user
name = input("What is your name? ")
print ('\n')

print ("Hello, " + name, "! Time to play hangman!")

print ('\n')

#wait for 1 second
time.sleep(1)

print ("Start guessing...")
time.sleep(0.5)

#Random words
words = 'ant baboon badger bat bear beaver camel cat clam cobra cougar coyote crow deer dog donkey duck eagle ferret fox frog goat goose hawk lion lizard llama mole monkey moose mouse mule newt otter owl panda parrot pigeon python rabbit ram rat raven rhino salmon seal shark sheep skunk sloth snake spider stork swan tiger toad trout turkey turtle weasel whale wolf wombat zebra'.split()

def getRandomWord(wordList):
# This function returns a Random string from the passed list of strings.
	wordIndex = random.randint(0, len(wordList) - 1)
	return wordList[wordIndex]

#here we set the secret word
word = getRandomWord(words)
#word = "secret"

#creates an variable with an empty value
guesses = ''

#determine the number of turns
turns = 10

# Create a while loop

#check if the turns are more than zero
while turns > 0:         

    # make a counter that starts with zero
    failed = 0             

    # for every character in secret_word    
    for char in word:      

    # see if the character is in the players guess
        if char in guesses:    
    
        # print then out the character
            print (char),    

        else:
    
        # if not found, print a dash
            print ("_"),     
       
        # and increase the failed counter with one
            failed += 1    

    # if failed is equal to zero

    # print You Won
    if failed == 0:        
        print ("You won")

    # exit the script
        break              

    print

    # ask the user go guess a character
    guess = input("guess a character:") 

    # set the players guess to guesses
    guesses += guess                    

    # if the guess is not found in the secret word
    if guess not in word:  
 
     # turns counter decreases with 1 (now 9)
        turns -= 1        
 
    # print wrong
        print ("Wrong")
 
    # how many turns are left
        print ("You have", + turns, 'more guesses' )
 
    # if the turns are equal to zero
        if turns == 0:           
    
        # print "You Loose"
            print ("You Loose")
