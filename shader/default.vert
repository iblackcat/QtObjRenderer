#version 450

layout(location = 0) in vec3 p;
layout(location = 1) in vec2 texCoord;

uniform mat4 model;
uniform mat4 view;
uniform mat4 proj;

out vec2 st;

void main() {  
	vec4 T = proj*view*model*vec4(p[0], p[1], p[2], 1.0);
	gl_Position = vec4(T.x/T.w, T.y/T.w, T.z/T.w/10, 1.0);
	st = vec2(texCoord[0], texCoord[1]);

    //gl_Position = Proj * View * Model * vec4(p, 1.0);  
    //gl_Position = Proj * Model * vec4(p, 1.0);
    //gl_Position = Proj * Model * vec4(p*10, 1.0);
	//gl_Position = vec4(p, 1.0);  
	//st = texCoord;
} 