tell application "System Events"
	set texttosay to "Sample Text"
	display dialog "Tekst to say:" default answer "p"
	set texttosay to the text returned of the result
	set strLength to the length of texttosay
	delay 2
	repeat 10 times
		delay 1
		keystroke texttosay
		keystroke return
		key code 126
		key code 51
		keystroke return
	end repeat
	repeat 10 times
		key code 51
		display dialog the "Do you want to quit?" buttons {"Continue", "Quit"} default button 1
		if the button returned of the result is "Quit" then
			exit repeat
		end if
	end repeat
end tell
