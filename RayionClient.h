//�߳�
UINT rtspControl(LPVOID lpParam);          // һ��RTSP�����̣߳������������
UINT rtpHandler(LPVOID lpParam);            // RTP���հ���������װ�뻺���߳�
UINT DecoderAndPlayer(LPVOID lpParam);        // �����벥���߳�

//�̲߳�����
class rtspParam
{
public:
	char *URI;
	int Port;
	SOCKET socket;

	rtspParam()
	{
		URI = new char[BUF_SIZE];
		Port = 554;
		socket = -1;
	}

	~rtspParam(){};
};