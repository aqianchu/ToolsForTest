@echo off
echo 正在抓取错误日志...(日志保存在当前目录crashlog.txt)
adb logcat -v thread *:E | find "com.qihoo.browser" > %cd%/crashlog.txt