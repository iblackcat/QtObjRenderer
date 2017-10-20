#version 450

in vec2 st;
uniform sampler2D tex;

out vec4 FragColor;

void main()  
{
	vec4 C = texture2D(tex, st);
	FragColor = vec4(C.xyz, 1.0);
	//FragColor = vec4(1.0, 0.0, 0.0, 1.0);
}  