import re
file1 = open('E:\Programming Stuff\C++ Code\Assignment\WhatsApp Chat with DIC MDaRT ML Training .txt','r')
Lines = file1.readlines()
x = []

for line in Lines:
  print(line)
  x.append(re.findall(': (.+)',line))


count6 = count7 = count8 = 0

for i in x:
  for j in i:
    if '6' in j:
      count6 += 1
    if '7' in j:
      count7 += 1
    if '8' in j:
      count8 += 1

print("Kanishk Tyagi \nBio-Tech Branch")
print(count6)
print(count7)
print(count8)