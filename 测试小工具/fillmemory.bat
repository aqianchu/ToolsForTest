@echo off
adb shell dd if=/dev/zero of=/mnt/sdcard/hello.txt bs=1073741824 count=1
pause