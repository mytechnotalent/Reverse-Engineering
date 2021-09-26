my_none = None
my_empty_quotes = ''
my_zero = 0
my_false = False

if my_none:
    print('I will never print this line.')
elif my_empty_quotes:
    print('I will never print this line.')
elif my_zero:
    print('I will never print this line.')
elif my_false:
    print('I will never print this line.')
else:
    print('All of the above are falsey.')


my_none = None
my_empty_quotes = ''
my_zero = 0
my_false = False

if my_none == True:
    print('I will never print this line.')
elif my_empty_quotes == True:
    print('I will never print this line.')
elif my_zero == True:
    print('I will never print this line.')
elif my_false == True:
    print('I will never print this line.')
else:
    print('All of the above are falsey.')


my_none = None
my_empty_quotes = ''
my_zero = 0
my_false = False

if not my_none:
    print('I will print this line.')
if not my_empty_quotes:
    print('I will print this line.')
if not my_zero:
    print('I will print this line.')
if not my_false:
    print('I will print this line.')
else:
    print('I will never print this line.')


my_none = None
my_empty_quotes = ''
my_zero = 0
my_false = False

if not my_none == True:
    print('I will print this line.')
if not my_empty_quotes == True:
    print('I will print this line.')
if not my_zero == True:
    print('I will print this line.')
if not my_false == True:
    print('I will print this line.')
else:
    print('I will never print this line.')


my_empty_space = ' '
my_name = 'Kevin'
my_number = 42
my_true = True

if my_empty_space:
    print('I will print this line.')
if my_name:
    print('I will print this line.')
if my_number:
    print('I will print this line.')
if my_true:
    print('I will print this line.')
else:
    print('I will never print this line.')


my_empty_space = ' '
my_name = 'Kevin'
my_number = 42
my_true = True

if not my_empty_space:
    print('I will never print this line.')
if not my_name:
    print('I will never print this line.')
if not my_number:
    print('I will never print this line.')
if not my_true:
    print('I will never print this line.')
else:
    print('All of the above are truthy.')


