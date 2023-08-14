#!/usr/bin/python3

def element_at(my_list, idx):
	if idx < 0 or idx >= len(my_list):
		return None
	return my_list[idx]

my_list = [1, 2, 3, 4, 5]
idx = 2
result = element_at(my_list, idx)
print(result) #this will print: 3
