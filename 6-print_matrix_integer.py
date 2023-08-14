#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
	if not matrix:
		print("Matrix is empty")
		return

	# Get the number of rows and columns
	rows = len(matrix)
	cols = len(matrix[0])

	# Calculate the wudth for formatting
	max_width = max(max(map(len, map(str, row))) for row in matrix)

	# print the matrix
	for row in matrix:
		for num in row:
			print("{:>{width}}".format(num, width=max_width), end=" ")
		print()

matrix = [
	[1, 22, 333],
	[4444, 55555, 666666]
	[7777777, 88888888, 999999999],
]

print_matrix_integer(matrix)

