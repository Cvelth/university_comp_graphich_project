#version 430

attribute layout(location=0) vec3 position;

varying vec4 theColor;

uniform vec4 drawingColor;
uniform mat4 translationMatrix;
uniform mat4 rotationElementMatrix;
uniform mat4 rotationSceneMatrix;
uniform mat4 scalingElementMatrix;
uniform mat4 scalingSceneMatrix;
uniform mat4 projectionMatrix;
uniform mat4 lookAtMatrix;

uniform vec3 camera;
uniform vec3 background;

void main() { 
	gl_Position = projectionMatrix * lookAtMatrix * rotationSceneMatrix * scalingSceneMatrix 
				* translationMatrix * rotationElementMatrix * scalingElementMatrix 
				* vec4(position, 1.0);
	float t = length(gl_Position - camera);
	if (t > 1)
		theColor = drawingColor / t * 5 + background;
	else
		theColor = drawingColor;
}