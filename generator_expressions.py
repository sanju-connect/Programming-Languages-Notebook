numbers = [1, 2, 3, 4]

squares = [x * x for x in numbers]

for square in squares:
    print(square)

numbers = [x for x in range(10_000_000)]
numbers = (x for x in range(10_000_000))

for number in numbers:
    process(number)
