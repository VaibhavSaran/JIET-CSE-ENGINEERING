# Sunali jamwal 18EJICS165
def most_frequent(string):
    d={}
    string = string.lower()
    for i in string:
        if i not in d.keys():
            d[i]=1
        else:
            d[i]+=1
    key = sorted(d, key=d.get, reverse=True)
    print("Letters in decreasing order:\n")
    for i in key:
        print(i,d[i]) 

most_frequent("Sunali")