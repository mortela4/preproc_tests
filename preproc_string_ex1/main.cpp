#include <cstdio>

#define FW_SERVER_NAME	"portal.agrimon.no"
#define AT_CMD_GETIP	"AT+UDNSRN=0"
//
#define FW_SERVER_GET_IP_CMD	AT_CMD_GETIP",\""FW_SERVER_NAME"\""
#define FW_SERVER_GET_IP_CMD2	"AT+UDNSRN=0,\""FW_SERVER_NAME"\""


int main(int argc, char *argv[])
{
	char cmdbuf[50];

	printf("AT+UDNSRN=0,\"%s\"", FW_SERVER_NAME);
	printf("\r\n");
	printf(FW_SERVER_GET_IP_CMD);
	printf("\r\n");
	printf(FW_SERVER_GET_IP_CMD2);
	printf("\r\n");

	snprintf(cmdbuf, sizeof(cmdbuf), "AT+UDNSRN=0,\"%s\"", FW_SERVER_NAME);
	printf(cmdbuf);

	return 0;
}

