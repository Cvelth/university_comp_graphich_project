#version 430

in vec3 thePosition;
in vec3 theNormal;

out vec4 fColor;

uniform vec4 drawingColor;
uniform vec3 lightPos;
uniform vec3 background;

void main() {
	float ambientCoefficient = 0.1f;
	vec3 lightVec = normalize(thePosition - lightPos);
	fColor = vec4(vec3(drawingColor) * clamp(dot(lightVec, theNormal), 0, 1) 
				+ background * ambientCoefficient,
				  1.f);// drawingColor[3]);
}