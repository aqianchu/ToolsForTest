@echo off
echo "�������ͼ����ļ���(Ĭ��Ϊscreen.png)��"
set/p xxx=>nul
@adb shell screencap -p /sdcard/screencapture.png
if defined xxx (adb pull /sdcard/screencapture.png %cd%/%xxx%) else (adb pull /sdcard/screencapture.png %cd%/screen.png)