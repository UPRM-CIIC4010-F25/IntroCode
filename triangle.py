import math

A = int(input("Give me side A: "))
B = int(input("Give me side B: "))
C = int(input("Give me side C: "))

semiPerimeter = (A + B + C)/2.0
area = math.sqrt(semiPerimeter * (semiPerimeter - A) * 
                 (semiPerimeter - B) * (semiPerimeter - C))
print(f"The area is {area}")