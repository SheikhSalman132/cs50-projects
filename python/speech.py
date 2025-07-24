import pyttsx3
engine = pyttsx3.init()
name = input("NAME: ")
engine.say(f"hello,{name}")
engine.runAndWait()