
#include "P2P_API_Define.h"
#include "P2P_API_ERR.h"

#ifndef _P2P_API_H_
#define _P2P_API_H_

#ifdef WIN32_STATIC
#define P2P_API 
#else

#if WIN32_DLL
#ifndef P2P_API_EXPORT
#define P2P_API __declspec(dllimport)
#else
#define P2P_API __declspec(dllexport)
#endif
#endif

#endif

#if ANDROID_LIB || IOS_LIB
#define P2P_API
#endif

#ifdef __cplusplus
extern "C"
{
#endif
	//�ӿ�˵��
    P2P_API long P2PAPI_InitialWithServer(char *svr);//��ʼ��P2PAPI�ڲ���Դ  svr:{IN}P2P�������ĵ�ַ�������ַ����ϵ������Ҫ��  ����ӿ���P2PAPI_Initial()ֻ�ܵ���һ��
    P2P_API long P2PAPI_Initial();//��ʼ��P2PAPI�ڲ���Դ	
    P2P_API long P2PAPI_DeInitial();//�ͷ�P2PAPI��Դ
    P2P_API long P2PAPI_GetAPIVersion();//��ȡP2PAPI�汾
    P2P_API long P2PAPI_CreateInstance(long *nHandle);//����P2PAPIʵ��  nHandle��{OUT}P2Pʵ�����
    P2P_API long P2PAPI_DestroyInstance(long nHandle);//����P2Pʵ��   nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_DestroyAllInstance();//��������P2Pʵ��
    P2P_API long P2PAPI_Connect(long nHandle, char *uid, char *user, char *pwd, CHAR bEnableLanSearch);//��ʼ����P2P  nHandle��{IN} P2Pʵ����� uid��{IN}P2P ID  user��{IN}��¼�û���  pwd��{IN}��¼����
    P2P_API long P2PAPI_Close(long nHandle);//�ر�P2P����
    P2P_API long P2PAPI_CloseAll();//�ر�����P2P����
//P2PAPI_StartVideo ���һ������nStreamID�Ķ��壺
//0, 1:720P
//2, 3:360P
//4, 5:180P
    P2P_API long P2PAPI_StartVideo(long nHandle, int nStreamID);//������Ƶ nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_StopVideo(long nHandle);//ֹͣ��Ƶ   nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_StartAudio(long nHandle);//������Ƶ  nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_StopAudio(long nHandle);//ֹͣ��Ƶ   nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_StartTalk(long nHandle);//��ʼ����   nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_StopTalk(long nHandle);//ֹͣ����    nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_TalkData(long nHandle, char *pData, int len);//���ͷ�������  nHandle��{IN}P2Pʵ����� pData��{IN}ADPCM����ָ��   len��{IN} ADPCM���ݳ��ȣ�ע�⣬��ǰ����Ϊ256
    P2P_API long P2PAPI_SendMessage(long nHandle, int type, char *msg, int len);//������Ϣ   nHandle��{IN}P2Pʵ�����
    P2P_API long P2PAPI_SetAVDataCallBack(long nHandle, AVDataCallback AVCallback, void *pParam);//��������Ƶ���ݻص�
    P2P_API long P2PAPI_SetMessageCallBack(long nHandle, MessageCallback MsgCallback, void *pParam);//������Ϣ�ص�
    P2P_API long P2PAPI_SetPlaybackAVDataCallBack(long nHandle, AVDataCallback AVCallback, void *pParam);//����Զ�̻ط�ʱ������Ƶ���ݻص�

#ifdef __cplusplus
}
#endif


#endif