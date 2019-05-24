// Automatically generated header file for shader.
// See LICENSE.txt for full license statement.

#pragma once

// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const ImageFragmentShader = 
"#version 330\n"
"\n"
"in vec2 UV;\n"
"uniform sampler2D image_texture;\n"
"\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    FragColor = texture(image_texture, UV);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const ImageMaskVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"in vec2 vertex_UV;\n"
"\n"
"out vec2 UV;\n"
"\n"
"void main()\n"
"{\n"
"    gl_Position = vec4(vertex_position, 1);\n"
"    UV = vertex_UV;\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const NormalFragmentShader = 
"#version 330\n"
"\n"
"in vec3 vertex_normal_camera;\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    FragColor = vec4(vertex_normal_camera * 0.5 + 0.5, 1);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const ImageMaskFragmentShader = 
"#version 330\n"
"\n"
"in vec2 UV;\n"
"uniform sampler2D image_texture;\n"
"\n"
"uniform vec3 mask_color;\n"
"uniform float mask_alpha;\n"
"\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    FragColor = vec4(mask_color, texture(image_texture, UV).r * mask_alpha);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const PhongFragmentShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position_world;\n"
"in vec3 vertex_normal_camera;\n"
"in vec3 eye_dir_camera;\n"
"in mat4 light_dir_camera_4;\n"
"in vec3 fragment_color;\n"
"\n"
"uniform mat4 light_color_4;\n"
"uniform vec4 light_diffuse_power_4;\n"
"uniform vec4 light_specular_power_4;\n"
"uniform vec4 light_specular_shininess_4;\n"
"uniform vec4 light_ambient;\n"
"\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    vec3 diffuse_color = fragment_color;\n"
"    vec3 ambient_color = light_ambient.xyz * diffuse_color;\n"
"    vec3 specular_color = vec3(1.0, 1.0, 1.0);\n"
"    vec4 cos_theta;\n"
"    vec4 cos_alpha;\n"
"    vec3 n, e, l, r;\n"
"\n"
"    n = normalize(vertex_normal_camera);\n"
"    e = normalize(eye_dir_camera);\n"
"    l = normalize(light_dir_camera_4[0].xyz);\n"
"    r = reflect(-l, n);\n"
"    cos_theta[0] = clamp(dot(n, l), 0, 1);\n"
"    cos_alpha[0] = clamp(dot(e, r), 0, 1);\n"
"\n"
"    l= normalize(light_dir_camera_4[1].xyz);\n"
"    r = reflect(-l, n);\n"
"    cos_theta[1] = clamp(dot(n, l), 0, 1);\n"
"    cos_alpha[1] = clamp(dot(e, r), 0, 1);\n"
"\n"
"    l= normalize(light_dir_camera_4[2].xyz);\n"
"    r = reflect(-l, n);\n"
"    cos_theta[2] = clamp(dot(n, l), 0, 1);\n"
"    cos_alpha[2] = clamp(dot(e, r), 0, 1);\n"
"\n"
"    l= normalize(light_dir_camera_4[3].xyz);\n"
"    r = reflect(-l, n);\n"
"    cos_theta[3] = clamp(dot(n, l), 0, 1);\n"
"    cos_alpha[3] = clamp(dot(e, r), 0, 1);\n"
"\n"
"    FragColor = vec4(ambient_color + \n"
"            diffuse_color * light_color_4[0].xyz * light_diffuse_power_4[0] * cos_theta[0] +\n"
"            specular_color * light_color_4[0].xyz * light_specular_power_4[0] * pow(cos_alpha[0], light_specular_shininess_4[0]) +\n"
"            diffuse_color * light_color_4[1].xyz * light_diffuse_power_4[1] * cos_theta[1] +\n"
"            specular_color * light_color_4[1].xyz * light_specular_power_4[1] * pow(cos_alpha[1], light_specular_shininess_4[1]) +\n"
"            diffuse_color * light_color_4[2].xyz * light_diffuse_power_4[2] * cos_theta[2] +\n"
"            specular_color * light_color_4[2].xyz * light_specular_power_4[2] * pow(cos_alpha[2], light_specular_shininess_4[2]) +\n"
"            diffuse_color * light_color_4[3].xyz * light_diffuse_power_4[3] * cos_theta[3] +\n"
"            specular_color * light_color_4[3].xyz * light_specular_power_4[3] * pow(cos_alpha[3], light_specular_shininess_4[3]), 1);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const SimpleFragmentShader = 
"#version 330\n"
"\n"
"in vec3 fragment_color;\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    FragColor = vec4(fragment_color, 1);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const SimpleBlackFragmentShader = 
"#version 330\n"
"\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    FragColor = vec4(0.1, 0.1, 0.1, 1);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const SimpleBlackVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"uniform mat4 MVP;\n"
"\n"
"void main()\n"
"{\n"
"    gl_Position = MVP * vec4(vertex_position, 1);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const PickingVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"in float vertex_index;\n"
"uniform mat4 MVP;\n"
"\n"
"out vec4 fragment_color;\n"
"\n"
"void main()\n"
"{\n"
"    float r, g, b, a;\n"
"    gl_Position = MVP * vec4(vertex_position, 1);\n"
"    r = floor(vertex_index / 16777216.0) / 255.0;\n"
"    g = mod(floor(vertex_index / 65536.0), 256.0) / 255.0;\n"
"    b = mod(floor(vertex_index / 256.0), 256.0) / 255.0;\n"
"    a = mod(vertex_index, 256.0) / 255.0;\n"
"    fragment_color = vec4(r, g, b, a);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const PhongVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"in vec3 vertex_normal;\n"
"in vec3 vertex_color;\n"
"\n"
"out vec3 vertex_position_world;\n"
"out vec3 vertex_normal_camera;\n"
"out vec3 eye_dir_camera;\n"
"out mat4 light_dir_camera_4;\n"
"out vec3 fragment_color;\n"
"\n"
"uniform mat4 MVP;\n"
"uniform mat4 V;\n"
"uniform mat4 M;\n"
"uniform mat4 light_position_world_4;\n"
"\n"
"void main()\n"
"{\n"
"    gl_Position = MVP * vec4(vertex_position, 1);\n"
"    vertex_position_world = (M * vec4(vertex_position, 1)).xyz;\n"
"\n"
"    vec3 vertex_position_camera = (V * M * vec4(vertex_position, 1)).xyz;\n"
"    eye_dir_camera = vec3(0, 0, 0) - vertex_position_camera;\n"
"\n"
"    vec4 v = vec4(vertex_position_camera, 1);\n"
"    light_dir_camera_4 = V * light_position_world_4 - mat4(v, v, v, v);\n"
"\n"
"    vertex_normal_camera = (V * M * vec4(vertex_normal, 0)).xyz;\n"
"    if (dot(eye_dir_camera, vertex_normal_camera) < 0.0)\n"
"        vertex_normal_camera = vertex_normal_camera * -1.0;\n"
"\n"
"    fragment_color = vertex_color;\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const Simple2DVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"in vec3 vertex_color;\n"
"\n"
"out vec3 fragment_color;\n"
"\n"
"void main()\n"
"{\n"
"    gl_Position = vec4(vertex_position, 1);\n"
"    fragment_color = vertex_color;\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const PickingFragmentShader = 
"#version 330\n"
"\n"
"in vec4 fragment_color;\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    FragColor = fragment_color;\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const NormalVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"in vec3 vertex_normal;\n"
"\n"
"out vec3 vertex_normal_camera;\n"
"\n"
"uniform mat4 MVP;\n"
"uniform mat4 V;\n"
"uniform mat4 M;\n"
"\n"
"void main()\n"
"{\n"
"    gl_Position = MVP * vec4(vertex_position, 1);\n"
"    vertex_normal_camera = (V * M * vec4(vertex_normal, 0)).xyz;\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const Simple2DFragmentShader = 
"#version 330\n"
"\n"
"in vec3 fragment_color;\n"
"out vec4 FragColor;\n"
"\n"
"void main()\n"
"{\n"
"    FragColor = vec4(fragment_color, 1);\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const SimpleVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"in vec3 vertex_color;\n"
"uniform mat4 MVP;\n"
"\n"
"out vec3 fragment_color;\n"
"\n"
"void main()\n"
"{\n"
"    gl_Position = MVP * vec4(vertex_position, 1);\n"
"    fragment_color = vertex_color;\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
// clang-format off
namespace open3d {

namespace visualization {

namespace glsl {

const char * const ImageVertexShader = 
"#version 330\n"
"\n"
"in vec3 vertex_position;\n"
"in vec2 vertex_UV;\n"
"\n"
"out vec2 UV;\n"
"\n"
"uniform vec3 vertex_scale;\n"
"\n"
"void main()\n"
"{\n"
"    gl_Position = vec4(vertex_position * vertex_scale, 1);\n"
"    UV = vertex_UV;\n"
"}\n"
;

}  // namespace open3d::glsl

}  // namespace open3d::visualization

}  // namespace open3d

// clang-format on
