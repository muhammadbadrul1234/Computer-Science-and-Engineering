d = {'!': 1, '@' : 2, '#': 3, '$' : 4, '%' : 5, '^' : 6}
def create_list(dict):
    dtl = []
    for key, val in dict.items():
        dtl.append(key)
        dtl.append(val)
    return dtl
print(create_list(d))