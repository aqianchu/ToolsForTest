@echo off
echo ����ץȡ������־...(��־�����ڵ�ǰĿ¼crashlog.txt)
adb logcat -v thread *:E | find "com.qihoo.browser" > %cd%/crashlog.txt