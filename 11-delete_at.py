#!/usr/bin/python3

def delete_at(my_list=[], idx=0):
	if idx < 0 or idx >= len(my_list):
		return my_list

	new_list = []

	for i in range(idx):
		new_list.append(my_list[i])

	for i in range(idx + 1, len(my_list)):
		new_list.append(my_list[i])

	return new_list
