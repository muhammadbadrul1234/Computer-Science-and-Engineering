def replace_comma_with_space(text):
   emptyString = ""
   for val in text:
    if val == ',':
        emptyString+= " "
    else:
        emptyString+=val
   return emptyString

s = "I,have,been,practising,python,since,the,course,started"
 
output = replace_comma_with_space(s)
print(output)