#ifndef DDSPUBLISHER_H
#define DDSPUBLISHER_H

#include <vector>

class DDSPublisher : eprosima::fastdds::dds::Publisher
{

public:
        
    DDSPublisher();
    ~DDSPublisher();
        
    // initialize the Publisher, the topic, its writers, qos, and listeners
    void init(void* app);

    // write the data to the topic
    void write();

private:

    struct TopicInfo
    {
        eprosima::fastdds::dds::DataWriter* writer;
        eprosima::fastdds::dds::Topic topic;
        eprosima::fastdds::dds::TopicDataType* data;
    };
        
        // this entities topic and its associated members
    std::vector<TopicInfo> m_topicInfoList_;

    // a participant for the application
    eprosima::fastdds::dds::Participant* mp_participant_;
        
}; // class DDSPublisher



#endif
