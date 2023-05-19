def clean_string(text):
    str = ""
    for val in text:
        if val.isalpha():
            str = str+val
    return str
s = "P::::::,,,,,h;;;;i,,,t--r;,:o..N"
output = clean_string(s)
print(output)
