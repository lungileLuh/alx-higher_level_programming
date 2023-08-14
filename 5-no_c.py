#!/usr/bin/python3

def no_c(my_string):
	new_string = " "
	for char in my_string:
		if char != 'c' and char != 'C':
			new_string += char
	return new_string

input_string = "Hello, Coding is Cool!"
result = no_c(input_string)
print(result) # This will print: " Hello, odin is ool"
