fizzbazz = [
    (3,"fizz"),(5,'buzz'),(7,"bazz"),(11,"foo")
]

for i in range(1,101):
    words = ""
    for num , word in fizzbazz:
        if i % num == 0 :
            words += word
    if(len(words) > 0 ):
        print(words)
    else:
        print(i)