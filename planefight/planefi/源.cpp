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
	//������
IMAGE im_bk, im_bullet, im_plane, im_blowup, im_UFO,im_enemyplane;  // ����ͼ�����	
void chushihua()
{
	srand(time(0)); // ��ʼ���������
	// ���뱳��ͼƬ
	loadimage(&im_bk, _T("background1.png"));
	loadimage(&im_bk, _T("background2.png"));
	loadimage(&im_bk, _T("background3.png"));
	loadimage(&im_bk, _T("background4.png"));
	loadimage(&im_bullet, _T("bullet.png")); // �����ӵ�ͼƬ
	loadimage(&im_plane, _T("rocket.png")); // ����ɻ�ͼƬ
	loadimage(&im_blowup, _T("blowup.png")); // ���뱬ըͼƬ
	loadimage(&im_enemyplane, _T("ufo.png")); // ����з��ɻ�ͼƬ

}

int main()
{
	chushihua();

	loadimage(&bkimg, _T("../images/bk2.png"), 100, 100 * 2);

	sec1.show();
}

	