::某些设备可能无法直接录制,原因是分辨率太高,如果遇到此类问题，请试着指定较低的分辨率
::不支持录制过程中屏幕旋转,如果录制过程中旋转，有可能画面被切断
::录制视频的时候声音不会被录下来
@echo off
echo 输入录制时间（默认录制180s）：
set /p xxx=>nul
if defined xxx (adb shell screenrecord --bugreport --time-limit %xxx% /data/local/tmp/record.mp4) else (adb shell screenrecord --bugreport /data/local/tmp/record.mp4)
adb pull /data/local/tmp/record.mp4 %cd%