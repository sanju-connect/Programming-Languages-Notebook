def announce(func):
    def wrapper():
        print("Starting...")
        func()
        print("Finished!")

    return wrapper


@announce
def greet():
    print("Hello")

greet()



def announce(func):

    def wrapper():
        print("Before")
        func()
        print("After")

    return wrapper

w = announce(greet)
