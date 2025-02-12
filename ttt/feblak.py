def feb(n):
    if n==1:
        return 1
    if n==2:
        return 2
    else:
        return feb(n-1)+feb(n-2)
li=[1,1,2,3,5,8,13,21,33]
#print(feb(8))

def feb2(n):
    li1=[0,1,1]
    for i in range(n-2):
        if i<=3:
            return li1[i]

        else:
            new_num=li1[-1]+li1[-2]
            li1.append(new_num)
            return li1[-1]


print(feb2(3))