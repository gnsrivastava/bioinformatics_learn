# This is to print total number known patterns found in a given DNA sequence
with open("dataset_2_7.txt", "r") as fp:
    data = fp.read().splitlines()
    dna = data[0]
    len_dna = len(dna)
    read = data[1]
    len_read = len(read)
    
count = 0
for i in range((len_dna - len_read)+1):
    check = dna[i:i+len_read]
    if(check == read):
        count += 1
print(count)