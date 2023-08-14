#!/usr/bin/python3

def divisible_by_2(my_list=[]):
	result = []
	for num in my_list:
		result.append(num % 2 == 0)
	return result

my_list = [1, 2, 3, 4, 5, 6, 7, 8]
result = divisible_by_2(my_list)
print(result)  # Output: [False, True, False,
True, False, True, False, True]
