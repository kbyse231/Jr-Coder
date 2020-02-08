from tkinter import * #tk interface; asterisk imports everything
import random
import time

WIDTH = 800
HEIGHT = 600

tk = Tk() #initializes the TK system
canvas = Canvas(tk, width = WIDTH, height= HEIGHT) #this where the animation appears
tk.title("Drawing")
canvas.pack()

class Ball:
    def __init__(self, color, size):
       self.shape = canvas.create_oval(10,10, size, size, fill = color)
       self.xspeed = random.randrange(1,8)
       self.yspeed = random.randrange(1,8)

    def move(self):
        canvas.move(self.shape, self.xspeed, self.yspeed)
        pos = canvas.coords(self.shape)
        if pos[3] >= HEIGHT or pos[1] <= 0:
            self.yspeed = -self.yspeed
        if pos[2] >= WIDTH or pos[0] <= 0:
            self.xspeed = -self.xspeed

newBall = Ball("black", 50)
newBall2 = Ball("purple", 100)

while True:
    newBall.move()
    newBall2.move()
    tk.update()
    time.sleep(0.01)
    
canvas.mainloop() #tells the computer to wait and show the screen