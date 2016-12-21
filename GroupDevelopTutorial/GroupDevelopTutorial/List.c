//
//  List.c
//  GroupDevelopTutorial
//
//  Created by 岡本　直樹 on 2016/12/21.
//  Copyright © 2016年 Naoki Okamoto. All rights reserved.
//


#include "List.h"


List_Solid3d List_Solid3d_init() {
	List_Solid3d list;
	list.length = 0;
	list.allUpdate = __List_Solid3d_allUpdate;
	list.allShow = __List_Solid3d_allShow;
	list.at = __List_Solid3d_at;
	list.add = __List_Solid3d_add;
    list.isEmpty = __List_Solid3d_isEmpty;
	
	return list;
}


void __List_Solid3d_allUpdate(List_Solid3d *this_) {
	for(int i = 0; i < this_->length; i++) {
		this_->solid_list[i].update(&(this_->solid_list[i]));
	}
}


void __List_Solid3d_allShow(List_Solid3d *this_) {
	
	
	for(int i = 0; i < this_->length; i++) {
		printf("allshow : %d\n", i);
		this_->solid_list[i].draw(&(this_->solid_list[i]));
	}
}


Solid3D __List_Solid3d_at(List_Solid3d *this_, int index) {
//	if(index > this_->length)
//		return Solid3D_init_Cube(Vector3_init(0.0, 0.0, 0.0), Vector3_init(0, 0, 0), 0, 0, 0);
//	
//	return this_->solid_list[index];
}



int __List_Solid3d_add(List_Solid3d *this_, Solid3D element) {
	
//	if(this_->length >= SOLID3D_LENGTH_MAX)
//		return 1;
//	
//	this_->solid_list[this_->length] = element;
//	this_->length += 1;
//	
	return 0;
}


int __List_Solid3d_isEmpty(List_Solid3d *this_) {
//	return this_->length == 0;
	
	return 0;//エラー回避
}
