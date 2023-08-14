#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
	# Ensure tuple have at least 2 elements
	while len(tuple_a) < 2:
		tuple_a += (0,)
	while len(tuple_b) < 2:
		tuple_b += (0,)

	result = (tuple_a[0] + tuple_b[0], tuple_a[1] + tuple_b[1])
	return result

tuple1 = (1, 2)
tuple2 = (3, 4)
result = add_tuple(tuple1, tuple2)
print(result) # Output: (4, 6)
