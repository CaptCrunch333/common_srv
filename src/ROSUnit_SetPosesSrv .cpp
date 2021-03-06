#include "common_srv/ROSUnit_SetPosesSrv.hpp"

ROSUnit_SetPosesSrv* ROSUnit_SetPosesSrv::m_ptr[ROSUnit_capacity];
int ROSUnit_SetPosesSrv::internal_counter=0;

bool(*ROSUnit_SetPosesSrv::callbackFunctionPointer[ROSUnit_capacity])(common_srv::set_poses::Request&, common_srv::set_poses::Response&){
  ROSUnit_SetPosesSrv::srv_callback1,
  ROSUnit_SetPosesSrv::srv_callback2,
  ROSUnit_SetPosesSrv::srv_callback3,
  ROSUnit_SetPosesSrv::srv_callback4,
  ROSUnit_SetPosesSrv::srv_callback5
};

Port* ROSUnit_SetPosesSrv::_output_port_0 = new OutputPort(ports_id::OP_0, NULL);
Port* ROSUnit_SetPosesSrv::_output_port_1 = new OutputPort(ports_id::OP_1, NULL);
Port* ROSUnit_SetPosesSrv::_output_port_2 = new OutputPort(ports_id::OP_2, NULL);
Port* ROSUnit_SetPosesSrv::_output_port_3 = new OutputPort(ports_id::OP_3, NULL);
Port* ROSUnit_SetPosesSrv::_output_port_4 = new OutputPort(ports_id::OP_4, NULL);

ROSUnit_SetPosesSrv::ROSUnit_SetPosesSrv (std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_server = t_main_handler.advertiseService(t_name, ROSUnit_SetPosesSrv::callbackFunctionPointer[internal_counter]);
    m_ptr[internal_counter] = this;
    internal_counter++;
    _ports = {_output_port_0, _output_port_1, _output_port_2, _output_port_3, _output_port_4};
}

ROSUnit_SetPosesSrv::~ROSUnit_SetPosesSrv ()
{

}

bool ROSUnit_SetPosesSrv::srv_callback1(common_srv::set_poses::Request& req, common_srv::set_poses::Response& res)
{
    //Change the code below to reflect your system
    PosesMsg t_msg;
    for(int i = 0; i < req.poses.pose.size(); i++)
    {
        Pose t_pose;
        t_pose.x = req.poses.pose.at(i).point.x;
        t_pose.y = req.poses.pose.at(i).point.y;
        t_pose.z = req.poses.pose.at(i).point.z;
        t_pose.yaw = req.poses.pose.at(i).yaw.data;
        t_msg.p.poses.push_back(t_pose);
    }
    _output_port_0->receiveMsgData(&t_msg);
    //m_ptr[0]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPosesSrv::srv_callback2(common_srv::set_poses::Request& req, common_srv::set_poses::Response& res)
{
    //Change the code below to reflect your system
    PosesMsg t_msg;
    for(int i = 0; i < req.poses.pose.size(); i++)
    {
        Pose t_pose;
        t_pose.x = req.poses.pose.at(i).point.x;
        t_pose.y = req.poses.pose.at(i).point.y;
        t_pose.z = req.poses.pose.at(i).point.z;
        t_pose.yaw = req.poses.pose.at(i).yaw.data;
        t_msg.p.poses.push_back(t_pose);
    }
    _output_port_1->receiveMsgData(&t_msg);
    //m_ptr[1]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPosesSrv::srv_callback3(common_srv::set_poses::Request& req, common_srv::set_poses::Response& res)
{
    //Change the code below to reflect your system
    PosesMsg t_msg;
    for(int i = 0; i < req.poses.pose.size(); i++)
    {
        Pose t_pose;
        t_pose.x = req.poses.pose.at(i).point.x;
        t_pose.y = req.poses.pose.at(i).point.y;
        t_pose.z = req.poses.pose.at(i).point.z;
        t_pose.yaw = req.poses.pose.at(i).yaw.data;
        t_msg.p.poses.push_back(t_pose);
    }
    _output_port_2->receiveMsgData(&t_msg);
    //m_ptr[2]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPosesSrv::srv_callback4(common_srv::set_poses::Request& req, common_srv::set_poses::Response& res)
{
    //Change the code below to reflect your system
    PosesMsg t_msg;
    for(int i = 0; i < req.poses.pose.size(); i++)
    {
        Pose t_pose;
        t_pose.x = req.poses.pose.at(i).point.x;
        t_pose.y = req.poses.pose.at(i).point.y;
        t_pose.z = req.poses.pose.at(i).point.z;
        t_pose.yaw = req.poses.pose.at(i).yaw.data;
        t_msg.p.poses.push_back(t_pose);
    }
    _output_port_3->receiveMsgData(&t_msg);
    //m_ptr[3]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}

bool ROSUnit_SetPosesSrv::srv_callback5(common_srv::set_poses::Request& req, common_srv::set_poses::Response& res)
{
    //Change the code below to reflect your system
    PosesMsg t_msg;
    for(int i = 0; i < req.poses.pose.size(); i++)
    {
        Pose t_pose;
        t_pose.x = req.poses.pose.at(i).point.x;
        t_pose.y = req.poses.pose.at(i).point.y;
        t_pose.z = req.poses.pose.at(i).point.z;
        t_pose.yaw = req.poses.pose.at(i).yaw.data;
        t_msg.p.poses.push_back(t_pose);
    }
    _output_port_4->receiveMsgData(&t_msg);
    //m_ptr[4]->emitMsgUnicastDefault((DataMessage*) &t_msg);
    return true;
}