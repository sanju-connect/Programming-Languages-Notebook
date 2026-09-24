def count():
  yield 1
  yield 2
  yield 3

numbers = count()

for number in count():
  print(number)
