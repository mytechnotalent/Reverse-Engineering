import urandom
import math
 
UPPER = 10
LOWER = 1

# Generate random number between 1 and 10
x = urandom.randint(LOWER, UPPER)
print('\n\tYou\'ve only ', round(math.log(10 - 1 + 1, 2)), ' chances to guess the number!\n')
 
# Initiale the number of guesses
count = 0
 
# Game loop
while count < math.log(UPPER - LOWER + 1, 2):
    count += 1
 
    guess = int(input('Guess a number: '))
 
    # Condition testing
    if x == guess:
        print('Congratulations you did it in ', count, ' tries!')
        break
    elif x > guess:
        print('You guessed too small!')
    elif x < guess:
        print('You guessed too high!')
 
# If lose
if count >= math.log(UPPER - LOWER + 1, 2):
    print('\nThe number is %d' % x)