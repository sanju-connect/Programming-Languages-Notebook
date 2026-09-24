class Student:
  def __iniy__(self, name):
    self.name = name

  def __repr__(self):
    return f"Student({self.name!r})"
