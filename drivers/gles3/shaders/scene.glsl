/* clang-format off */
#[modes]
mode_dummy =

#[specializations]

#[vertex]

layout(location = 0) in vec3 vertex;

uniform highp mat4 projection;
uniform highp vec4 modelview1;
uniform highp vec4 modelview2;

void main() {
    highp vec4 vtx = vec4(vertex, 1.0) * mat4(modelview1, modelview2, vec4(0.0, 0.0, 1.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0));
    gl_Position = projection * vtx;
}

#[fragment]

uniform highp mat4 projection;
uniform highp vec4 modelview1;
uniform highp vec4 modelview2;

layout(location = 0) out highp vec4 out_buf;

void main() {
    out_buf = vec4(1.0, 0.0, 0.0, 1.0);  // Output a red color as a dummy output
}
