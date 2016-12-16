/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
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

#include <libintl.h>

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define DALI_DEMO_DOMAIN_LOCAL "dali-demo"

#define DALI_DEMO_STR_EMPTY _("")

#ifdef INTERNATIONALIZATION_ENABLED

#define DALI_DEMO_STR_TITLE_ANIMATED_IMAGES             dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ANIMATED_IMAGES")
#define DALI_DEMO_STR_TITLE_ANIMATED_SHAPES             dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ANIMATED_SHAPES")
#define DALI_DEMO_STR_TITLE_BLOCKS                      dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BLOCKS")
#define DALI_DEMO_STR_TITLE_BUBBLES                     dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BUBBLES")
#define DALI_DEMO_STR_TITLE_BUTTONS                     dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_BUTTONS")
#define DALI_DEMO_STR_TITLE_COLOR_GRADIENT              dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_COLOR_GRADIENT")
#define DALI_DEMO_STR_TITLE_CONTACT_CARDS               dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CONTACT_CARDS")
#define DALI_DEMO_STR_TITLE_CUBE_TRANSITION             dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_CUBE_TRANSITION")
#define DALI_DEMO_STR_TITLE_DISSOLVE_TRANSITION         dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_DISSOLVE_TRANSITION")
#define DALI_DEMO_STR_TITLE_EFFECTS_VIEW                dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_EFFECTS_VIEW")
#define DALI_DEMO_STR_TITLE_EMOJI_TEXT                  dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_EMOJI_TEXT")
#define DALI_DEMO_STR_TITLE_FLEXBOX_PLAYGROUND          dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_FLEXBOX_PLAYGROUND")
#define DALI_DEMO_STR_TITLE_IMAGE_FITTING_SAMPLING      dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_FITTING_SAMPLING")
#define DALI_DEMO_STR_TITLE_IMAGE_SCALING               dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_SCALING")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW                  dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_ALPHA_BLENDING   dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW_ALPHA_BLENDING")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_PIXEL_AREA       dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW_PIXEL_AREA")
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_SVG              dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_IMAGE_VIEW_SVG")
#define DALI_DEMO_STR_TITLE_ITEM_VIEW                   dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_ITEM_VIEW")
#define DALI_DEMO_STR_TITLE_LIGHTS_AND_SHADOWS          dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_LIGHTS_AND_SHADOWS")
#define DALI_DEMO_STR_TITLE_LINE_MESH                   dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_LINE_MESH")
#define DALI_DEMO_STR_TITLE_LOGGING                     dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_LOGGING")
#define DALI_DEMO_STR_TITLE_MAGNIFIER                   dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MAGNIFIER")
#define DALI_DEMO_STR_TITLE_MESH_MORPH                  dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MESH_MORPH")
#define DALI_DEMO_STR_TITLE_MESH_SORTING                dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MESH_SORTING")
#define DALI_DEMO_STR_TITLE_MESH_VISUAL                 dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MESH_VISUAL")
#define DALI_DEMO_STR_TITLE_METABALL_EXPLOSION          dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_METABALL_EXPLOSION")
#define DALI_DEMO_STR_TITLE_METABALL_REFRAC             dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_METABALL_REFRAC")
#define DALI_DEMO_STR_TITLE_MOTION_BLUR                 dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MOTION_BLUR")
#define DALI_DEMO_STR_TITLE_MOTION_STRETCH              dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_MOTION_STRETCH")
#define DALI_DEMO_STR_TITLE_NATIVE_IMAGE_SOURCE         dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_NATIVE_IMAGE_SOURCE")
#define DALI_DEMO_STR_TITLE_NEGOTIATE_SIZE              dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_NEGOTIATE_SIZE")
#define DALI_DEMO_STR_TITLE_PAGE_TURN_VIEW              dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PAGE_TURN_VIEW")
#define DALI_DEMO_STR_TITLE_POPUP                       dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_POPUP")
#define DALI_DEMO_STR_TITLE_PROGRESS_BAR                dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PROGRESS_BAR")
#define DALI_DEMO_STR_TITLE_PRIMITIVE_SHAPES            dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_PRIMITIVE_SHAPES")
#define DALI_DEMO_STR_TITLE_REFRACTION                  dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_REFRACTION")
#define DALI_DEMO_STR_TITLE_RENDERER_STENCIL            dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_RENDERER_STENCIL")
#define DALI_DEMO_STR_TITLE_SCRIPT_BASED_UI             dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SCRIPT_BASED_UI")
#define DALI_DEMO_STR_TITLE_SCROLL_VIEW                 dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SCROLL_VIEW")
#define DALI_DEMO_STR_TITLE_SPARKLE                     dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SPARKLE")
#define DALI_DEMO_STR_TITLE_STYLING                     dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_STYLING")
#define DALI_DEMO_STR_TITLE_SUPER_BLUR_BLOOM            dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_SUPER_BLUR_BLOOM")
#define DALI_DEMO_STR_TITLE_TEXTURED_MESH               dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXTURED_MESH")
#define DALI_DEMO_STR_TITLE_TEXT_EDITOR                 dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_EDITOR")
#define DALI_DEMO_STR_TITLE_TEXT_FIELD                  dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_FIELD")
#define DALI_DEMO_STR_TITLE_TEXT_LABEL                  dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_LABEL")
#define DALI_DEMO_STR_TITLE_TEXT_LABEL_MULTI_LANGUAGE   dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_LABEL_MULTI_LANGUAGE")
#define DALI_DEMO_STR_TITLE_TEXT_SCROLLING              dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TEXT_SCROLLING")
#define DALI_DEMO_STR_TITLE_TILT_SENSOR                 dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_TILT_SENSOR")
#define DALI_DEMO_STR_TITLE_FPP_GAME                    dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_FPP_GAME")
#define DALI_DEMO_STR_TITLE_VISUAL_TRANSITIONS          dgettext(DALI_DEMO_DOMAIN_LOCAL, "DALI_DEMO_STR_TITLE_VISUAL_TRANSITIONS")

#else // !INTERNATIONALIZATION_ENABLED

#define DALI_DEMO_STR_TITLE_ANIMATED_IMAGES             "Animated Images"
#define DALI_DEMO_STR_TITLE_ANIMATED_SHAPES             "Animated Shapes"
#define DALI_DEMO_STR_TITLE_BLOCKS                      "Blocks"
#define DALI_DEMO_STR_TITLE_BUBBLES                     "Bubbles"
#define DALI_DEMO_STR_TITLE_BUTTONS                     "Buttons"
#define DALI_DEMO_STR_TITLE_COLOR_GRADIENT              "Color Gradient"
#define DALI_DEMO_STR_TITLE_CONTACT_CARDS               "Contact Cards"
#define DALI_DEMO_STR_TITLE_CUBE_TRANSITION             "Cube Effect"
#define DALI_DEMO_STR_TITLE_DISSOLVE_TRANSITION         "Dissolve Effect"
#define DALI_DEMO_STR_TITLE_EFFECTS_VIEW                "Effects View"
#define DALI_DEMO_STR_TITLE_EMOJI_TEXT                  "Emoji Text"
#define DALI_DEMO_STR_TITLE_FLEXBOX_PLAYGROUND          "Flexbox Playground"
#define DALI_DEMO_STR_TITLE_IMAGE_FITTING_SAMPLING      "Image Fitting and Sampling"
#define DALI_DEMO_STR_TITLE_IMAGE_SCALING               "Image Scaling Grid"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW                  "Image View"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_ALPHA_BLENDING   "Image View Alpha Blending"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_PIXEL_AREA       "Image View Pixel Area"
#define DALI_DEMO_STR_TITLE_IMAGE_VIEW_SVG              "Image View SVG"
#define DALI_DEMO_STR_TITLE_ITEM_VIEW                   "Item View"
#define DALI_DEMO_STR_TITLE_LIGHTS_AND_SHADOWS          "Lights and shadows"
#define DALI_DEMO_STR_TITLE_LINE_MESH                   "Mesh Line"
#define DALI_DEMO_STR_TITLE_LOGGING                     "Logging"
#define DALI_DEMO_STR_TITLE_MAGNIFIER                   "Magnifier"
#define DALI_DEMO_STR_TITLE_MESH_MORPH                  "Mesh Morph"
#define DALI_DEMO_STR_TITLE_MESH_SORTING                "Mesh Sorting"
#define DALI_DEMO_STR_TITLE_MESH_VISUAL                 "Mesh Visual"
#define DALI_DEMO_STR_TITLE_METABALL_EXPLOSION          "Metaball Explosion"
#define DALI_DEMO_STR_TITLE_METABALL_REFRAC             "Metaball Refractions"
#define DALI_DEMO_STR_TITLE_MOTION_BLUR                 "Motion Blur"
#define DALI_DEMO_STR_TITLE_MOTION_STRETCH              "Motion Stretch"
#define DALI_DEMO_STR_TITLE_NATIVE_IMAGE_SOURCE         "Native Image Source"
#define DALI_DEMO_STR_TITLE_NEGOTIATE_SIZE              "Negotiate Size"
#define DALI_DEMO_STR_TITLE_PAGE_TURN_VIEW              "Page Turn View"
#define DALI_DEMO_STR_TITLE_POPUP                       "Popup"
#define DALI_DEMO_STR_TITLE_PRIMITIVE_SHAPES            "Primitive Shapes"
#define DALI_DEMO_STR_TITLE_REFRACTION                  "Refract Effect"
#define DALI_DEMO_STR_TITLE_RENDERER_STENCIL            "Renderer Stencils"
#define DALI_DEMO_STR_TITLE_SCRIPT_BASED_UI             "Script Based UI"
#define DALI_DEMO_STR_TITLE_SCROLL_VIEW                 "Scroll View"
#define DALI_DEMO_STR_TITLE_SPARKLE                     "Sparkle"
#define DALI_DEMO_STR_TITLE_STYLING                     "Styling"
#define DALI_DEMO_STR_TITLE_SUPER_BLUR_BLOOM            "Super Blur and Bloom"
#define DALI_DEMO_STR_TITLE_TEXTURED_MESH               "Mesh Texture"
#define DALI_DEMO_STR_TITLE_TEXT_EDITOR                 "Text Editor"
#define DALI_DEMO_STR_TITLE_TEXT_FIELD                  "Text Field"
#define DALI_DEMO_STR_TITLE_TEXT_LABEL                  "Text Label"
#define DALI_DEMO_STR_TITLE_TEXT_LABEL_MULTI_LANGUAGE   "Text Scripts"
#define DALI_DEMO_STR_TITLE_TEXT_SCROLLING              "Text Scrolling"
#define DALI_DEMO_STR_TITLE_TILT_SENSOR                 "Tilt Sensor"
#define DALI_DEMO_STR_TITLE_PROGRESS_BAR                "Progress Bar"
#define DALI_DEMO_STR_TITLE_FPP_GAME                    "First Person Game"
#define DALI_DEMO_STR_TITLE_VISUAL_TRANSITIONS          "Visual Transitions"
#endif

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // DALI_DEMO_STRINGS_H
