import timeit

result = timeit.timeit(
    "[x * x for x in range(1000)]",
    number=1000
)

print(result)
