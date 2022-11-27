def replace_word(line, word_list):
    line = line.split()
    targer_word = 0
    replace_word = 1
 
 
 
    for word in line:
        if word == word_list[targer_word]:
            i = line.index(word)
            line[i] = word_list[replace_word]
            if replace_word != len(word_list) - 1:
                targer_word += 2
                replace_word += 2
 
    line = " ".join(line)
    return line
 
s = "I am the chief of Baghdad. Before that I used to be a superintendent of Bank Asia. Things have changed a lot since Jorina married me. A lot of girls tried to marry me."
replace_with = [
    "chief",
    "thief",
    "superintendent",
    "sweeper",
    "married",
    "left",
    "tried",
    "died",
]
 
print(replace_word(s, replace_with))
