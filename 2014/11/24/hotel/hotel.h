//hotel.h -- hotel.c�еĳ�������ͺ�������
#define QUIT        5
#define HOTEL1      80.00
#define HOTEL2      125.00
#define HOTEL3      155.00
#define HOTEL4      200.00
#define DISCOUNT    0.95
#define STARS       "*******************************"

//����ѡ���б�
int menu(void);

//����Ԥ��������
int getnights(void);

//��������Ǽ���Ԥ������������۸���ʾ����
void showprice(double,int);
