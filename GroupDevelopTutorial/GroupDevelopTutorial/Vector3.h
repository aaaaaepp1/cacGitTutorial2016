//
//  Vector3.h
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
//

#ifndef Vector3_h
#define Vector3_h


#include <stdio.h>
#include <OpenGL/gl.h>
#include <Math.h>


typedef struct {
	double vec[3];
	void (*plusWith)();
	void (*multiWith)();
	void (*rotate)();
	void (*copy)();
	void (*getAsGLdouble)();
}Vector3;

Vector3 Vector3_init(double x, double y, double z);
void __Vector3_plusWith(Vector3 *this_, Vector3 vec);
void __Vector3_multiWith(Vector3 *this_, Vector3 vec);
void __Vector3_copy(Vector3 *this_, Vector3 vec);
void __Vector3_rotate(Vector3 *this_, double r);
void __Vector3_getAsGLdouble(Vector3 *this_, GLdouble *gldouble);


#endif /* Vector3_h */
