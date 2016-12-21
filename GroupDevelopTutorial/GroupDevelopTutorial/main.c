//
//  main.c
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/20.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
//



#include <stdio.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>

#include "TutorialView.h"
#include "TutorialController.h"
#include "List.h"


List_Solid3d model_list;
int WindowWidth, WindowHeight;


//物理演算とかする
void fpsHandler() {
	
	for(int i = 0; i < model_list.length; i++) {
		Solid3D tmp = model_list.at(&model_list, i);
		tmp.setMoveVec(&tmp, Vector3_init(0.1, 0, 0));
	}
	model_list.allUpdate(&model_list);
	
}


//フレームレート毎処理
void modelIdleFunc() {
	
	glutPostRedisplay(); //glut - 再描画関数
	
	fpsHandler();
	
	//update variable
	
}


//初期化処理
int init() {
	
	glClearColor(0.4, 0.7, 0.95, 1.0);
	glutIdleFunc(modelIdleFunc); //ループ関数
	glEnable(GL_DEPTH_TEST);//デプスバッファを使用
	
	
	
	
	return 0;
}



int main(int argc, const char * argv[]) {
	
	//ウィンドウサイズ初期化
	WindowWidth = 960;
	WindowHeight = 540;
	
	
	//init variable
	tutorialView_initVariables(&WindowWidth, &WindowHeight, &model_list);
	model_list = List_Solid3d_init();
	model_list.add(&model_list, Solid3D_init_Cube(Vector3_init(0.0, 0.0, 0.0), Vector3_init(0.0, 0.0, 0.0), 2.0, 2.0, 2.0));
	
	
	//GLUTの制御関数
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(WindowWidth, WindowHeight);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH);
	glutCreateWindow("Tutorial");
	glutDisplayFunc(displayHandler);
	glutReshapeFunc(displayReshapeFunc);
	glutMouseFunc(mouseController);
	glutPassiveMotionFunc(mousePositionHandler);
	glutKeyboardFunc(keyboardController);
	glutKeyboardUpFunc(keyboardController_Up);
	init();
	glutMainLoop();
	
    return 0;
}
