#version 440 core
in vec4 position;
out vec4 pos;
uniform mat4 projection_matrix = mat4(1.0);
uniform mat4 model_matrix = mat4(1.0);
void main(){
gl_Position = projection_matrix * model_matrix * position;
pos = model_matrix * position;
}