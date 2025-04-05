#ifndef SUBLISTENER_H
#define SUBLISTENER_H

class SubListener : eprosima::fastdds::dds::DataReaderListener
{
    SubListener() = default;

    // TODO: Make generic on_data_available to retrieve any data type
    void on_data_available(eprosima::fastdds::dds::DataReader *reader) override
    {
    }

    template <typedef DataType>
    DataType getData(DataType data) { return data };
};

# endif // SubListener class