# QtControlAppleScript_test

## Motivation

  Started this project because while using [Home Assistant](https://github.com/home-assistant) to control my home, I found that I was missing a device for simple control of my playback computer. Since I use a Mac Mini in my home that is directly connected to the NEC projector, I can currently only switch the NEC projector on and off with Home Assistant, but not the player (my Mac Mini).

  So I decided to do some initial exploration of controlling my player in a simple way.

---
## Technical Details

  A simple test of [Qt](https://github.com/qt), using Apple Script to simulate keyboard control. A part of my SmartHomeTools.

  In AppleScript part, simply using the System Event's "KeyStroke" to simulate a keyboard activity.
  And then, tell process Google Chrome. So that if you are already watching a Video on web site. It can control the video play/pause. 
  Just like you are pressing the "Space" key to play or pause this video.

  (for all dear contributors, I have not test on NetFlix. If you have NetFlix account and prefer to test this tool, please tell me any result or issues, thanks a lot ! )

![image](https://user-images.githubusercontent.com/49844552/214701499-1d1df00f-a369-4dd3-ab90-30500459301a.png)

---
## Release Note

### V0.2.2 

- Add special controls for Bilibili Live platform. 

[download v0.2.2-alpha](https://github.com/uwaudio/QtControlAppleScript_test/releases/tag/v0.2.2-alpha)

### V0.2.1 

- Add more button, to provide more control functions.    
- Add special controls for YouTube platform. 

[download v0.2.1-alpha](https://github.com/uwaudio/QtControlAppleScript_test/releases/tag/v0.2.1-alpha)

### V0.0.1 (initial version)

- Only one button, used to verify that Qt can control applications in macOS through AppleScript.


---
## In feature

Next step will create the remote version.    
Maybe this tool will provide a webAPI, and sinply http request will control the play / pause instead using button.

---
## System Requirement

- Apple macOS 10.15.7 Catalina (only test on this version)  
- Google Chrome version 108 or newer version

## Development Environment

- Apple macOS 10.15.7 Catalina  
- Qt Community Version (Clang 6.2.4)

---
## License

License LGPL v3 (Development with Qt Community version)
