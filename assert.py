def add(a, b):
    return a + b

def test_add():
    assert add(2, 3) == 5
    assert add(0, 5) == 5
    assert add(-2, 2) == 0
