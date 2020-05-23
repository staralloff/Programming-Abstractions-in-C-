/*
 * File: gwindow.h
 * ---------------
 * This file exports functions for generating pseudorandom numbers.
 */

#ifndef _random_h
#define _random_h

/*
 * Function: GWindow
 * Usage: gw = GWindow(width, height);
 * -----------------------------------
 * This method will draw a window, defaut size will be 500 * 300 px.
 * This method is a struction method
 */

GWindow GWindow(double width, double height);

/*
 * Function: drawLine
 * Usage: gw.drawLine(x0, y0, x1, y1);
 * -----------------------------------
 * This method will draw a line from point(x0, y0) to point(x1, y1).
 */

void drawLine(double x0, double y0, double x1, double y1);

/*
 * Function: drawPolarLine
 * Usage: gw.drawPolarLine(x, y, r, theta);
 * ----------------------------------------
 * This method draw a line which length is r px, between the line and x line, the included
 * angle will be theta.
 */

void drawPolarLine(double x, double y, double r, double theta);

/*
 * Function: drawRect
 * Usage: gw.drawRect(x, y, width, height);
 * ----------------------------------------
 * This method draw a Rectangle.
 */

void drawRect(double x, double y, double width, double height);

/*
 * Function: fillRect
 * Usage: gw.fillRect(x, y, width, height);
 * ----------------------------------------
 * This method fill a Rectangle with arguments which have been given.
 */

void fillRect(double x, double y, double width, double height);

/*
 * Function: drawOval
 * Usage: gw.drawOval(x, y, width, height);
 * ----------------------------------------
 * This method draw an inscribed ellipse in the rectangle which arguments have been given.
 */

void drawOval(double x, double y, double width, double height);

/*
 * Function: fillOval
 * Usage: gw.fillOval(x, y, width, height);
 * ----------------------------------------
 * This method fill an inscribed ellipse in the rectangle which arguments have been given.
 */

void fillOval(double x, double y, double width, double height);

/*
 * Function: setColor
 * Usage: gw.setColor(color);
 * --------------------------
 * This method set color in current area.
 */

void setColor(string color);

/*
 * Function: getWidth
 * Usage: gw.getWidth();
 * ---------------------
 * This method return window's width.
 */

void getWidth();

/*
 * Function: getHeight();
 * ----------------------
 * This method return window's height.
 */

void getHeight();
