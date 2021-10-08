# We need to make sure we are entering in a str to avoid a
# TypeError: can't convert list to int
scores = input('Input each score separated by a space: ').split()

# Convert str list into an int list
for n in range(0, len(scores)):
    scores[n] = int(scores[n])

print(scores)

highest_score = 0

for score in scores:
  if score > highest_score:
    highest_score = score

print('The highest score is {0}!'.format(highest_score))
