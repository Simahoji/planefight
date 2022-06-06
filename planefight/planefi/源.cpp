#include "section.h"
#include<iostream>
#include <graphics.h>  
#include <conio.h>
#include <time.h>

using namespace std;

section sec1;
section sec2;
section sec3;
section sec4;

	//mciSendString(("open music1.mp3 alias bkmusic"), NULL, 0, NULL);
	//打开音乐
IMAGE im_bk, im_bullet, im_plane, im_blowup, im_UFO,im_enemyplane;  // 定义图像对象	
void chushihua()
{
	srand(time(0)); // 初始化随机种子
	// 导入背景图片
	loadimage(&im_bk, _T("background1.png"));
	loadimage(&im_bk, _T("background2.png"));
	loadimage(&im_bk, _T("background3.png"));
	loadimage(&im_bk, _T("background4.png"));
	loadimage(&im_bullet, _T("bullet.png")); // 导入子弹图片
	loadimage(&im_plane, _T("rocket.png")); // 导入飞机图片
	loadimage(&im_blowup, _T("blowup.png")); // 导入爆炸图片
	loadimage(&im_enemyplane, _T("ufo.png")); // 导入敌方飞机图片

}

int main()
{
	chushihua();

	loadimage(&bkimg, _T("../images/bk2.png"), 100, 100 * 2);

	sec1.show();
}

	