::ĳЩ�豸�����޷�ֱ��¼��,ԭ���Ƿֱ���̫��,��������������⣬������ָ���ϵ͵ķֱ���
::��֧��¼�ƹ�������Ļ��ת,���¼�ƹ�������ת���п��ܻ��汻�ж�
::¼����Ƶ��ʱ���������ᱻ¼����
@echo off
echo ����¼��ʱ�䣨Ĭ��¼��180s����
set /p xxx=>nul
if defined xxx (adb shell screenrecord --bugreport --time-limit %xxx% /data/local/tmp/record.mp4) else (adb shell screenrecord --bugreport /data/local/tmp/record.mp4)
adb pull /data/local/tmp/record.mp4 %cd%