/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/* This header file includes all multi language strings which need display */
#ifndef DALI_DEMO_STRINGS_H
#define DALI_DEMO_STRINGS_H

#ifdef INTERNATIONALIZATION_ENABLED
#include <libintl.h>
#endif

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define DALI_DEMO_DOMAIN_LOCAL "dali-demo"

#define DALI_DEMO_STR_EMPTY _("")

#ifdef INTERNATIONALIZATION_ENABLED

#define DALI_DEMO_STR_TITLE_ANIMATED_IMAGES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ANIMATED_IMAGES")
#define DALI_DEMO_STR_TITLE_ANIMATED_SHAPES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ANIMATED_SHAPES")
#define DALI_DEMO_STR_TITLE_ANIMATED_VECTOR_IMAGES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ANIMATED_VECTOR_IMAGES")
#define DALI_DEMO_STR_TITLE_ARC_VISUAL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ARC_VISUAL")
#define DALI_DEMO_STR_TITLE_BASIC_LIGHT dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BASIC_LIGHT")
#define DALI_DEMO_STR_TITLE_BENCHMARK dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BENCHMARK")
#define DALI_DEMO_STR_TITLE_BEZIER_CURVE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BEZIER_CURVE")
#define DALI_DEMO_STR_TITLE_BLOCKS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BLOCKS")
#define DALI_DEMO_STR_TITLE_BLOOM_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BLOOM_VIEW")
#define DALI_DEMO_STR_TITLE_BUBBLES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BUBBLES")
#define DALI_DEMO_STR_TITLE_BUTTONS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BUTTONS")
#define DALI_DEMO_STR_TITLE_CANVAS_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CANVAS_VIEW")
#define DALI_DEMO_STR_TITLE_CALL_ACTIVE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CALL_ACTIVE")
#define DALI_DEMO_STR_TITLE_CARD_ACTIVE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CARD_ACTIVE")
#define DALI_DEMO_STR_TITLE_CLIPPING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CLIPPING")
#define DALI_DEMO_STR_TITLE_CLIPPING_DRAW_ORDER dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CLIPPING_DRAW_ORDER")
#define DALI_DEMO_STR_TITLE_COLOR_TRANSITION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_COLOR_TRANSITION")
#define DALI_DEMO_STR_TITLE_COLOR_VISUAL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_COLOR_VISUAL")
#define DALI_DEMO_STR_TITLE_DEFERRED_SHADING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_DEFERRED_SHADING")
#define DALI_DEMO_STR_TITLE_GAUSSIAN_BLUR_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_GAUSSIAN_BLUR_VIEW")
#define DALI_DEMO_STR_TITLE_GESTURES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_GESTURES")
#define DALI_DEMO_STR_TITLE_COLOR_GRADIENT dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_COLOR_GRADIENT")
#define DALI_DEMO_STR_TITLE_COMPRESSED_TEXTURE_FORMATS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_COMPRESSED_TEXTURE_FORMATS")
#define DALI_DEMO_STR_TITLE_CONTACT_CARDS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CONTACT_CARDS")
#define DALI_DEMO_STR_TITLE_CUBE_TRANSITION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CUBE_TRANSITION")
#define DALI_DEMO_STR_TITLE_DISSOLVE_TRANSITION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_DISSOLVE_TRANSITION")
#define DALI_DEMO_STR_TITLE_DRAG_AND_DROP dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_DRAG_AND_DROP")
#define DALI_DEMO_STR_TITLE_EFFECTS_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_EFFECTS_VIEW")
#define DALI_DEMO_STR_TITLE_EMOJI_TEXT dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_EMOJI_TEXT")
#define DALI_DEMO_STR_TITLE_FPP_GAME dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_FPP_GAME")
#define DALI_DEMO_STR_TITLE_FLEXBOX_PLAYGROUND dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_FLEXBOX_PLAYGROUND")
#define DALI_DEMO_STR_TITLE_FOCUS_INTEGRATION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_FOCUS_INTEGRATION")
#define DALI_DEMO_STR_TITLE_FRAME_CALLBACK dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_FRAME_CALLBACK")
#define DALI_DEMO_STR_TITLE_HELLO_WORLD dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_HELLO_WORLD")
#define DALI_DEMO_STR_TITLE_HOMESCREEN dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_HOMESCREEN")
#define DALI_DEMO_STR_TITLE_IMAGE_POLICIES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_POLICIES")
#define DALI_DEMO_STR_TITLE_IMAGE_FITTING_SAMPLING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_FITTING_SAMPLING")
#define DALI_DEMO_STR_TITLE_IMAGE_SCALING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_SCALING")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_ALPHA_BLENDING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW_ALPHA_BLENDING")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_PIXEL_AREA dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW_PIXEL_AREA")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_SVG dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW_SVG")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_URL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW_URL")
#define DALI_DEMO_STR_TITLE_ITEM_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ITEM_VIEW")
#define DALI_DEMO_STR_TITLE_LIGHTS_AND_SHADOWS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_LIGHTS_AND_SHADOWS")
#define DALI_DEMO_STR_TITLE_LINE_MESH dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_LINE_MESH")
#define DALI_DEMO_STR_TITLE_MAGNIFIER dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MAGNIFIER")
#define DALI_DEMO_STR_TITLE_MESH_MORPH dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MESH_MORPH")
#define DALI_DEMO_STR_TITLE_MESH_VISUAL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MESH_VISUAL")
#define DALI_DEMO_STR_TITLE_METABALL_EXPLOSION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_METABALL_EXPLOSION")
#define DALI_DEMO_STR_TITLE_METABALL_REFRAC dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_METABALL_REFRAC")
#define DALI_DEMO_STR_TITLE_MOTION_BLUR dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MOTION_BLUR")
#define DALI_DEMO_STR_TITLE_MOTION_STRETCH dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MOTION_STRETCH")
#define DALI_DEMO_STR_TITLE_NATIVE_IMAGE_SOURCE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_NATIVE_IMAGE_SOURCE")
#define DALI_DEMO_STR_TITLE_NEGOTIATE_SIZE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_NEGOTIATE_SIZE")
#define DALI_DEMO_STR_TITLE_PAGE_TURN dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PAGE_TURN")
#define DALI_DEMO_STR_TITLE_PARTICLES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PARTICLES")
#define DALI_DEMO_STR_TITLE_PBR dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PBR")
#define DALI_DEMO_STR_TITLE_PERF_SCROLL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PERF_SCROLL")
#define DALI_DEMO_STR_TITLE_POINT_MESH dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_POINT_MESH")
#define DALI_DEMO_STR_TITLE_POPUP dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_POPUP")
#define DALI_DEMO_STR_TITLE_PIVOT dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PIVOT")
#define DALI_DEMO_STR_TITLE_PRE_RENDER_CALLBACK dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PRE_RENDER_CALLBACK")
#define DALI_DEMO_STR_TITLE_PRIMITIVE_SHAPES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PRIMITIVE_SHAPES")
#define DALI_DEMO_STR_TITLE_PROGRESS_BAR dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PROGRESS_BAR")
#define DALI_DEMO_STR_TITLE_PROPERTY_NOTIFICATION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PROPERTY_NOTIFICATION")
#define DALI_DEMO_STR_TITLE_REFLECTION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_REFLECTION")
#define DALI_DEMO_STR_TITLE_REFRACTION dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_REFRACTION")
#define DALI_DEMO_STR_TITLE_REMOTE_IMAGE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_REMOTE_IMAGE")
#define DALI_DEMO_STR_TITLE_RENDERING_DRAW_LINE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERING_DRAW_LINE")
#define DALI_DEMO_STR_TITLE_RENDERING_DRAW_TRIANGLE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERING_DRAW_TRIANGLE")
#define DALI_DEMO_STR_TITLE_RENDERING_DRAW_CUBE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERING_DRAW_CUBE")
#define DALI_DEMO_STR_TITLE_RENDERING_TEXTURED_CUBE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERING_TEXTURED_CUBE")
#define DALI_DEMO_STR_TITLE_RENDERING_RADIAL_PROGRESS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERING_RADIAL_PROGRESS")
#define DALI_DEMO_STR_TITLE_RENDERING_RAY_MARCHING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERING_RAY_MARCHING")
#define DALI_DEMO_STR_TITLE_RENDERER_STENCIL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERER_STENCIL")
#define DALI_DEMO_STR_TITLE_SCENE_LOADER dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SCENE_LOADER")
#define DALI_DEMO_STR_TITLE_SCRIPT_BASED_UI dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SCRIPT_BASED_UI")
#define DALI_DEMO_STR_TITLE_SCROLL_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SCROLL_VIEW")
#define DALI_DEMO_STR_TITLE_SIMPLE_SCROLL_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SIMPLE_SCROLL_VIEW")
#define DALI_DEMO_STR_TITLE_SIMPLE_VISUALS_CONTROL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SIMPLE_VISUALS_CONTROL")
#define DALI_DEMO_STR_TITLE_SKYBOX dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SKYBOX")
#define DALI_DEMO_STR_TITLE_SPARKLE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SPARKLE")
#define DALI_DEMO_STR_TITLE_STYLING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_STYLING")
#define DALI_DEMO_STR_TITLE_SUPER_BLUR_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SUPER_BLUR_VIEW")
#define DALI_DEMO_STR_TITLE_TEXTURED_MESH dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXTURED_MESH")
#define DALI_DEMO_STR_TITLE_TEXT_EDITOR dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_EDITOR")
#define DALI_DEMO_STR_TITLE_TEXT_FIELD dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_FIELD")
#define DALI_DEMO_STR_TITLE_TEXT_FONTS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_FONTS")
#define DALI_DEMO_STR_TITLE_TEXT_LABEL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_LABEL")
#define DALI_DEMO_STR_TITLE_TEXT_MEMORY_PROFILING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_MEMORY_PROFILING")
#define DALI_DEMO_STR_TITLE_TEXT_OVERLAP dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_OVERLAP")
#define DALI_DEMO_STR_TITLE_TEXT_LABEL_MULTI_LANGUAGE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_LABEL_MULTI_LANGUAGE")
#define DALI_DEMO_STR_TITLE_TEXT_SCROLLING dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_SCROLLING")
#define DALI_DEMO_STR_TITLE_TILT_SENSOR dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TILT_SENSOR")
#define DALI_DEMO_STR_TITLE_TOOLTIP dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TOOLTIP")
#define DALI_DEMO_STR_TITLE_VISUAL_FITTING_MODE dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_VISUAL_FITTING_MODE")
#define DALI_DEMO_STR_TITLE_VISUAL_TRANSITIONS dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_VISUAL_TRANSITIONS")
#define DALI_DEMO_STR_TITLE_WAVES dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_WAVES")
#define DALI_DEMO_STR_TITLE_WEB_VIEW dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_WEB_VIEW")
#define DALI_DEMO_STR_TITLE_TEXT_RENDERER dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_RENDERER")
#define DALI_DEMO_STR_TITLE_TEXT_VISUAL dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_VISUAL")
#define DALI_DEMO_STR_TITLE_TEXT_LABEL_BITMAP_FONT dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_LABEL_BITMAP_FONT")

#else // !INTERNATIONALIZATION_ENABLED

#define DALI_DEMO_STR_TITLE_ANIMATED_IMAGES "Animated Images"
#define DALI_DEMO_STR_TITLE_ANIMATED_SHAPES "Animated Shapes"
#define DALI_DEMO_STR_TITLE_ANIMATED_VECTOR_IMAGES "Animated Vector Images"
#define DALI_DEMO_STR_TITLE_ARC_VISUAL "Arc Visual"
#define DALI_DEMO_STR_TITLE_BASIC_LIGHT "Basic Light"
#define DALI_DEMO_STR_TITLE_BENCHMARK "ImageView Benchmark"
#define DALI_DEMO_STR_TITLE_BEZIER_CURVE "Alpha Function Bezier Curve"
#define DALI_DEMO_STR_TITLE_BLOCKS "Blocks"
#define DALI_DEMO_STR_TITLE_BLOOM_VIEW "Bloom"
#define DALI_DEMO_STR_TITLE_BUBBLES "Bubbles"
#define DALI_DEMO_STR_TITLE_BUTTONS "Buttons"
#define DALI_DEMO_STR_TITLE_CANVAS_VIEW "Canvas View"
#define DALI_DEMO_STR_TITLE_CALL_ACTIVE "Call Active"
#define DALI_DEMO_STR_TITLE_CARD_ACTIVE "Card Active"
#define DALI_DEMO_STR_TITLE_CLIPPING "Clipping"
#define DALI_DEMO_STR_TITLE_CLIPPING_DRAW_ORDER "Clipping Draw Order"
#define DALI_DEMO_STR_TITLE_COLOR_TRANSITION "Color Transition"
#define DALI_DEMO_STR_TITLE_COLOR_VISUAL "Color Visual"
#define DALI_DEMO_STR_TITLE_GAUSSIAN_BLUR_VIEW "Gaussian Blur"
#define DALI_DEMO_STR_TITLE_GESTURES "Gestures"
#define DALI_DEMO_STR_TITLE_COLOR_GRADIENT "Color Gradient"
#define DALI_DEMO_STR_TITLE_COMPRESSED_TEXTURE_FORMATS "Compressed Texture Formats"
#define DALI_DEMO_STR_TITLE_CONTACT_CARDS "Contact Cards"
#define DALI_DEMO_STR_TITLE_CUBE_TRANSITION "Cube Effect"
#define DALI_DEMO_STR_TITLE_DEFERRED_SHADING "Deferred Shading"
#define DALI_DEMO_STR_TITLE_DISSOLVE_TRANSITION "Dissolve Effect"
#define DALI_DEMO_STR_TITLE_DRAG_AND_DROP "Drag and Drop"
#define DALI_DEMO_STR_TITLE_EFFECTS_VIEW "Effects View"
#define DALI_DEMO_STR_TITLE_EMOJI_TEXT "Emoji Text"
#define DALI_DEMO_STR_TITLE_FPP_GAME "First Person Game"
#define DALI_DEMO_STR_TITLE_FLEXBOX_PLAYGROUND "Flexbox Playground"
#define DALI_DEMO_STR_TITLE_FOCUS_INTEGRATION "Focus Integration"
#define DALI_DEMO_STR_TITLE_FRAME_CALLBACK "Frame Callback"
#define DALI_DEMO_STR_TITLE_HELLO_WORLD "Hello World"
#define DALI_DEMO_STR_TITLE_HOMESCREEN "Homescreen Benchmark"
#define DALI_DEMO_STR_TITLE_IMAGE_POLICIES "Image Policies"
#define DALI_DEMO_STR_TITLE_IMAGE_FITTING_SAMPLING "Image Fitting and Sampling"
#define DALI_DEMO_STR_TITLE_IMAGE_SCALING "Image Scaling Grid"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW "Image View"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_ALPHA_BLENDING "Image View Alpha Blending"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_PIXEL_AREA "Image View Pixel Area"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_SVG "Image View SVG"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_URL "Image View URL"
#define DALI_DEMO_STR_TITLE_ITEM_VIEW "Item View"
#define DALI_DEMO_STR_TITLE_LIGHTS_AND_SHADOWS "Lights and shadows"
#define DALI_DEMO_STR_TITLE_LINE_MESH "Mesh Line"
#define DALI_DEMO_STR_TITLE_MAGNIFIER "Magnifier"
#define DALI_DEMO_STR_TITLE_MESH_MORPH "Mesh Morph"
#define DALI_DEMO_STR_TITLE_MESH_VISUAL "Mesh Visual"
#define DALI_DEMO_STR_TITLE_METABALL_EXPLOSION "Metaball Explosion"
#define DALI_DEMO_STR_TITLE_METABALL_REFRAC "Metaball Refractions"
#define DALI_DEMO_STR_TITLE_MOTION_BLUR "Motion Blur"
#define DALI_DEMO_STR_TITLE_MOTION_STRETCH "Motion Stretch"
#define DALI_DEMO_STR_TITLE_NATIVE_IMAGE_SOURCE "Native Image Source"
#define DALI_DEMO_STR_TITLE_NEGOTIATE_SIZE "Negotiate Size"
#define DALI_DEMO_STR_TITLE_PAGE_TURN "Page Turn"
#define DALI_DEMO_STR_TITLE_PARTICLES "Particles"
#define DALI_DEMO_STR_TITLE_PBR "PBR"
#define DALI_DEMO_STR_TITLE_PERF_SCROLL "Scrolling Performance"
#define DALI_DEMO_STR_TITLE_POINT_MESH "Point Mesh"
#define DALI_DEMO_STR_TITLE_POPUP "Popup"
#define DALI_DEMO_STR_TITLE_PIVOT "Pivot"
#define DALI_DEMO_STR_TITLE_PRE_RENDER_CALLBACK "Pre Render Callback"
#define DALI_DEMO_STR_TITLE_PRIMITIVE_SHAPES "Primitive Shapes"
#define DALI_DEMO_STR_TITLE_PROGRESS_BAR "Progress Bar"
#define DALI_DEMO_STR_TITLE_PROPERTY_NOTIFICATION "Property Notification"
#define DALI_DEMO_STR_TITLE_REFLECTION "Reflection"
#define DALI_DEMO_STR_TITLE_REFRACTION "Refract Effect"
#define DALI_DEMO_STR_TITLE_REMOTE_IMAGE "Remote Image"
#define DALI_DEMO_STR_TITLE_RENDERING_DRAW_LINE "Draw Line"
#define DALI_DEMO_STR_TITLE_RENDERING_DRAW_TRIANGLE "Draw Triangle"
#define DALI_DEMO_STR_TITLE_RENDERING_DRAW_CUBE "Draw Cube"
#define DALI_DEMO_STR_TITLE_RENDERING_TEXTURED_CUBE "Textured Cube"
#define DALI_DEMO_STR_TITLE_RENDERING_RAY_MARCHING "Ray Marching"
#define DALI_DEMO_STR_TITLE_RENDERING_RADIAL_PROGRESS "Radial Progress"
#define DALI_DEMO_STR_TITLE_RENDERER_STENCIL "Renderer Stencils"
#define DALI_DEMO_STR_TITLE_SCENE_LOADER "Scene Loader"
#define DALI_DEMO_STR_TITLE_SCRIPT_BASED_UI "Script Based UI"
#define DALI_DEMO_STR_TITLE_SCROLL_VIEW "Scroll View"
#define DALI_DEMO_STR_TITLE_SIMPLE_SCROLL_VIEW "Simple Scroll View"
#define DALI_DEMO_STR_TITLE_SIMPLE_VISUALS_CONTROL "Simple Visuals Control"
#define DALI_DEMO_STR_TITLE_SKYBOX "Skybox"
#define DALI_DEMO_STR_TITLE_SPARKLE "Sparkle"
#define DALI_DEMO_STR_TITLE_STYLING "Styling"
#define DALI_DEMO_STR_TITLE_SUPER_BLUR_VIEW "Super Blur"
#define DALI_DEMO_STR_TITLE_TEXTURED_MESH "Mesh Texture"
#define DALI_DEMO_STR_TITLE_TEXT_EDITOR "Text Editor"
#define DALI_DEMO_STR_TITLE_TEXT_FIELD "Text Field"
#define DALI_DEMO_STR_TITLE_TEXT_FONTS "Text Fonts"
#define DALI_DEMO_STR_TITLE_TEXT_LABEL "Text Label"
#define DALI_DEMO_STR_TITLE_TEXT_MEMORY_PROFILING "Text Memory Profiling"
#define DALI_DEMO_STR_TITLE_TEXT_OVERLAP "Text Overlap"
#define DALI_DEMO_STR_TITLE_TEXT_LABEL_MULTI_LANGUAGE "Text Scripts"
#define DALI_DEMO_STR_TITLE_TEXT_SCROLLING "Text Scrolling"
#define DALI_DEMO_STR_TITLE_TILT_SENSOR "Tilt Sensor"
#define DALI_DEMO_STR_TITLE_TOOLTIP "Tooltip"
#define DALI_DEMO_STR_TITLE_VISUAL_FITTING_MODE "Visual Fitting Mode"
#define DALI_DEMO_STR_TITLE_VISUAL_TRANSITIONS "Visual Transitions"
#define DALI_DEMO_STR_TITLE_WAVES "Waves"
#define DALI_DEMO_STR_TITLE_WEB_VIEW "Web View"
#define DALI_DEMO_STR_TITLE_TEXT_RENDERER "Text Renderer"
#define DALI_DEMO_STR_TITLE_TEXT_VISUAL "Text Visual"
#define DALI_DEMO_STR_TITLE_TEXT_LABEL_BITMAP_FONT "Text Bitmap Font"
#endif

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DALI_DEMO_STRINGS_H
