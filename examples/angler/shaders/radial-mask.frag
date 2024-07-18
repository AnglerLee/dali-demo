#version 300 es
precision mediump float; 
in vec2 vUV; 
out vec4 FragColor; 
uniform sampler2D sTexture; 
uniform sampler2D sMaskTexture; 
uniform float uDelta;

void main() 
{ 
    mat2 rotation = mat2(cos(uDelta), -sin(uDelta), sin(uDelta), cos(uDelta)); 
    vec2 maskUV = (rotation * (vUV -.5)) +.5; 
    vec4 color = texture(sTexture, vUV); 
    vec4 alpha = texture(sMaskTexture, maskUV); 
    FragColor = vec4(color.rgb, color.a * alpha.a); 
}