/*PGR-GNU*****************************************************************

FILE: solution.h

Copyright (c) 2015 pgRouting developers
Mail: project@pgrouting.org

------

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 ********************************************************************PGR-GNU*/

#ifndef SRC_PICKDELIVER_SRC_FLEET_H
#define SRC_PICKDELIVER_SRC_FLEET_H
#pragma once

#include <deque>
#include <tuple>
#include <string>
#include <vector>


#include "./vehicle_pickDeliver.h"
#include "./../../common/src/identifiers.hpp"
namespace pgrouting {
namespace vrp {


class Fleet {
    friend Pgr_pickDeliver;
 public:
     std::vector<Vehicle_pickDeliver> m_trucks;
 protected:
     Identifiers<size_t> used; 
     Identifiers<size_t> un_used; 



 public:
     /* @brief constructor
      *
      * @params [in] p_problem \t pointer to problem
      *
      */
     void build_fleet(
             const std::vector<Vehicle_t> &vehicles,
             std::string &error,
             const Pgr_pickDeliver *p_problem
             );

#if 0
     std::string cost_str() const;
     std::string tau(const std::string &title = "Tau") const;
     friend std::ostream& operator<<(
             std::ostream &log,
             const Fleet &solution);
     bool operator <(const Fleet &s_rhs) const;

     bool is_feasable() const;
     double duration() const;
     double wait_time() const;
     double total_travel_time() const;
     double total_service_time() const;
     int twvTot() const;
     int cvTot() const;
     size_t fleet_size() const {return fleet.size();}
     Vehicle::Cost cost() const;
#endif
};


}  //  namespace vrp
}  //  namespace pgrouting

#endif  // SRC_PICKDELIVER_SRC_FLEET_H
