#!/usr/bin/python3

def max_integer(my_list=[]):
	if not my_list:
		return None

	largest = my_list[0]
	for num in my_list:
		if num > largest:
			largest = num


	return largest

my_list = [12, 45, 6, 87, 23]
result = max_integer(my_list)
print(result) # Output: 87
