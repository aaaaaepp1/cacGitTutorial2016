//
//  TutorialView.c
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
//


#include "TutorialView.h"


int *updatingWindowWidth, *updatingWindowHeight;
List_Solid3d *TutorialView_modelList;


void tutorialView_initVariables(int *windowWidth, int *windowHeight, List_Solid3d *list) {
	updatingWindowWidth = windowWidth;
	updatingWindowHeight = windowHeight;
	TutorialView_modelList = list;
}




void displayHandler() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); //glut -
	glLoadIdentity(); //glut -


	gluLookAt(15.0, 5.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);//


	//描画
	TutorialView_modelList->allShow(TutorialView_modelList);




	glFlush(); //描画



	return ;
}



void displayReshapeFunc(int w, int h) {

//	glViewport(0, 0, w, h); //ビューポート設定
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluPerspective(30.0, (double)w / (double)h, 1.0, 100.0);
//	glMatrixMode(GL_MODELVIEW);
//
//	updatingWindowWidth = &w;
//	updatingWindowHeight = &h;

	return ;
}
