// Boost.Geometry (aka GGL, Generic Geometry Library)
//
// Copyright Barend Gehrels 2007-2009, Geodan, Amsterdam, the Netherlands.
// Copyright Bruno Lalande 2008, 2009
// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_GEOMETRY_EXTENSIONS_GIS_LATLONG_HPP
#define BOOST_GEOMETRY_EXTENSIONS_GIS_LATLONG_HPP


#include <boost/geometry/geometries/geometries.hpp>
#include <boost/geometry/extensions/gis/latlong/point_ll.hpp>


#include <boost/geometry/extensions/gis/geographic/strategies/andoyer.hpp>
#include <boost/geometry/extensions/gis/geographic/strategies/vincenty.hpp>
#include <boost/geometry/extensions/gis/geographic/strategies/distance_cross_track.hpp>

namespace boost { namespace geometry
{

/*
DEPRECATED
namespace model
{

typedef point_ll<double, cs::geographic<degree> > point_ll_deg;
typedef linestring<point_ll_deg> linestring_ll_deg;
typedef linear_ring<point_ll_deg> ring_ll_deg;
typedef polygon<point_ll_deg> polygon_ll_deg;
typedef box<point_ll_deg> box_ll_deg;
typedef segment<point_ll_deg> segment_ll_deg;

typedef point_ll<double, cs::geographic<radian> > point_ll_rad;
typedef linestring<point_ll_rad> linestring_ll_rad;
typedef linear_ring<point_ll_rad> ring_ll_rad;
typedef polygon<point_ll_rad> polygon_ll_rad;
typedef box<point_ll_rad> box_ll_rad;
typedef segment<point_ll_rad> segment_ll_rad;

} // namespace model
*/

}} // namespace boost::geometry


#endif // BOOST_GEOMETRY_EXTENSIONS_GIS_LATLONG_HPP
