tell application "System Events"
 
delay 1 (*delay time in seconds before program starts*)
 
 
set timesToRepeat to 100 (*times for the program to repeat*)
 
set delayTime to 0.1 (*delay time in seconds between mouse clicks*)
 
 
repeat timesToRepeat times
  
key code 87
  
delay delayTime
 
end repeat
 

end tell
