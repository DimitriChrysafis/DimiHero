tell application "System Events"
	set var1 to "Sample Text"
	display dialog "Tekst to say:" default answer "T"
	set var1 to the text returned of the result
	set var2 to "Sample Text"
	display dialog "Tekst to say:" default answer "T"
	set var2 to the text returned of the result
	delay 2
	repeat 100 times
		delay 1
		keystroke var1
		keystroke return
		delay 1
		keystroke var2
		keystroke return
		delay 1
	end repeat
	repeat 10 times
		display dialog the "Quit?" buttons {"Continue", "Yes"} default button 1
		if the button returned of the result is "Quit" then
			exit repeat
		end if
	end repeat
end tell
