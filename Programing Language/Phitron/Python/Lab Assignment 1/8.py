def test_script():
    def make_upper(value):
        value = value.upper()
        return value
 
    def make_capital(value):
        value = value.capitalize()
        return value
 
    def make_lower(value):
        value = value.lower()
        return value
 
    value = "leaDing"
    assert make_upper(value) == "LEADING"
    assert make_lower(value) == "leading"
    assert make_capital(value) == "Leading"
 
 
test_script()
