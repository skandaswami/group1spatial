/*---------------------------------------------------------------------------------
* File: RobustGeometricPrimitives2D.h
-----------------------------------------------------------------------------------
- Description:
- 
- This file contains the definitions of the Spatial datatypes Poi2D,Seg2D,
- HalfSeg2D,AttrHalfSeg2D,Rect2D and SimplePolygon2D and additional helper
- functions.
- 
- Created by:
- Prerna Mandal, Sivasubramanian Kandaswami, Umar Majeed, Jyotsana Walia
------------------------------------------------------------------------------------*/

#ifndef ROBUSTGEOMETRICPRIMITIVES2D_H_ 
#define ROBUSTGEOMETRICPRIMITIVES2D_H_

#include <iostream>
#include <vector>
#include "Number.h"



class AttrHalfSeg2D;
class HalfSeg2D;

/*
* Definiton of Poi2D 
*/
class Poi2D
{
public:
	/*Member Variables */
	Number x;
	Number y;
	
	/*Member functions */
	Poi2D();
	Poi2D(const Number& x, const Number& y);
	Poi2D(const Poi2D& obj);
	Poi2D(Poi2D&& obj);
	Poi2D operator =(const Poi2D& obj);
	Poi2D operator =(Poi2D&& obj);
	~Poi2D();

	/* Logical Operations. */ 
	bool operator <(const Poi2D& operand);
	bool operator < (HalfSeg2D& operand);
	bool operator > (HalfSeg2D& operand);
	bool operator <(AttrHalfSeg2D& operand);
	bool operator >(AttrHalfSeg2D& operand);
	bool operator >(const Poi2D& operand);
	bool operator <=(const Poi2D& operand);
	bool operator >=(const Poi2D& operand);
	bool operator ==(const Poi2D& operand);
	bool operator !=(const Poi2D& operand);

	/* Overloading the input and output operators. */
	friend std::ostream&operator<<(std::ostream& os, const Poi2D& output);
	friend std::istream&operator>>(std::istream& is, Poi2D& input);

};

/*
* Seg2D definiton
*/

class Seg2D
{
public:
	
	/*Member Variables*/
	Poi2D p1;
	Poi2D p2;
	
	/*Member Functions*/
	Seg2D();
	Seg2D(Poi2D p1, Poi2D p2);
	Seg2D(const Seg2D& obj);
	Seg2D(Seg2D&& obj);
	Seg2D operator =(const Seg2D& obj);
	Seg2D operator =(Seg2D&& obj);
	~Seg2D();

	/*Logical Operators*/
	bool operator <(const Seg2D& operand);
	bool operator >(const Seg2D& operand);
	bool operator <=(const Seg2D& operand);
	bool operator >=(const Seg2D& operand);
	bool operator ==(const Seg2D& operand);
	bool operator !=(const Seg2D& operand);
	
	/* Overloading the input and output operators. */
	friend std::ostream&operator<<(std::ostream& os, const Seg2D& output);
	friend std::istream&operator>>(std::istream& is, Seg2D& input);
};

/*
*HalfSegment Class
*/

class HalfSeg2D
{
public:
	/*Member Variables*/
	bool isLeft;
	Seg2D seg;
	
	/*Member functions*/
	HalfSeg2D();
	HalfSeg2D(Seg2D seg, bool isLeft);
	HalfSeg2D(const HalfSeg2D& obj);
	HalfSeg2D(HalfSeg2D&& obj);
	HalfSeg2D operator =(const HalfSeg2D& obj);
	HalfSeg2D operator =(HalfSeg2D&& obj);
	~HalfSeg2D();
	Poi2D dominatingPoint();
	
	/* Logical Operations. */
	bool operator <(const HalfSeg2D& operand);
	bool operator <(Poi2D& operand);
	bool operator >(Poi2D& operand);
	bool operator <(AttrHalfSeg2D& operand);
	bool operator >(AttrHalfSeg2D& operand);
	bool operator >(const HalfSeg2D& operand);
	bool operator <=(const HalfSeg2D& operand);
	bool operator >=(const HalfSeg2D& operand);
	bool operator ==(const HalfSeg2D& operand);
	bool operator !=(const HalfSeg2D& operand);
	
	/* Overloading the input and output operators. */
	friend std::ostream&operator <<(std::ostream& os, const HalfSeg2D& output);
	friend std::istream&operator >>(std::istream& is, HalfSeg2D& input);

};

/*
*Attributed Half Segment Class
*/
struct AttHalfSegVariable;
class AttrHalfSeg2D
{
public:
	
	/*Member variables */
	HalfSeg2D hseg;
	bool insideAbove;
	
	/*Member Functions */
	AttrHalfSeg2D();
	AttrHalfSeg2D(bool value, bool isLeft, Seg2D seg);
	AttrHalfSeg2D(const AttrHalfSeg2D& obj);
	AttrHalfSeg2D(AttrHalfSeg2D&& obj);
	AttrHalfSeg2D operator=(const AttrHalfSeg2D& obj);
	AttrHalfSeg2D operator=(AttrHalfSeg2D&& obj);
	~AttrHalfSeg2D();

	/*Logical Operators*/
	bool operator <(const AttrHalfSeg2D& operand);
	bool operator >(const AttrHalfSeg2D& operand);
	bool operator <(Poi2D& operand);
	bool operator >(Poi2D& operand);
	bool operator <(HalfSeg2D& operand);
	bool operator >(HalfSeg2D& operand);
	bool operator <=(const AttrHalfSeg2D& operand);
	bool operator >=(const AttrHalfSeg2D& operand);
	bool operator ==(const AttrHalfSeg2D& operand);
	bool operator !=(const AttrHalfSeg2D& operand);
	
	/*Overloading the input and output operators.*/
	friend std::ostream&operator<<(std::ostream& os, const AttHalfSegVariable& output);
	friend std::istream&operator>>(std::istream& is, AttHalfSegVariable& input);

};

/*
* Minimum Bounding Rectangle Definition
*/
struct Rect2DVariable;
class Rect2D
{
public:
	
	/*Member variables*/
	Poi2D topLeft;
	Poi2D bottomRight;
	
	/*Member functions*/
	Rect2D();
	Rect2D(Poi2D topLeft, Poi2D bottomRight);
	Rect2D(const Rect2D& obj);
	Rect2D(Rect2D&& obj);
	Rect2D operator=(const Rect2D& obj);
	Rect2D operator=(Rect2D&& obj);
	~Rect2D();

	/* Overloading the input and output operators. */
	friend std::ostream&operator<<(std::ostream& os, Rect2D& output);
	friend std::istream&operator>>(std::istream& is, Rect2D& input);

};

/*
* SimplePolygon2D Definition
*/
class SimplePolygon2D
{
public:
	/*Member Variables*/
	std::vector<Poi2D> vertices;

	/*Member Functions*/
	SimplePolygon2D();
	SimplePolygon2D(std::vector<Poi2D> vertices);
	SimplePolygon2D(const SimplePolygon2D& obj);
	SimplePolygon2D(SimplePolygon2D&& obj);
	~SimplePolygon2D();

	/*Logical Operators */
	
	bool operator == (const SimplePolygon2D& operand);
	bool operator != (const SimplePolygon2D& operand);

	/* Overloading the input and output operators. */
	friend std::ostream&operator << (std::ostream& os, SimplePolygon2D& output);
};



/*
* Functions to determine relationships between Poi2D and Seg2D.
*/

/*Returns true if the point lies on the segment, false otherwise.*/
bool PointLiesOnSegment(Poi2D& poi, Seg2D& seg);

/*Returns the point if it lies on the segment and not on the endpoints.*/
Poi2D getPointLiesOnSegmentAndNotEndpoints(Poi2D& poi, Seg2D& seg);

/*Returns true if the point lies on the segment but not at the endpoints, false otherwise*/
bool PointLiesOnSegmentAndNotEndpoints(Poi2D& poi, Seg2D& seg);

/*Returns true if the point lies above the segment, false otherwise.*/
bool PointLiesAboveSegment(Poi2D& poi, Seg2D& seg);

/*Returns true if the point lies below the segment, false otherwise.*/
bool PointLiesBelowSegment(Poi2D& poi, Seg2D& seg);

/*Returns true if the point lies above or on the segment, false otherwise.*/
bool PointLiesAboveOrOnSegment(Poi2D& poi, Seg2D& seg);

/*Returns true if the point lies below or on the segment, false otherwise.*/
bool PointLiesBelowOrOnSegment(Poi2D& poi, Seg2D& seg);

/*Returns true if the point lies on the left end point of the segment, false otherwise.*/
bool PointLiesOnLeftEndPointOfSegment(Poi2D& poi, Seg2D& seg);

/*Returns true if the point lies on the right end point of the segment, false otherwise.*/
bool PointLiesOnRightEndPointOfSegment(Poi2D& poi, Seg2D& seg);

/* Returns true if the point is collinear to the segment, false otherwise*/
bool PointIsCollinearToSegment(Poi2D& poi, Seg2D& seg);

/*Returns true if the point is collinear and lies to the left of the segment, false otherwise.*/
bool PointLiesLeftOFSegmentAndIsCollinear(Poi2D& poi, Seg2D& seg);

/* Returns true if the point is collinear and lies to the right of the segment, false otherwise.*/
bool PointLiesRightOfSegmentAndIsCollinear(Poi2D& poi, Seg2D& seg);

/*
*Relationships between Segments
*/

/*Returns true if the segment lies on the segment, false otherwise.*/
bool SegmentLiesOnSegment(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment lies above the segment, false otherwise.*/
bool SegmentLiesAboveSegment(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment lies below the segment, false otherwise.*/
bool SegmentLiesBelowSegment(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment lies to the left of the segment, false otherwise.*/
bool SegmentLiesLeftOFSegment(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment lies to the right of the segment, false otherwise.*/
bool SegmentLiesRightOfSegment(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear to the other segment., false otherwise.*/
bool SegmentIsCollinear(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear and lies to the left of the other segment, false otherwise.*/
bool SegmentLiesLeftOFSegmentAndIsCollinear(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear and lies to the right of the other segment, false otherwise.*/
bool SegmentLiesRightOfSegmentAndIsCollinear(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear and meets the left endpoint of the other segment, false otherwise.*/
bool SegmentIsCollinearAndMeetsLeftEndpoint(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear and meets the right endpoint of the other segment, false otherwise.*/
bool SegmentIsCollinearAndMeetsRightEndpoint(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear and crosses the left endpoint of the other segment, false otherwise.*/
bool SegmentIsCollinearAndCrossesLeftEndpoint(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear and crosses the right endpoint of the other segment, false otherwise.*/
bool SegmentIsCollinearAndCrossesRightEndpoint(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is collinear and meets both endpoints of the other segment, false otherwise.*/
bool SegmentIsCollinearAndMeetsBothEndpoint(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segments are parallel and false otherwise.*/
bool SegmentIsParallel(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is parallel and lies above the other segment and false otherwise.*/
bool SegmentIsParallelAndAbove(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is parallel and lies below the other segment and false otherwise.*/
bool SegmentIsParallelAndBelow(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is parallel and lies to the left of the other segment and false otherwise.*/
bool SegmentIsParallelAndLiesLeft(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segment is parallel and lies to the right of the other segment and false otherwise.*/
bool SegmentIsParallelAndLiesRight(Seg2D& seg, Seg2D& seg1);

/*Returns true if the two segments intersect, false otherwise.*/
bool Intersects(Seg2D& seg, Seg2D& seg1);

/*Returns true if the length of the segment is lesser than the length of the other segment.*/
bool SegmentIsLesserThanSegment(Seg2D& seg1, Seg2D& seg2);

/*Returns true if the segment lies on on within the other segment and false otherwise.*/
bool SegmentLiesOnOrWithinSegment(Seg2D& seg1, Seg2D& seg2);

/*Returns the point of intersection of the two segments.*/
Poi2D IntersectionPoint(Seg2D& seg, Seg2D& seg1);

/*Returns true if the two segments meet and false otherwise.*/ 
bool Meet(Seg2D& seg, Seg2D& seg1);

/*Returns the meeting point of the two segments.*/
Poi2D MeetingPoint(Seg2D& seg, Seg2D& seg1);

/*Returns true if the segments touch at any point other than at the endpoints.*/
bool Touch(Seg2D& seg1, Seg2D& seg2);

/*Returns true if the segments touch at any point other than at the endpoints.*/
Poi2D TouchingPoint(Seg2D& seg1, Seg2D& seg2);

/*Returns the midpoint of the given segment*/
Poi2D MidPoint(Seg2D& seg1);

/*Returns true if the point lies within the bounding box of the polygon and false otherwise*/
bool BasicPointInBoundingBox(Poi2D& poi, SimplePolygon2D& polygon);

/*Returns true if the point is located inside a simple polygon.*/
bool simplePointInsideSimplePolygon(Poi2D& poi, SimplePolygon2D& simplepolygon);

/*Returns true if the point is located on the boundary of a simple polygon.*/
bool simplePointOnBoundaryOfSimplePoly(Poi2D& poi, SimplePolygon2D& simplepolygon);

/*Returns true if a segment is located inside a simple polygon.*/
bool segInsideSimplePolygon(Seg2D& seg, SimplePolygon2D& simplepolygon);

/*Returns true if the segment is located on the boundary of a simple polygon.*/
bool segOnBoundaryOfSimplePolygon(Seg2D& seg, SimplePolygon2D& simplepolygon);

/*Returns a minimum bounding rectangle for a polygon*/
Rect2D computeRect2D(SimplePolygon2D& simplepolygon);

#endif