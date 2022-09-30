#include "Entity.h"


void Entity::draw() {
	if (type == "Rec" || type == "rec") {
		DrawRectangleV({ x,y }, { width,height }, color);
	}
	if (type == "Circ" || type == "circ") {
		DrawCircleV({ x,y }, radius, color);
	}
}