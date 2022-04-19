
# Outdated, please see link below
https://github.com/OlDiggums/Portfolio_NormalsRaymarching

# Portfolio_PrimitiveRaymarching
Goal of this project is to implement a very basic implementation of Raymarching. The current implementation does not implement UV's or lighting. At this point it is simply a boolean image of wheter the ray has intersected a sphere or not.


## Math Involved
### Signed distance function of sphere --- <a href="https://michaelwalczyk.com/blog-ray-marching.html" title="Raymarching - Michael Walczyk">source</a>       
For this to work, we need to use the signed distance function of a sphere <br />
  `d: distance from sphere` <br />
  `p: point in space` <br />
  `c: center of sphere` <br />
  `r: radius of sphere` <br />
  `distance: distance from sphere` <br />
<br />
![F1]  

<!-- 
![Output Result](./Output.png) -->


### Ray direction --- <a href="https://www.scratchapixel.com/lessons/3d-basic-rendering/ray-tracing-generating-camera-rays#:~:text=Using%20ray%2Dtracing%20to%20compute,is%20also%20called%20ray%2Dcasting.&text=Producing%20an%20image%20using%20ray,any%20surface%20in%20the%20scene." title="Ray-Tracing: Generating Camera Rays">source</a>
  `position: initial camera position` <br />
  `w: width of the image in pixels` <br />
  `h: width of the image in pixels` <br />
  `FOV: Field of view in degrees` <br />
  `a: aspect ratio of the image (w/h assuming w>h)` <br />
  `x: x position of pixel` <br />
  `y: y position of pixel` <br />
  `Px: x position of pixel in camera space` <br />
  `Py: y position of pixel in camera space` <br />
  `d: difference between point in space and initial position` <br />
  `dir: direction of the ray` <br />
<br />
![F2]  <br />
<br />
![F3]  <br />
<br />
![F4]   <br />
 <br />
 ![F5]  <br />
 <br />




[F1]: https://latex.codecogs.com/png.image?\dpi{110}distance=\left\|p-c&space;\right\|-r
[F2]: https://latex.codecogs.com/png.image?\dpi{110}Px=2*((\frac{x&plus;0.5}{width})-1)*tan(\frac{FOV}{2}*\frac{\pi}{180})*a
[F3]: https://latex.codecogs.com/png.image?\dpi{110}Py&space;=&space;(1-2*\frac{y&plus;0.5}{height})*tan(\frac{FOV}{2}*\frac{\pi}{180})
[F4]: https://latex.codecogs.com/png.image?\dpi{110}d&space;=&space;(Px,Py,-1)-position
[F5]: https://latex.codecogs.com/png.image?\dpi{110}dir&space;=&space;\frac{d}{\left|&space;d\right|}


### Result
![](./Output.png)
