import re 
def solve():
    s = input()
    if re.match("{{*}*,*}",s):
        return "Set"
    else:
        return "Not Set"

if __name__=="__main__":
    print(solve())
