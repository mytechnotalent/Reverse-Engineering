chocolates = ['caramel', 'dark', 'milk']

print(chocolates)
print(chocolates[0])
print(chocolates[1])
print(chocolates[-1])
print(chocolates[-2])
print(chocolates[:])
print(chocolates[:-1])
print(chocolates[1:])

chocolates.append('sweet')

print(chocolates)

chocolates.remove('milk')

print(chocolates)


RED = (255, 0, 0)


generic_ted = {
                'your name': 'My name is Mr. George.',
                'food': 'I like pizza.',
              }

print(generic_ted['your name'])

generic_ted['drink'] = 'Milkshake'

print(generic_ted)

generic_ted['interests'] = ['Python', 'Hiking']

print(generic_ted)

generic_ted.pop('drink')

print(generic_ted)


chocolates = ['caramel', 'dark', 'milk']

for chocolate in chocolates:
    print(chocolate)

chocolates = ['caramel', 'dark', 'milk']

for chocolate in chocolates:
    print(chocolate)
    print('I am eating {0} chocolate!  YUMMY!'.format(chocolate))

for number in range(1, 5):
    print(number)

print()

for number in range(3, 9, 3):
    print(number)

has_chocolate = True

while has_chocolate:
    print('I have chocolate!')
    print('Yay I just ate it!')
    print('So yummy!')
    has_chocolate = False
    
print('Oh no I ate all my chocolate! :(')