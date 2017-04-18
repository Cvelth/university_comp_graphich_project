#version 430

in layout(location = 0) vec3 position;
in layout(location = 1) vec3 normal;

out vec3 thePosition;
out vec3 theNormal;

uniform vec4 drawingColor;
uniform mat4 translationMatrix;
uniform mat4 rotationElementMatrix;
uniform mat4 rotationSceneMatrix;
uniform mat4 scalingElementMatrix;
uniform mat4 scalingSceneMatrix;
uniform mat4 projectionMatrix;
uniform mat4 lookAtMatrix;

uniform vec3 lightPos;
uniform vec3 camera;
uniform vec3 background;

void main() {
	mat4 transformation = rotationSceneMatrix * scalingSceneMatrix
		* translationMatrix * rotationElementMatrix * scalingElementMatrix;

	thePosition = vec3(transformation * vec4(position, 1.0));
	theNormal = normal;

	gl_Position = projectionMatrix * lookAtMatrix * vec4(thePosition, 1.0);
}