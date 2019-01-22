def find_all(a_str, sub):
    start = 0
    while True:
        start = a_str.find(sub, start)
        if start == -1: return
        yield start
        start += len(sub)
c=0
s1=input()
s2=input()
if(len(s1)>len(s2)):
    l=list(i for i in range(len(s1)) if s1.startswith(s2, i))
else:
    l=list(i for i in range(len(s2)) if s2.startswith(s1, i))
for i in l:
    c=c+1
print(c)
