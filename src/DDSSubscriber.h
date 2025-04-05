#ifndef DDSSUBSCRIBER_H
#define DDSSUBCRIBER_H

#include <vector>
// Class that wraps a subscriber entity
class DDSSubscriber : eprosima::fastdds::dds::Subscriber
{
public:
    DDSSubscriber();
    ~DDSSubscriber();

    // init the participant, readers, qos, and listeners
    void init();

private:
        
    // participant entity
    eprosima::fastdds::dds::Participant* mp_participant_;
    // this class's readers, listeners, and topic types
    struct TopicnIfo
    {
        eprosima::fastdds::dds::DataReader* reader;
        eprosima::fastdds::dds::Topic* topic;
        eprosima::fastdds::dds::TopicDataType* data;
    };

    // participant entity
    eprosima::fastdds::dds::Participant* mp_participant_;

    // this subscribers list of topics and its associated members
    std::vector<TopicInfo> m_topicInfoList_;

}; // class DDSSubscriber

#endif
