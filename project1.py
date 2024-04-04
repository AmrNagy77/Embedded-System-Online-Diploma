realtext=input("input your sentence:")
text=realtext.upper()
shift=int(input("input the number of shift: "))
chiper_text=""

if 0<=shift<=10:
 for char in text:   
   if char.isalpha():  
        chiper_char=chr((ord(char) - 65 + shift) %26 + 65)
        chiper_text += chiper_char
        
   else:
       chiper_text +=  char
else:
    print("invalid number,please enter a 0<=number<=10")
print(chiper_text)   