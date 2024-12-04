# Strings are immutables
a="!!Amit! !!!! Amit!!"
print(a)
print(a.upper())
print(a.lower())
print(a.rstrip("!"))
print(a.split(" ")) 
print(a.replace("Amit","Ankit"))

blogHeading="introduction to js"
print(blogHeading.capitalize())

str1="Welcome to the console!!!"
print(len(str1))
print(len(str1.center(50)))
print(a.count("Amit"))
print(str1.endswith("!!!"))

str1="Welcome to the console!!!"
print(str1.endswith("to",4,10))

str1="He's name is Dan. HE is an honest man."
print(str1.find("ishh"))
str1="He's name is Dan. HE is an honest man."   
print(str1.swapcase())