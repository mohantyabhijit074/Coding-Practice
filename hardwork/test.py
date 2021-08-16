def constuctString(word: str, k: int) -> str:
    countArr = [0]*26
    a, ans = ord('a'), []
    for c in word:
        countArr[ord(c)-a] += 1
    i = 25 # start at z
    # Now we have count of all chars we start from z to a.
    while i >= 0:
        # More chars than the window permits
        if countArr[i] > k:
            # Lets append k letters if they exist.
            letter = chr(i+a)
            ans.append(letter*k)
            countArr[i] -= k
            # look for the next element
            j = i-1
            while(countArr[j] <= 0 and j>0):
                j -= 1
            # add one of the next element
            if countArr[j] > 0 and j >= 0:
                letter = chr(j+a)
                ans.append(letter)
                countArr[j] -= 1
            else:
                break # we cant build string more. 
        elif countArr[i] > 0:
            letter = chr(i+a)
            ans.append(letter*countArr[i])
            countArr[i] = 0 
        else:  # this letter we can't do anything, lets skip
            i -= 1
        # print(''.join(ans))

    return ''.join(ans)

res = constuctString("zzzzza", 2)
print(res)
print(res == "zzazz")