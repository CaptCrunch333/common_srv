#pragma once

#include "common_srv/ROSUnit.hpp"
#include "common_srv/set_pose.h"
//Change the msg type to match your received msg
#include "common_srv/PoseMsg.hpp"

class ROSUnit_SetPoseSrv : public ROSUnit
{
public:
    enum ports_id {OP_0, OP_1, OP_2, OP_3, OP_4};
    void process(DataMessage* t_msg, Port* t_port) {};
    ROSUnit_SetPoseSrv(std::string, ros::NodeHandle&);
    ~ROSUnit_SetPoseSrv();

private:
    static Port* _output_port_0;
    static Port* _output_port_1;
    static Port* _output_port_2;
    static Port* _output_port_3;
    static Port* _output_port_4;
    
    ros::ServiceServer m_server;
    static int internal_counter;
    static ROSUnit_SetPoseSrv* m_ptr[ROSUnit_capacity];
    //Change the srv_callback code to reflect your system
    static bool(*callbackFunctionPointer[ROSUnit_capacity])(common_srv::set_pose::Request&, common_srv::set_pose::Response&);
    static bool srv_callback1(common_srv::set_pose::Request&, common_srv::set_pose::Response&);//TODO refactor through templates
    static bool srv_callback2(common_srv::set_pose::Request&, common_srv::set_pose::Response&);
    static bool srv_callback3(common_srv::set_pose::Request&, common_srv::set_pose::Response&);
    static bool srv_callback4(common_srv::set_pose::Request&, common_srv::set_pose::Response&);
    static bool srv_callback5(common_srv::set_pose::Request&, common_srv::set_pose::Response&);


};