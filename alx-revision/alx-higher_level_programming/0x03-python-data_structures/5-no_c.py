def no_c(my_string):
    """removes all characters c and C from a string"""
    new_string = ''
    for char in my_string:
        if ord(char) != 99 and ord(char) != 67:
            new_string += char
    return new_string
            