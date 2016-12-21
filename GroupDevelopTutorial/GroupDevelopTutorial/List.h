//
//  List.h
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
//

#ifndef List_h
#define List_h

#define SOLID3D_LENGTH_MAX 16

#include <stdio.h>
#include "Solid3D.h"
#include "List.h"

typedef struct {
	Solid3D solid_list[SOLID3D_LENGTH_MAX];
	int length;
	
	void (*allUpdate)();
	void (*allShow)();
	Solid3D (*at)();
	int (*add)();
	int (*isEmpty)();
} List_Solid3d;

List_Solid3d List_Solid3d_init();

void __List_Solid3d_allUpdate(List_Solid3d *this_);
void __List_Solid3d_allShow(List_Solid3d *this_);
Solid3D __List_Solid3d_at(List_Solid3d *this_, int index);
int __List_Solid3d_add(List_Solid3d *this_, Solid3D element);
int __List_Solid3d_isEmpty(List_Solid3d *this_);

#endif /* List_h */
