//
//  Solid3D.h
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
//

#ifndef Solid3D_h
#define Solid3D_h

#define SOLID3D_VECTORS_LENGTH 16
#define SOLID3D_EDGE_LENGTH 32

#include <stdio.h>
#include <OpenGL/gl.h>
#include "Vector3.h"


typedef struct {
	int vertex;
	Vector3 vectors[SOLID3D_VECTORS_LENGTH];
	int edgeNum;
	int edge[SOLID3D_EDGE_LENGTH][2];
	Vector3 moveVec;
	Vector3 pos;
	Vector3 color;
	void (*update)();//fpsHandlerで呼ばれるやーつ
	void (*draw)();//描画メソッド
	void (*setMoveVec)();
	void (*rotate)();
	void (*getAsGLDouble)();
} Solid3D;

Solid3D Solid3D_init_Cube(Vector3 initPos, Vector3 color, double w, double h, double d);

void __Solid3D_update(Solid3D *this_);
void __Solid3D_draw(Solid3D *this_);
void __Solid3D_setMoveVec(Solid3D *this_, Vector3 vec);
void __Solid3D_rotate(Solid3D *this_, double r);
void __Solid3D_getAsGLDouble(Solid3D *this_, GLdouble *gldouble);

#endif /* Solid3D_h */
