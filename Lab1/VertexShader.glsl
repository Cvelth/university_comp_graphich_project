#version 430

in layout(location=0) vec2 position;

out vec4 theColor;

uniform vec4 drawingColor;
uniform mat4 translationMatrix;
uniform mat4 rotationElementMatrix;
uniform mat4 rotationSceneMatrix;
uniform mat4 scalingMatrix;
uniform mat4 projectionMatrix;

void main() { 
	gl_Position = projectionMatrix * rotationSceneMatrix * translationMatrix 
				* rotationElementMatrix * scalingMatrix * vec4(position, 0.0, 1.0);
	theColor = drawingColor;
}