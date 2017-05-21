#version 430

in vec3 thePosition;
in vec3 theNormal;
in float light;

out vec4 fColor;

uniform vec4 drawingColor;
uniform vec3 lightPos;
uniform vec3 background;

void main() {
	float ambientCoefficient = 0.1f;
	fColor = vec4(vec3(drawingColor) * light + background * ambientCoefficient, 
				  1.f);// drawingColor[3]);
}