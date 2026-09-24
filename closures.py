def make_greeter(name):

  def great():
    print("Hello", name)

    return great

great_sam = make_greeter("Sam")
greet_sam()
