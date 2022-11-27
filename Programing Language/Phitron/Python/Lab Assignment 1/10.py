def create_new_string(line, replace_list):
    emptyString = []
    line = line.replace(",", " ")
    line = line.replace(".", " ")
    line = line.split()
    line[0] = line[0].lower()
    replace_list.reverse()
 
    n= len(line) - 1
    targetListList = 0
 
    for word in range(n, -1, -1):
        if line[word] == replace_list[targetListList]:
            emptyString.append(line[word + 1])
            if targetListList != len(replace_list) - 1:
                targetListList += 1
 
    emptyString.reverse()
    emptyString = " ".join(emptyString)
    return emptyString
 
 
s = "Oh, I got two tickets for Dhaka. I and Emelia love to visit different places very much. This time we are going to Bangladesh."
a = ["oh", "Emelia", "to"]
 
with open("./output.txt", "w") as file:
    file.write(f"output = {create_new_string(s, a)}")