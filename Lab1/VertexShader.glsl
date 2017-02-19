#version 430

in layout(location=0) vec2 position;

out vec4 theColor;

uniform vec4 drawingColor;
uniform mat4 translationMatrix;
uniform mat4 rotationElementMatrix;
uniform mat4 rotationSceneMatrix;
uniform mat4 scalingElementMatrix;
uniform mat4 scalingSceneMatrix;
uniform mat4 projectionMatrix;

void main() { 
	gl_Position = projectionMatrix * rotationSceneMatrix * scalingSceneMatrix 
				* translationMatrix * rotationElementMatrix * scalingElementMatrix 
				* vec4(position, 0.0, 1.0);
	theColor = drawingColor;
}