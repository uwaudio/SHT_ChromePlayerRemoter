# SHT (SmartHomeTools) Chrome Player Remoter

Add words for Test Modifier Branch

## Source

  After some initial test of Applescript control google chrome player in last repo [QtControlAppleScript_test](https://github.com/uwaudio/QtControlAppleScript_test). I decide open a new repo to continue the more features.

## Motivation

  Started this project because while using [Home Assistant](https://github.com/home-assistant) to control my home, I found that I was missing a device for simple control of my playback computer. Since I use a Mac Mini in my home that is directly connected to the NEC projector, I can currently only switch the NEC projector on and off with Home Assistant, but not the player (my Mac Mini).

  So I decided to do some tools of controlling my player in a simple way.

---
## Technical Details

  A small tool made of [Qt](https://github.com/qt), using Apple Script to simulate keyboard control. A part of my SmartHomeTools.

  In AppleScript part, simply using the System Event's "KeyStroke" to simulate a keyboard activity.
  And then, tell process Google Chrome. So that if you are already watching a Video on web site. It can control the video play/pause. 
  Just like you are pressing the "Space" key to play or pause this video.

  (for all dear contributors, I have not test on NetFlix. If you have NetFlix account and prefer to test this tool, please tell me any result or issues, thanks a lot ! )

---
## User Guide
This software is used as a part of my own SmartHome Tool with [Home Assistant](https://github.com/home-assistant).

### A - Deploy Server Side

1. Download .dmg package from last release version.

2. Mount .dmg image on macOS(which you prefer to control) and drag .app file to your local application folder (or anywhere you want)

3. Open this .app file

4. Open your Chrome and choose your favorite Youtube video to test.

5. Click "Play/Pause" to test if everything runs well. 

6. Normally you will be noticed by macOS, allow this application to control (or it will not work)

7. If the video has been successful play/pause controlled. You can test other functions if those buttons works as description.

8. Change the mode from "Local mode" to "Remote mode", and select "Server Side" instead of "Client Side"

9. Generally, you will be noticed to allow income trafic of firewall of macOS.

10. Then Open terminal.app, use code below to test if the Server side has been successfully deployed or not.
```
curl http://localhost:16250/run/0/
```
11. If the video in Chrome has been successful play/pause controlled. The deploy server side part finished.

### B - Deploy Control Side (in HomeAssistant)

1. It is assumed that HomeAssistant already exists on your home LAN and is working fine.

2. Add code below to your configuration.yaml file (or any of your custom .yaml file)
```
# commandline
shell_command:
    smt_playorpause: curl http://Your-ServerSide-IPAddress:16250/run/0/
    smt_rwd: curl http://Your-ServerSide-IPAddress:16250/run/1/
    smt_fwd: curl http://Your-ServerSide-IPAddress:16250/run/2/
    smt_volup: curl http://Your-ServerSide-IPAddress:16250/run/3/
    smt_voldown: curl http://Your-ServerSide-IPAddress:16250/run/4/
    smt_nextvideo: curl http://Your-ServerSide-IPAddress:16250/run/5/
    smt_fullscreen: curl http://Your-ServerSide-IPAddress:16250/run/6/
    smt_theater: curl http://Your-ServerSide-IPAddress:16250/run/7/
    smt_volmute: curl http://Your-ServerSide-IPAddress:16250/run/8/
    smt_closetab: curl http://Your-ServerSide-IPAddress:16250/run/9/
    smt_reopentab: curl http:/Your-ServerSide-IPAddress:16250/run/10/
```

3. Save & Reload configuration of your Home Assistant

4. Than add each command in "Script" part of your Home Assistant. Or if you prefer to use YAML to add "Script", try code below
```
#an example for Play/Pause script
    alias: Play/Pause
    sequence:
      - service: shell_command.smt_playorpause
        data: {}
    mode: single
    icon: mdi:play-pause
```

5. Add new Script into your lovelace. So that you can touch and control !
![My-Lovelace as example](https://user-images.githubusercontent.com/49844552/218283386-388c45a0-b73d-44d5-9b6d-933d19e9b3a5.png)
```
#yaml for lovelace above
type: vertical-stack
cards:
  - type: horizontal-stack
    cards:
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_rewind
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_playorpause
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_fwd
  - type: horizontal-stack
    cards:
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_volumeminus
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_volumeplus
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_volumemute
  - type: horizontal-stack
    cards:
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_theatermode
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_playerfullscreen
      - show_name: false
        show_icon: true
        type: button
        tap_action:
          action: toggle
        entity: script.smt_nextvideo
  - type: horizontal-stack
    cards:
      - show_name: true
        show_icon: false
        type: button
        tap_action:
          action: toggle
        entity: script.smt_closetab
      - show_name: true
        show_icon: false
        type: button
        tap_action:
          action: toggle
        entity: script.reopentab

```

---
## Release Note
[download v0.3.2-alpha](https://github.com/uwaudio/QtControlAppleScript_test/releases/tag/v0.3.2-alpha)

![image](https://user-images.githubusercontent.com/49844552/218206290-5856b7d4-3034-4301-bb52-67c038e36f9c.png)

### V0.3.2

- Add API server function. So it support directly use the http request to control.

### V0.3.1 (initial version)

- Add more features


---
## In progress

Next step will create the remote version.    
Maybe this tool will provide a webAPI, and sinply http request will control the play / pause instead using button.

---
## System Requirement

- Apple macOS 10.15.7 Catalina or macOS 13.1 Ventura (only test on these 2 version) (intel silicon only)  
- Google Chrome version 108 or newer version

## Development Environment

- Apple macOS 10.15.7 Catalina (intel silicon)  
- Qt Community Version (Clang 6.4.2)
-- Remark ! Since Qt 6.4, Qt += httpserver has been supported ! 

---
## License

License LGPL v3 (Development with Qt Community version)
