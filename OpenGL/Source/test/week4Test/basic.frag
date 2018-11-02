#version 440

in vec4 pos;
out vec4 color;

uniform vec4 color1;
uniform vec2 light_position;

void main(){
float intensity = 1.0 /length(pos.xy - light_position);
color = color1 * intensity;
}