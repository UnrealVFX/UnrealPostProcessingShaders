# Unreal Post Processing Shaders

This is an open source Asset Pack for Unreal Engine 5, that implements different post-processing effects. Most of the code for these effects was implemented using HLSL and can be seen in the "Content/PPFree/Shaders" folder.

## Installation

Clone this project and copy the PPFree folder into the "Plugins" folder of you Unreal Engine project. After that, build your project and open it up again.

If the Material and Material Instances in the Plugin are not not available for selection, remember to check if the option "Show Plugin Content" is enabled.

## Implemented Effects

- Outline (Color the borders of 3D objects)

![Outline Effect](/Images/Outline.png)

- Edge Detection (Color the borders and paint everything else in another color)

![Outline Effect](/Images/EdgeDetection2.png)

- Kuwahara Filter (Oil painting filter)

![Outline Effect](/Images/Kuwahara_InGame.png)

- Dithering (Uses noise to make color depth appear bigger, used in old retro games)

![Outline Effect](/Images/dithering.png)

- CRT (Effect that makes screen look like a CRT monitor)

![Outline Effect](/Images/crt_effect.png)

- Pixelate (Render pixels in a more visible way)

![Outline Effect](/Images/Pixelate.png)