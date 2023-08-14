#!/usr/bin/python3

def new_in_list(my_list, idx, element):
	if idx < 0 or idx >= len(my_list):
		return my_list[:]

	new_list = my_list[:]
	new_list[idx] = element
	return new_list

original_list = [1, 2, 3, 4, 5]
new_element = 10
idx = 2
result = new_in_list(original_list, idx, new_element)
print("Original List:", original_list) # This will print: [1, 2, 3, 4, 5]
print("Modified List:", result) 	# This will print: [1, 2, 10, 4, 5]
