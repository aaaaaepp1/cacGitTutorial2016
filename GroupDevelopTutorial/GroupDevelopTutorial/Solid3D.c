//
//  Solid3D.c
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
///



#include "Solid3D.h"

Solid3D Solid3D_init_Cube(Vector3 initPos, Vector3 color, double w, double h, double d) {
	Solid3D solid;

	solid.color = color;

	solid.vertex = 8;
	solid.edgeNum = 12;

	solid.vectors[0] = Vector3_init(0.0, 0.0, 0.0);
	solid.vectors[1] = Vector3_init(w  , 0.0, 0.0);
	solid.vectors[2] = Vector3_init(w  , h  , 0.0);
	solid.vectors[3] = Vector3_init(0.0, h  , 0.0);
	solid.vectors[4] = Vector3_init(0.0, 0.0, d  );
	solid.vectors[5] = Vector3_init(h  , 0.0, d  );
	solid.vectors[6] = Vector3_init(h  , h  , d  );
	solid.vectors[7] = Vector3_init(0.0, h  , d  );

	int tmp_edge[][2] = {
		{ 0, 1 },
		{ 1, 2 },
		{ 2, 3 },
		{ 3, 0 },
		{ 4, 5 },
		{ 5, 6 },
		{ 6, 7 },
		{ 7, 4 },
		{ 0, 4 },
		{ 1, 5 },
		{ 2, 6 },
		{ 3, 7 }
	};

	for(int i = 0; i < solid.edgeNum; i++)
		for(int j = 0; j < 2; j++) solid.edge[i][j] = tmp_edge[i][j];

	solid.moveVec = Vector3_init(0, 0, 0);
	solid.pos = initPos;
	solid.update = __Solid3D_update;
	solid.draw = __Solid3D_draw;
	solid.setMoveVec = __Solid3D_setMoveVec;
	solid.rotate = __Solid3D_rotate;
	solid.getAsGLDouble = __Solid3D_getAsGLDouble;

	return solid;

}


void __Solid3D_update(Solid3D *this_) {

	//速度を適用
	this_->pos.plusWith(this_, this_->moveVec);

	//摩擦を計算


}



void __Solid3D_draw(Solid3D *this_) {





	GLdouble vertex[SOLID3D_VECTORS_LENGTH][3];
	//this_->getAsGLDouble(this_, vertex);
	for(int i = 0; i < SOLID3D_VECTORS_LENGTH; i++) {
		for(int j = 0; j < 3; j++)
			vertex[i][j] = this_->vectors[i].vec[j]+this_->moveVec.vec[j];
	}

	//
	glColor3d(this_->color.vec[0],
			  this_->color.vec[1],
			  this_->color.vec[2]);
	glBegin(GL_LINES);
	for (int i = 0; i < this_->edgeNum; i++) {
		glVertex3dv(vertex[this_->edge[i][0]]);
		glVertex3dv(vertex[this_->edge[i][1]]);
	}
	glEnd();

}



void __Solid3D_setMoveVec(Solid3D *this_, Vector3 vec) {
	this_->moveVec.plusWith(this_, vec);
}



void __Solid3D_rotate(Solid3D *this_, double r) {
	for(int i = 0; i < this_->vertex; i++)
	this_->vectors[i].rotate(this_, r);
}


void __Solid3D_getAsGLDouble(Solid3D *this_, GLdouble *gldouble) {
	GLdouble vertex[SOLID3D_VECTORS_LENGTH][3];
	for(int i = 0; i < this_->vertex; i++) {
		//GLdouble gldoubleVec_[3];

		for(int j = 0; j < 3; j++)
			vertex[i][j] = this_->vectors[i].vec[j];
	}

	gldouble = vertex;
	printf("tmp");
	//gldouble = vertex;

}
