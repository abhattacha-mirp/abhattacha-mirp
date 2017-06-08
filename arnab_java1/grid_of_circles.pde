int displayWidth = 800;
int displayHeight = 400;
int ellipseColor=color(145,0,205);
int radius=10;
int numcircles=10;
float circleGap=2.5*radius;
void setup(){
  size(displayWidth, displayHeight);
}
void draw(){
  background(255);
  fill(ellipseColor);
  drawCircles(radius, numcircles);
}
void drawCircles(float R, float N)
{
    ellipse(mouseX, mouseY, 2*R, 2*R);
}