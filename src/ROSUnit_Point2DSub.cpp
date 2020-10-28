#include "common_srv/ROSUnit_Point2DSub.hpp"

ROSUnit_Point2DSub* ROSUnit_Point2DSub::m_ptr[ROSUnit_capacity];
int ROSUnit_Point2DSub::internal_counter=0;

void(*ROSUnit_Point2DSub::callbackFunctionPointer[ROSUnit_capacity])(const common_srv::Point2D::ConstPtr& t_rec){
  ROSUnit_Point2DSub::callback1,
  ROSUnit_Point2DSub::callback2,
  ROSUnit_Point2DSub::callback3,
  ROSUnit_Point2DSub::callback4,
  ROSUnit_Point2DSub::callback5
};

Port* ROSUnit_Point2DSub::_output_port_0 = new OutputPort(ports_id::OP_0, NULL);
Port* ROSUnit_Point2DSub::_output_port_1 = new OutputPort(ports_id::OP_1, NULL);
Port* ROSUnit_Point2DSub::_output_port_2 = new OutputPort(ports_id::OP_2, NULL);
Port* ROSUnit_Point2DSub::_output_port_3 = new OutputPort(ports_id::OP_3, NULL);
Port* ROSUnit_Point2DSub::_output_port_4 = new OutputPort(ports_id::OP_4, NULL);

ROSUnit_Point2DSub::ROSUnit_Point2DSub(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    m_sub = t_main_handler.subscribe(t_name, 2, ROSUnit_Point2DSub::callbackFunctionPointer[internal_counter]);
    m_ptr[internal_counter] = this;
    internal_counter++;
    _ports = {_output_port_0, _output_port_1, _output_port_2, _output_port_3, _output_port_4};
}

ROSUnit_Point2DSub::~ROSUnit_Point2DSub()
{

}

void ROSUnit_Point2DSub::callback1(const common_srv::Point2D::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector2DMsg t_msg;
    t_msg.data.x = t_rec->x;
    t_msg.data.y = t_rec->y;
    _output_port_0->receiveMsgData(&t_msg);
    //m_ptr[0]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_Point2DSub::callback2(const common_srv::Point2D::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector2DMsg t_msg;
    t_msg.data.x = t_rec->x;
    t_msg.data.y = t_rec->y;
    _output_port_1->receiveMsgData(&t_msg);
    //m_ptr[1]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_Point2DSub::callback3(const common_srv::Point2D::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector2DMsg t_msg;
    t_msg.data.x = t_rec->x;
    t_msg.data.y = t_rec->y;
    _output_port_2->receiveMsgData(&t_msg);
    //m_ptr[2]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_Point2DSub::callback4(const common_srv::Point2D::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector2DMsg t_msg;
    t_msg.data.x = t_rec->x;
    t_msg.data.y = t_rec->y;
    _output_port_3->receiveMsgData(&t_msg);
    //m_ptr[3]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}

void ROSUnit_Point2DSub::callback5(const common_srv::Point2D::ConstPtr& t_rec)
{
    //Change the below code to match the message you want to emit
    Vector2DMsg t_msg;
    t_msg.data.x = t_rec->x;
    t_msg.data.y = t_rec->y;
    _output_port_4->receiveMsgData(&t_msg);
    //m_ptr[4]->emitMsgUnicastDefault((DataMessage*) &t_msg);
}