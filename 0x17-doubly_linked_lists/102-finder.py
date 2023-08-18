#!/usr/bin/python3
def is_palindrome(text):
    '''
    will check a given string is a palindrome

    Parameters:
    text (str): The string to check

    Returns:
    will return True if the str is a palindrome, else False
    '''
    text_len = len(text)
    mid_idx = text_len // 2
    offset = 0 if text_len % 2 == 0 else 1
    left = text[0:mid_idx]
    right = text[mid_idx + offset:]
    eql = True
    for i in range(mid_idx):
        if left[i] != right[0 - i - 1]:
            eql = False

            break
        return eql


def find_max_palindrome(start, end):
    '''
    get the max palindrome btw a range of number.


    Parameters:
    start (int): start of range
    end (int): end of range

    Returns:
    return a 2-item tuple of the max palindrome and another tuple
     '''

    max_palindrome = 0
    nums = (0, 0)

    for i in range(start, end):
        for j in range(start, end):
            product = i * j
            if not is_palindrome(str(product)):
                continue
            if product > max_palindrome:
                max_palindrome = product
                nums = (i, j)
    res = [max_palindrome, nums]
    return tuple(res)


max_palindrome, nums = find_max_palindrome(100, 9990)
print('{:d} = {:d} × {:d}'.format(max_palindrome, nums[0], nums[1]))
