//
//  TutorialView.h
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
//

#ifndef TutorialView_h
#define TutorialView_h

#include <stdio.h>
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#include "List.h"


void tutorialView_initVariables(int *windowWidth, int *windowHeight, List_Solid3d *list);
void displayHandler();
void displayReshapeFunc(int w, int h);

#endif /* TutorialView_h */
