from random import choice

chocolates = ['milk', 'white', 'dark', 'caramel', 'mint']
rooms = {}
room_number = 1
guesses = 2

for room in range(1, len(chocolates) + 1):
    random_chocolate = choice(chocolates)
    rooms[room] = random_chocolate
    chocolates.remove(random_chocolate)
    
print('Welcome to the Talking Caramel Chocolate Adventure Game!')
print('There are 5 rooms and your goal is to find the room with the caramel.')
print('You get two guesses.')
 
while guesses > 0:
    try:
        guess = int(input('Enter Room: '))
    except ValueError:
        print('You lose immediately!  You did not choose a room between 1 and 5.')
        break
    if guess < 1 or guess > 5:
        print('You lose immediately!  You did not choose a room between 1 and 5.')
        break
    if rooms[room_number] == 'caramel':
        print('You found the caramel chocolate!  Great job!')
        break
    else:
        print('Sorry this room has {0} chocolate.'.format(rooms[room_number]))
        guesses -= 1
            
if guesses <= 0:
    print('Sorry about that.  Please play again.')
else:
    print('Please play again.')