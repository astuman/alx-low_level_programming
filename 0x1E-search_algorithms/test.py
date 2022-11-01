#!/usr/bin/python3
def search(list, data):
    i = 0
    while i< len(list):
        if list[i] == data:
            globals()['pos'] = i
            return True
        i = i+1
    return False

list [1, 5, 6, 2, 99]
data = 6
if search(list, data):
    print("data found at ", pos)
else:
    print("data not found")
    
