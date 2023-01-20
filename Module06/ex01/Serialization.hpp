#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

typedef struct Data
{
	std::string data
};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);

#endif
