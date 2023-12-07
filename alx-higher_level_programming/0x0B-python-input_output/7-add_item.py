#!/usr/bin/python3
save_to_json_file = __import__('5-save_to_json_file').save_to_json_file
load_from_json_file = __import__('6-load_from_json_file').load_from_json_file

from sys import argv
filename = "add_item.json"

try:
    load_from_json_file(filename)
except FileNotFoundError:
    my_args = []

for arg in argv[1:]:
    my_args.append(arg)

save_to_json_file(my_args, filename)
