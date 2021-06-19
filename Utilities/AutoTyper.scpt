tell application "System Events"
	set texttosay to "Sample Text"
	display dialog "Tekst to say:" default answer "white:wave:"
	set texttosay to the text returned of the result
	repeat
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		keystroke texttosay
		delay 4
		keystroke return
		display dialog the "Do you want to quit?" buttons {"Continue", "Quit"} default button 1
		if the button returned of the result is "Quit" then
			exit repeat
		end if
	end repeat
end tell
