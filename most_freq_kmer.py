# This is to find most frequent K-mer in a given string

k = int(input("Enter the length of read: "))
with open("dataset_2_10.txt", "r") as fp:
    data = fp.read().splitlines()
    dna = data[0]

freq = []
for i in range(0,len(dna)-k+1):
    count = 0
    maxcount = 0 
    read = dna[i:i+k]
    for j in range(0, len(dna)) :
        if(read == dna[j:j+k]):
            count = count +1
    if(count > maxcount):
        freq.append((read, count))
        #freq.append(count)
uniq_lst = []
for x in freq:
    if x not in uniq_lst:
        uniq_lst.append(x)
uniq_lst.sort(key = lambda x:x[1])
print(uniq_lst)
