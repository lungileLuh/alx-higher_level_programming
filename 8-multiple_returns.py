#!/usr/bin/python3

def multiple_returns(sentence):
	if not sentence:
		first_char = None
	else:
		first_char = sentence[0]

	rereturn len(sentence), first_char

sentence = "Hello, world!"
result = multiple_returns(sentence)
print(result) # Output: (13, 'H')
