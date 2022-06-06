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
	ourPlane opl;//我方飞机
	enemyPlane  epl;//地方飞机
	int time = 25000;//倒计时
	int level;//等级&卡关数
	            //背景
	            //音乐
};

