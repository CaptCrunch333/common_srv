#pragma once

#include "common_srv/ROSUnit.hpp"
#include "geometry_msgs/Point.h"
//Change the msg type to match your received msg
#include "common_srv/Vector3DMessage.hpp"

class ROSUnit_PointPub : public ROSUnit
{
    public:
        enum ports_id {IP_0};
        void process(DataMessage* t_msg, Port* t_port);
        ROSUnit_PointPub(std::string, ros::NodeHandle&);
        ~ROSUnit_PointPub();

    private:
        Port* _input_port_0;
        ros::Publisher m_pub;
};