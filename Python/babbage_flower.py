#!
import turtle
window = turtle.Screen()
babbage = turtle.Turtle()
babbage.speed(10)
    
def daisy():
    #draw window and create turtle
    
    babbage.color("green", "black")
    babbage.left(90)
    babbage.forward(100)
    babbage.right(90)
    #draw centre
    babbage.color('black', 'black')
    babbage.begin_fill()
    babbage.circle(10)
    babbage.end_fill()
    #create the petals
    for i in range (1, 24):
        if babbage.color() == ('red', 'black'):
            babbage.color('yellow', 'black')
        elif babbage.color() == ('yellow', 'black'):
            babbage.color('blue', 'black')
        else:
            babbage.color('red', 'black')

        babbage.left(15)
        babbage.forward(50)
        babbage.left(157)
        babbage.forward(50)
                

    babbage.hideturtle()
    window.exitonclick()

daisy()

