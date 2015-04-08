//线程
UINT rtspControl(LPVOID lpParam);          // 一个RTSP控制线程，信令交互与心跳
UINT rtpHandler(LPVOID lpParam);            // RTP包收包、处理、装入缓存线程
UINT DecoderAndPlayer(LPVOID lpParam);        // 解码与播放线程

//线程参数表
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

class rtpParam
{
public:
	int *IPAddr;
	int Port;

	rtpParam()
	{
		IPAddr = new int[4];
		Port = 554;
	}

	~rtpParam(){};
};