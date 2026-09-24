class InvalidAgeError(Exception):
  pass

age = -5

if age < 0:
    raise InvalidAgeError("Age cannot be negative")
