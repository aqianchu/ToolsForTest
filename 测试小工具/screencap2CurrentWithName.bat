@echo off
echo "请输入截图后的文件名(默认为screen.png)："
set/p xxx=>nul
@adb shell screencap -p /sdcard/screencapture.png
if defined xxx (adb pull /sdcard/screencapture.png %cd%/%xxx%) else (adb pull /sdcard/screencapture.png %cd%/screen.png)