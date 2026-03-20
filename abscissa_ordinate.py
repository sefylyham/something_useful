import math, turtle

angle = []
hypotenuse = []

counter = 0
while counter < 5:
    # The function is decribed as x^2
    ordinate = int(input())
    abscissa = math.pow(ordinate, 2)
    
    hypotenuse_output = int(math.sqrt(math.pow(ordinate, 2) + math.pow(abscissa, 2)))
    angle_output = int(math.degrees(math.atan(abscissa/ordinate)))

    angle.append(angle_output)
    hypotenuse.append(hypotenuse_output)

    counter += 1

for plot in range(counter):
    turtle.left(angle[plot])
    turtle.forward(hypotenuse[plot])
    

