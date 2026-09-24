class Team:
  def __init__(self, members):
    self.members = members

  def __iter__(self):
    return iter(self.members)

team = Team(["Sam", "Alex", "John"])

for member in team:
  print(member)
