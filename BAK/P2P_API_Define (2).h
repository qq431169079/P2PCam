
#ifndef _P2P_API_DEFINE_H_
#define _P2P_API_DEFINE_H_

typedef void (*AVDataCallback)(long nHandle, int bVideo, char *pData, int len, void *pParam);//�ص���������   nHandle��{IN}P2Pʵ�����  bVideo��0:��Ƶ 1:��Ƶ  pData������ָ��  Len�����ݳ��� pParam���û�����   pParam����IN���û��������ڻص������н���Ϊ����������ظ��û�����ֵ
typedef void (*MessageCallback)(long nHandle, int type, char *msg, int len, void *pParam);//��Ϣ�ص���������  nHandle��P2Pʵ�����   type����Ϣ����   msg����Ϣ����   len����Ϣ����   pParam���û�����   pParam����IN���û��������ڻص������н���Ϊ����������ظ��û�����ֵ

#define	EMPTY_VALUE_KEY				0xeeeeeeee

//Message type ��Ϣ���Ͷ���
#define MSG_TYPE_P2P_STATUS         0x0      //P2P����״̬
#define MSG_TYPE_P2P_MODE           0x1      //P2P����ģʽ
#define MSG_TYPE_GET_CAMERA_PARAMS  0x2      //��ȡ��Ƶ����
#define MSG_TYPE_DECODER_CONTROL    0x3      //��̨����
#define MSG_TYPE_GET_PARAMS         0x4      //��ȡ���������������������������������û���Ϣ��FTP�������ʼ�������DDNS������ʱ�������
#define MSG_TYPE_SNAPSHOT           0x5      //ץȡһ��JPEGͼƬ
#define MSG_TYPE_CAMERA_CONTROL     0x6      //��Ƶ��������
#define MSG_TYPE_SET_NETWORK        0x7      //�����������
#define MSG_TYPE_REBOOT_DEVICE      0x8      //���������
#define MSG_TYPE_RESTORE_FACTORY    0x9      //�ָ���������
#define MSG_TYPE_SET_USER           0xa      //�����û��˻�
#define MSG_TYPE_SET_WIFI           0xb      //����WIFI����
#define MSG_TYPE_SET_DATETIME       0xc      //����ʱ�����
#define MSG_TYPE_GET_STATUS         0xd
#define MSG_TYPE_GET_PTZ_PARAMS     0xe
#define MSG_TYPE_SET_DDNS           0xf
#define MSG_TYPE_SET_MAIL           0x10
#define MSG_TYPE_SET_FTP            0x11
#define MSG_TYPE_SET_ALARM          0x12
#define MSG_TYPE_SET_PTZ            0x13
#define MSG_TYPE_WIFI_SCAN          0x14
#define MSG_TYPE_GET_ALARM_LOG      0x15
#define MSG_TYPE_GET_RECORD         0x16
#define MSG_TYPE_GET_RECORD_FILE    0x17
#define MSG_TYPE_SET_PPPOE          0x18
#define MSG_TYPE_SET_UPNP           0x19
#define MSG_TYPE_DEL_RECORD_FILE    0x1a
#define MSG_TYPE_SET_MEDIA          0x1b
#define MSG_TYPE_SET_RECORD_SCH     0x1c
#define MSG_TYPE_CLEAR_ALARM_LOG    0x1d

#define MSG_TYPE_WIFI_PARAMS        0x1f     //�������
#define MSG_TYPE_MAIL_PARAMS        0x20
#define MSG_TYPE_FTP_PARAMS         0x21
#define MSG_TYPE_NETWORK_PARAMS     0x22
#define MSG_TYPE_USER_INFO          0x23
#define MSG_TYPE_DDNS_PARAMS        0x24
#define MSG_TYPE_DATETIME_PARAMS    0x25
#define MSG_TYPE_ALARM_PARAMS       0x26

#define MSG_TYPE_SET_DEVNAME        0x27
#define MSG_TYPE_ALARM_NOTIFY       0x28
#define MSG_TYPE_PLAY_BACK_START    0x29
#define MSG_TYPE_PLAY_BACK_STOP     0x30
#define MSG_TYPE_FORMAT_SDCARD      0x31
#define MSG_TYPE_FIRMWARE_UPGRADE   0x32

#define MSG_TYPE_SET_SENSOR_STATUS  0x33
#define MSG_TYPE_GET_SENSOR_STATUS  0x34
#define MSG_TYPE_DEL_SENSOR			0x35
#define MSG_TYPE_SET_SENSOR_NAME    0x36
#define MSG_TYPE_GET_SENSOR_LIST    0x37
#define MSG_TYPE_SET_SENSOR_PRESET  0x38
#define MSG_TYPE_GET_SENSOR_PRESET  0x39
#define MSG_TYPE_GET_CMD_STRING		0x40
#define MSG_TYPE_GET_FACTORY		0x41
#define MSG_TYPE_SET_TALKADPCMFORMAT 0x42

//alarm notify
#define ALARM_MOTION    0x1
#define ALARM_IO    0x2
   


//p2p status  P2P����״̬
#define P2P_STATUS_CONNECT_TIME_OUT         0x0       //���ӳ�ʱ
#define P2P_STATUS_INVALID_ID               0x1       //��Ч��ID
#define P2P_STATUS_CONNECT_SUCCESS          0x2       //���ӳɹ�
#define P2P_STATUS_DISCONNECTED             0x3       //���ӶϿ�
#define P2P_STATUS_CONNECT_FAIlED           0x4       //����ʧ��
#define P2P_STATUS_CONNECTING               0x5       //��������
#define P2P_STATUS_DEVICE_NOT_ON_LINE       0x6       //�豸������
#define P2P_STATUS_INVALID_USER_PWD         0x7       //�û������������

//p2p mode   P2P����ģʽ
#define P2P_MODE_P2P_RELAY                  0x0       //ͨ��ת������������
#define P2P_MODE_P2P_CONNECTED              0x1       //P2P����

//decoder control command  ��̨���� 
#define CMD_PTZ_UP                      0             //��̨���� 
#define CMD_PTZ_UP_STOP                 1             //��̨����ֹͣ
#define CMD_PTZ_DOWN                    2             //��̨����
#define CMD_PTZ_DOWN_STOP               3             //��ֹͣ
#define CMD_PTZ_LEFT                    4             //��
#define CMD_PTZ_LEFT_STOP               5             //��ֹͣ
#define CMD_PTZ_RIGHT                   6             //��
#define CMD_PTZ_RIGHT_STOP             	7             //��ֹͣ
#define CMD_PTZ_OPIZOOMIN             	18
#define CMD_PTZ_OPIZOOMOUT             	17
#define CMD_PTZ_OPIFOCUSIN             	20
#define CMD_PTZ_OPIFOCUSOUT             19


#define CMD_PTZ_CENTER                  25            //��̨����
#define CMD_PTZ_UP_DOWN                 26            //��̨����Ѳ��
#define CMD_PTZ_UP_DOWN_STOP            27            //����Ѳ��ֹͣ
#define CMD_PTZ_LEFT_RIGHT              28            //����Ѳ��
#define CMD_PTZ_LEFT_RIGHT_STOP         29            //����Ѳ��ֹͣ


#define CMD_PTZ_PREFAB_BIT_SET0         30            //����Ԥ��λ1
#define CMD_PTZ_PREFAB_BIT_SET1         32            //2
#define CMD_PTZ_PREFAB_BIT_SET2         34            //3
#define CMD_PTZ_PREFAB_BIT_SET3         36            //4
#define CMD_PTZ_PREFAB_BIT_SET4         38            //5
#define CMD_PTZ_PREFAB_BIT_SET5         40            //6
#define CMD_PTZ_PREFAB_BIT_SET6         42
#define CMD_PTZ_PREFAB_BIT_SET7         44
#define CMD_PTZ_PREFAB_BIT_SET8         46
#define CMD_PTZ_PREFAB_BIT_SET9         48
#define CMD_PTZ_PREFAB_BIT_SETA         50
#define CMD_PTZ_PREFAB_BIT_SETB         52
#define CMD_PTZ_PREFAB_BIT_SETC         54
#define CMD_PTZ_PREFAB_BIT_SETD         56
#define CMD_PTZ_PREFAB_BIT_SETE         58
#define CMD_PTZ_PREFAB_BIT_SETF         60            //16

#define CMD_PTZ_PREFAB_BIT_RUN0         31            //����Ԥ��λ1
#define CMD_PTZ_PREFAB_BIT_RUN1         33
#define CMD_PTZ_PREFAB_BIT_RUN2         35
#define CMD_PTZ_PREFAB_BIT_RUN3         37
#define CMD_PTZ_PREFAB_BIT_RUN4         39
#define CMD_PTZ_PREFAB_BIT_RUN5         41
#define CMD_PTZ_PREFAB_BIT_RUN6         43
#define CMD_PTZ_PREFAB_BIT_RUN7         45
#define CMD_PTZ_PREFAB_BIT_RUN8         47
#define CMD_PTZ_PREFAB_BIT_RUN9         49
#define CMD_PTZ_PREFAB_BIT_RUNA         51
#define CMD_PTZ_PREFAB_BIT_RUNB         53
#define CMD_PTZ_PREFAB_BIT_RUNC         55
#define CMD_PTZ_PREFAB_BIT_RUND         57
#define CMD_PTZ_PREFAB_BIT_RUNE         59
#define CMD_PTZ_PREFAB_BIT_RUNF         61             //����Ԥ��λ16

#define CMD_PTZ_SET_MODE				101
#define CMD_PTZ_SET_RESOLUTION			102
#define CMD_PTZ_SET_BITRATE				103
#define CMD_PTZ_SET_FRAMERATE			104



#ifndef _DEF_STRU_AV_HEAD
#define _DEF_STRU_AV_HEAD

typedef struct tag_AV_HEAD   //����Ƶͷ�Ķ���
{
    //unsigned int		startcode;	//  0xa815aa55
    //unsigned char		type;		//  0->264 idr frame 1->264 p frame
    //unsigned char  	streamid;	
    //unsigned short  	militime;	//  diff time
    //unsigned int 		sectime;	//  diff time
    //unsigned int    	frameno;	//  frameno
    //unsigned int 		len;		//  data len
    //unsigned char		version;	// version
    //unsigned char		sessid;		//ssid
    //unsigned char		other[2];
    //unsigned char		other1[8];
	//////////////////////////////
	unsigned int		startcode; // 0xa815aa55
	char				type;
	char				streamid;
	unsigned short		militime;
	unsigned int		sectime;
	unsigned int		frameno;
	unsigned int		len;
	unsigned char		version;
	unsigned char		resolution;
	unsigned char		sessid;
	unsigned char		currsit;
	unsigned char		endflag;
	char				byzone;
	char				channel; //for user in sit
	char				type1;
	short				sample;
	short				index;
}AV_HEAD,*PAV_HEAD;

#define MAX_FRAME_BUF_SIZE (512*1024)
typedef struct _stFrameData
{
	AV_HEAD head; 
	char frameBuf[MAX_FRAME_BUF_SIZE];
}Frame_Data;

#endif

typedef struct tag_STRU_CAMERA_PARAMS   //��Ƶ��Ϣ����
{
    int resolution;//�ֱ���
    int brightness;
    int contrast;
    int hue;
    int saturation;
    int flip;
	int mode;//0->50hz 1->60hz  2->outdoor
	int frameRate;//֡��
}STRU_CAMERA_PARAMS,*PSTRU_CAMERA_PARAMS;


typedef struct tag_STRU_CAMERA_CONTROL  //��Ƶ��������
{
    int param;
    int value;
}STRU_CAMERA_CONTROL,*PSTRU_CAMERA_CONTROL;


typedef struct tag_STRU_NETWORK_PARAMS  //�����������
{
    char ipaddr[64];      //IP��ַ
    char netmask[64];     //��������
    char gateway[64];     //����
    char dns1[64];        //������1
    char dns2[64];        //������2
    int dhcp;             //�Ƿ���dhcp 1: ���� 0: ����
    int port;             //http�˿�
    int rtspport;         //rtsp�˿ڣ���֧��
}STRU_NETWORK_PARAMS,*PSTRU_NETWORK_PARAMS;

typedef struct tag_STRU_USER_INFO  //�����û��˻�
{
    char user1[64];       //�ι����û���
    char pwd1[64];        //�ι�������
    char user2[64];       //�������û���
    char pwd2[64];        //����������
    char user3[64];       //����Ա�û���
    char pwd3[64];        //����Ա����
}STRU_USER_INFO,*PSTRU_USER_INFO;


typedef struct tag_STRU_WIFI_PARAMS   //����WIFI����
{
    int enable;           //�Ƿ�����  1������   0��������
    char ssid[128];       //ssid   Service Set Identifier   ���񼯱�ʶ   SSID����һ�������������ƣ�ֻ������Ϊ������ͬSSID��ֵ�ĵ��Բ��ܻ���ͨ��
    int channel;          
    int mode;
    int authtype;
    int encrypt;
    int keyformat;
    int defkey;
    char key1[128];
    char key2[128];
    char key3[128];
    char key4[128];
    int key1_bits;
    int key2_bits;
    int key3_bits;
    int key4_bits;
    char wpa_psk[128];
}STRU_WIFI_PARAMS,*PSTRU_WIFI_PARAMS;


typedef struct tag_STRU_DATETIME_PARAMS   //����ʱ�����
{
    int now;                 //��ǰʱ��
    int tz;                  //ʱ��
    int ntp_enable;          //�Ƿ�����ntp����  1������    0 ��������
    char ntp_svr[64];        //��������ַ
}STRU_DATETIME_PARAMS,*PSTRU_DATETIME_PARAMS;


typedef struct tag_STRU_DDNS_PARAMS
{
    int service;
    char user[64];
    char pwd[64];
    char host[64];
    char proxy_svr[64];
    int ddns_mode;
    int proxy_port;
    int ddns_status;
}STRU_DDNS_PARAMS,*PSTRU_DDNS_PARAMS;


typedef struct tag_STRU_FTP_PARAMS
{
    char svr_ftp[64];
    char user[64];
    char pwd[64];
    char dir[128];
    int port;
    int mode;
    int upload_interval;
}STRU_FTP_PARAMS,*PSTRU_FTP_PARAMS;

typedef struct tag_STRU_MAIL_PARAMS
{
    char svr[64];    
    char user[64];    
    char pwd[64];
    char sender[64];
    char receiver1[64];
    char receiver2[64];
    char receiver3[64];
    char receiver4[64];
    int port;
    int ssl;
}STRU_MAIL_PARAMS,*PSTRU_MAIL_PARAMS;

typedef struct tag_STRU_UPGRADE_PARAMS
{
    char server[64];    
    char filepath[64];
	int type;
    char resevered1[64];
    char resevered2[64];
	char resevered3[64];
	char resevered4[64];
}STRU_UPGRADE_PARAMS,*PSTRU_UPGRADE_PARAMS;
typedef struct tag_STRU_ALARM_PARAMS
{
    int motion_armed;
    int motion_sensitivity;
    int input_armed;
    int ioin_level;
    int iolinkage;
    int ioout_level;
    int alarmpresetsit;
    int mail;
    int snapshot;
    int record;
    int upload_interval;
    int schedule_enable;
    int schedule_sun_0;
    int schedule_sun_1;
    int schedule_sun_2;
    int schedule_mon_0;
    int schedule_mon_1;
    int schedule_mon_2;
    int schedule_tue_0;
    int schedule_tue_1;
    int schedule_tue_2;
    int schedule_wed_0;
    int schedule_wed_1;
    int schedule_wed_2;
    int schedule_thu_0;
    int schedule_thu_1;
    int schedule_thu_2;
    int schedule_fri_0;
    int schedule_fri_1;
    int schedule_fri_2;
    int schedule_sat_0;
    int schedule_sat_1;
    int schedule_sat_2;
}STRU_ALARM_PARAMS,*PSTRU_ALARM_PARAMS;

typedef struct tag_STRU_PTZ_PARAMS
{
    int led_mode;
    int ptz_center_onstart;
    int ptz_run_times;
    int ptz_patrol_rate;
    int ptz_patrol_up_rate;
    int ptz_patrol_down_rate;
    int ptz_patrol_left_rate;
    int ptz_patrol_right_rate;
    int disable_preset;
    int ptz_preset;
}STRU_PTZ_PARAMS,*PSTRU_PTZ_PARAMS;

typedef struct tag_STRU_CAMERA_STATUS
{
    char sysver[32];
    char devname[96];
    char devid[32];
    int alarmstatus;
    int sdcardstatus;
    int sdcardtotalsize;
    int sdcardremainsize;
    char mac[32];
    char wifimac[32];
    int dns_status;
    int upnp_status;
	char appver[32];
	char oemid[32];
}STRU_CAMERA_STATUS,*PSTRU_CAMERA_STATUS;

typedef struct tag_STRU_WIFI_SEARCH_RESULT
{
    char ssid[64];
    char mac[64];
    int security;
    char dbm0[32];
    char  dbm1[32];
    int mode;
    int channel;

}STRU_WIFI_SEARCH_RESULT,*PSTRU_WIFI_SEARCH_RESULT;


typedef struct tag_STRU_WIFI_SEARCH_RESULT_LIST
{
    int nResultCount;
    STRU_WIFI_SEARCH_RESULT wifi[50];
}STRU_WIFI_SEARCH_RESULT_LIST,*PSTRU_WIFI_SEARCH_RESULT_LIST;

typedef struct tag__time_t
{
	int nYear;
	int nMonth;
	int nDay;
	int nHour;
	int nMinute;
	int nSecond;
}__SearchTime_t;

typedef struct tag_STRU_GET_RECORD_FILE_PARAM
{
    int PageIndex;
    int PageSize;
	__SearchTime_t startTime;
	__SearchTime_t endTime;
}STRU_GET_RECORD_FILE_PARAM,*PSTRU_GET_RECORD_FILE_PARAM;

typedef struct tag_STRU_PLAY_BACK_PARAM
{
    char filename[128];
    int pos;
}STRU_PLAY_BACK_PARAM,*PSTRU_PLAY_BACK_PARAM;

typedef struct tag_STRU_SDCARD_RECORD_FILE
{
    char szFileName[128];
    int nFileSize;
}STRU_SDCARD_RECORD_FILE,PSTRU_SDCARD_RECORD_FILE;

#define MAX_RECORD_FILE_COUNT 500
typedef struct tag_STRU_RECORD_FILE_LIST
{
    int nCount;
    int nRecordCount;
    int nPageCount;
    int nPageIndex;
    int nPageSize;
    STRU_SDCARD_RECORD_FILE recordFile[MAX_RECORD_FILE_COUNT];

}STRU_RECORD_FILE_LIST, PSTRU_RECORD_FILE_LIST;

typedef struct  tag_STRU_SD_RECORD_PARAM
{
    int record_cover_enable; 
    int record_timer; 
    int record_size;
    int record_time_enable; 
    int record_schedule_sun_0;
    int record_schedule_sun_1; 
    int record_schedule_sun_2; 
    int record_schedule_mon_0; 
    int record_schedule_mon_1; 
    int record_schedule_mon_2; 
    int record_schedule_tue_0; 
    int record_schedule_tue_1; 
    int record_schedule_tue_2; 
    int record_schedule_wed_0;
    int record_schedule_wed_1; 
    int record_schedule_wed_2; 
    int record_schedule_thu_0; 
    int record_schedule_thu_1; 
    int record_schedule_thu_2; 
    int record_schedule_fri_0; 
    int record_schedule_fri_1; 
    int record_schedule_fri_2; 
    int record_schedule_sat_0; 
    int record_schedule_sat_1; 
    int record_schedule_sat_2; 
    int record_sd_status; 
    int sdtotal;
    int sdfree; 
	int	enc_bitrate;//������

}STRU_SD_RECORD_PARAM, *PSTRU_SD_RECORD_PARAM;


typedef struct  tag_STRU_SENSOR_PARAM
{
	int sId;
	int sType;
	char sName[128];
	int sStatus;
	int sPreset;
}STRU_SENSOR_PARAM, *PSTRU_SENSOR_PARAM;


#define MAX_SENSOR_COUNT 32
typedef struct  tag_STRU_SENSOR_PARAM_LIST
{
	int count;
	STRU_SENSOR_PARAM	sensors[MAX_SENSOR_COUNT];
}STRU_SENSOR_PARAM_LIST,*PSTRU_SENSOR_PARAM_LIST;

typedef struct  tag_STRU_SENSOR_STATUS
{
	int	cmd;
	int armsetstatus;//1;��0:������1:������
	int alarmstatus;//=0;��0:û�б��� 1:������
	int codestatus;//=0;��0:�رն��� 1:�������룩
	int doorbell;//=0����1������ 0���رգ�
	int ptzspeed;// = 0; (0-10 �ٶ�Խ����̨ת��Խ��)
}STRU_SENSOR_STATUS, *PSTRU_SENSOR_STATUS;

typedef struct tag_STRU_SENSOR_ALARM_INFO{
    int cmd;/*#define ALARM_INFO_PUT_ALARM_INFO   0x01
             #define ALARM_LINK_SNAP_PICTURE     0x02
             #define ALARM_STATUS_INFO_RETURN    0x03*/
    int SensorID[3];
    int LinkPreset;
    char SensorName[64];
    int Sensortype;
    int SensorAction;
    int channel;//ͨ����
}STRU_SENSOR_ALARM_INFO, *PSTRU_SENSOR_ALARM_INFO;

#endif