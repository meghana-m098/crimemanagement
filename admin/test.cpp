inside the function
cnt = 0
i=0
uniques = []
for line in str:
    words = line.split()
    for word in words:
        if word not in uniques:
            uniques.append(word)
for word in words:
    while i<len(uniques):
        i+=1
        if word in uniques:
             cnt += 1
print cnt