#pragma once
#include"ourPlane.h"
#include"enemyPlane.h"
class section
{
public:
	section();
	~section();
	void show(IMAGE&);
private:
	ourPlane opl;//�ҷ��ɻ�
	enemyPlane  epl;//�ط��ɻ�
	int time = 25000;//����ʱ
	int level;//�ȼ�&������
	            //����
	            //����
};

