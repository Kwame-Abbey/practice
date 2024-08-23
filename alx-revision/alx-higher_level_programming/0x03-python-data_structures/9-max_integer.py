def max_integer(my_list=[]):
    """finds the biggest integer of a list"""
    if len(my_list) == 0:
        return None
    max_n = my_list[0]
    for i in my_list[1:]:
        if i > max_n:
            max_n = i
    return max_n