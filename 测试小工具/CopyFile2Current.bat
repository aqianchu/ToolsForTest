@echo off
echo "�������ļ���ַ"
@set/p xxx= >nul
@adb pull "/sdcard/%xxx%" "%cd%"