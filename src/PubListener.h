#ifndef PUBLISTENER_H
#define PUBLISTENER_H
#include <iostream>

class PubListener : eprosima::fastdds::dds::DataWriterListener
{
public:
    PubListener() = default;

    ~PubListener() override = default;

    void on_publication matched(
        eprosima::fastdds::dds::DataWriter *writer,
        const eprosima::fastdds::dds::PublicationMatchedStatus &info) override
    {
        if (info.current_count_changed == 1) 
        {
            std::cout << "DataWriter matched." << std::endl;
        }
        else if (info.current_count_changed == -1)
        {
            std::cout << "DataWriter unmatched." << std::endl;
        }
        else 
        {
            std::cerr << info.current_count_changed
                    << " -- Value not valid for info.current_count_changed" << std::endl;     
        }
    }
};

# endif // PubListener class