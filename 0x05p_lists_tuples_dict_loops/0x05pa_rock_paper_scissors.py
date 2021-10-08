import random

game_choices = ['Rock', 'Paper', 'Scissors']

computer_choice = random.randint(0, 2)

player_choice = int(input('What do you choose?  Type 0 for Rock, 1 for Paper, 2 for Scissors. '))

if computer_choice == 0:
    computer_choice = 'Rock'
elif computer_choice == 1:
    computer_choice = 'Paper'
else:
    computer_choice = 'Scissors'  
if player_choice == 0:
    player_choice = 'Rock'
elif player_choice == 1:
    player_choice = 'Paper'
else:
    player_choice = 'Scissors'

print('Computer chose {0} and player chose {1}.'.format(computer_choice, player_choice))

if computer_choice == 'Rock' and player_choice == 'Scissors':
  print('Computer - {0}'.format(game_choices[0]))
  print('Player - {0}'.format(game_choices[2]))
  print('Computer Wins!')
elif computer_choice == 'Scissors' and player_choice == 'Rock':
  print('Computer - {0}'.format(game_choices[2]))
  print('Player - {0}'.format(game_choices[0]))
  print('Player Wins!')
elif computer_choice == 'Scissors' and player_choice == 'Paper':
  print('Computer - {0}'.format(game_choices[2]))
  print('Player - {0}'.format(game_choices[1]))
  print('Computer Wins!')
elif computer_choice == 'Paper' and player_choice == 'Scissors':
  print('Computer - {0}'.format(game_choices[1]))
  print('Player - {0}'.format(game_choices[2]))
  print('Player Wins!')
elif computer_choice == 'Paper' and player_choice == 'Rock':
  print('Computer - {0}'.format(game_choices[1]))
  print('Player - {0}'.format(game_choices[0]))
  print('Computer Wins!')
elif computer_choice == 'Rock' and player_choice == 'Paper':
  print('Computer - {0}'.format(game_choices[0]))
  print('Player - {0}'.format(game_choices[1]))
  print('Player Wins!')
else:
  if computer_choice == 'Rock':
    print('Computer - {0}'.format(game_choices[0]))
    print('Player - {0}'.format(game_choices[0]))
  elif computer_choice == 'Paper':
    print('Computer - {0}'.format(game_choices[1]))
    print('Player - {0}'.format(game_choices[1]))
  else:
    print('Computer - {0}'.format(game_choices[2]))
    print('Player - {0}'.format(game_choices[2]))
  print('Draw!')
