//
//  Vector3.c
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
///


#include "Vector3.h"



Vector3 Vector3_init(double x, double y, double z) {
//	Vector3 vec;
//	vec.vec[0] = x;
//	vec.vec[1] = y;
//	vec.vec[2] = z;
//	vec.plusWith = __Vector3_plusWith;
//	vec.multiWith = __Vector3_multiWith;
//	vec.copy = __Vector3_copy;
//	vec.rotate = __Vector3_rotate;
	
	
//	return vec;
}

void __Vector3_plusWith(Vector3 *this_, Vector3 vec) {
//	for(int i = 0; i < 3; i++)
//		this_->vec[i] += vec.vec[i];
}

void __Vector3_multiWith(Vector3 *this_, Vector3 vec) {
//	for(int i = 0; i < 3; i++)
//		this_->vec[i] *= vec.vec[i];
}

void __Vector3_copy(Vector3 *this_, Vector3 vec) {
//	for(int i = 0; i < 3; i++)
//		this_->vec[i] = vec.vec[i];
}

void __Vector3_rotate(Vector3 *this_, double r) {
//	int i, j;
//	double rotate[3][3];
//	rotate[0][0] = cos(r);
//	rotate[1][0] = 0;
//	rotate[2][0] = sin(r);
//	rotate[0][1] = 0;
//	rotate[1][1] = 1;
//	rotate[2][1] = 0;
//	rotate[0][2] = -sin(r);
//	rotate[1][2] = 0;
//	rotate[2][2] = cos(r);
//	
//	Vector3 ans = Vector3_init(0.0, 0.0, 0.0);
//	
//	for(i = 0; i < 3; i++) {
//		double buff = 0.0;
//		for(j = 0; j < 3; j++) {
//			buff += rotate[j][i] * this_->vec[j];
//		}
//		ans.vec[i] = buff;
//	}
//	
//	this_->copy(this_, ans);
	
}


void __Vector3_getAsGLdouble(Vector3 *this_, GLdouble *gldouble) {
//	for(int i = 0; i < 3; i++)
//		*(gldouble+i) = this_->vec[i];
	
	
}


