def announce(func):

    def wrapper(*args, **kwargs):
        print("Before")
        result = func(*args, **kwargs)
        print("After")
        return result

    return wrapper

@announce
def greet(name):
    print("Hello", name)

greet("Sanju")
