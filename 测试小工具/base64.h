#pragma once
// ͷ�ļ� base64.h  

#ifndef BASE64_H  
#define BASE64_H  

const char base[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";

/* Base64 ���� */
char* base64_encode(const char* data, int data_len);

/* Base64 ���� */
char *base64_decode(const char* data, int data_len);

#endif  