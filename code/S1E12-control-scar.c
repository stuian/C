#include <Servo.h>

// Ϊ�˷�����ã�����Ϊ�������ҵ��
// ǰ�����˵��������Ž����˺궨��
#define LEFT_MOTO_GO    8 
#define LEFT_MOTO_BACK    9
#define RIGHT_MOTO_GO    10
#define RIGHT_MOTO_BACK    11

// ...ʡ�Բ��ִ���...

void loop()
{
    char ch; // ���ڽ�������
    
    switch(ch)
    {
        // �����������Ҫ�������䣡����
        case 'g':{
			digitalWrite(LEFT_MOTO_GO,HIGH);digitalWrite(LEFT_MOTO_BACK,LOW);
			digitalWrite(RIGHT_MOTO_GO,HIGH);digitalWrite(RIGHT_MOTO_BACK,LOW);
			break;
		}
		case 'b':{
			digitalWrite(LEFT_MOTO_GO,LOW);digitalWrite(LEFT_MOTO_BACK,HIGH);
			digitalWrite(RIGHT_MOTO_GO,LOW);digitalWrite(RIGHT_MOTO_BACK,HIGH);
			break;
		}
		case 'r':{
			digitalWrite(LEFT_MOTO_GO,HIGH);digitalWrite(LEFT_MOTO_BACK,LOW);
			digitalWrite(RIGHT_MOTO_GO,LOW);digitalWrite(RIGHT_MOTO_BACK,LOW);
			break;
		}
		case 'l':{
			digitalWrite(LEFT_MOTO_GO,LOW);digitalWrite(LEFT_MOTO_BACK,LOW);
			digitalWrite(RIGHT_MOTO_GO,HIGH);digitalWrite(RIGHT_MOTO_BACK,LOW);
			break;
		}
    }

    // ...ʡ�Բ��ִ���...
}
