#include "common_srv/ROSUnit_EmptyClnt.hpp"

ROSUnit_EmptyClnt::ROSUnit_EmptyClnt(std::string t_name, ros::NodeHandle& t_main_handler) : ROSUnit(t_main_handler)
{
    _input_port_0 = new InputPort(ports_id::IP_0, this);
    _ports = {_input_port_0};
    m_client = t_main_handler.serviceClient<std_srvs::Empty>(t_name);
}

ROSUnit_EmptyClnt::~ROSUnit_EmptyClnt()
{

}

void ROSUnit_EmptyClnt::process(DataMessage* t_msg, Port* t_port) {
    if(t_port->getID() == ports_id::IP_0) {
        std_srvs::Empty t_srv;
        if(m_client.call(t_srv))
        {
            //TODO: add success condition
        }
        else
        {
            //TODO: add error
        }
    }
}

std::vector<Port*> ROSUnit_EmptyClnt::getPorts() {
    return _ports;
}

// void ROSUnit_EmptyClnt::receiveMsgData(DataMessage* t_msg)
// {
//     //Change the below code to match your received msg
//     if(t_msg->getType() == msg_type::EMPTY)
//     {
        
//     }
// }