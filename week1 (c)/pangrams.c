def pangrams(s):
    # convert string to lowercase
    s = s.lower()
    # create a set to track letters
    letters = set()

    for ch in s:
        ascii_val = ord(ch)   # get ASCII value
        if 97 <= ascii_val <= 122:   # 'a' to 'z'
            letters.add(ch)
    
    # check if we have all 26 letters
    if len(letters) == 26:
        return "pangram"
    else:
        return "not pangram"
