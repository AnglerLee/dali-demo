precision highp float;
INPUT mediump vec2 vTexCoord;
uniform sampler2D sTexture;

uniform sampler2D sMaskTexture;
uniform mediump float uDelta;

void main()
{
  vec2 texCoord = vTexCoord * 2. - 1.;
  mat2 rotation = mat2(cos(uDelta), -sin(uDelta), sin(uDelta), cos(uDelta));
  vec2 vMaskTexCoord = (rotation * texCoord) * .5 + .5;
  vec4 color = TEXTURE( sTexture, vTexCoord );
  vec4 alpha = TEXTURE(sMaskTexture, vMaskTexCoord);
  OUT_COLOR =  vec4(color.rgb, color.a * alpha.a); 
}
