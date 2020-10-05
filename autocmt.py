#Firstly u have to install pyautogui
# python3 -m pip install pyautogui
#This is a auto comment script with python.


import pyautogui
import time

comments = ["Hi","How ar you?","Hello Hacktober!","Let's Hack"]


time.sleep(5)

for i in range(200):
    pyautogui.typewrite(comments[i%4])
    pyautogui.typewrite("\n")
    time.sleep(2)