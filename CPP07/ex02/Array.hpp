#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>


template <typename T> class Array
{
    private:
        T *array;
        unsigned int Arr_size;
    public:
        Array()
        {
            this->array = new T[0];
            this->Arr_size = 0;
        }

        ~Array()
        {
            if (this->size() >= 1)
                delete [] array;
        }
        
        Array(unsigned int n)
        {
            this->Arr_size = n;
            if (Arr_size < 1)
                this->array = new T[0];
            else
                this->array = new T[n];
        }

        Array(const Array &other)
        {
            this->array = new T[other.size()];
            this->Arr_size = other.size();
            for (unsigned int i = 0; i < other.size(); i++)
                this->array[i] = other.array[i];
        }

        Array& operator=(const Array& other)
        {
            if (this == &other)
                return *this;
            delete this->array;
            this->Arr_size = other.size();
            this->array = new T[other.size()];
            for (unsigned int i = 0; i < other.size(); i++)
                this->array[i] = other.array[i];
            return *this;
        }

        const unsigned int &size() const 
        {
            return (this->Arr_size);
        }

        T* getArray()
        {
            return this->array;
        }

        T& operator[](unsigned int idx)
        {
            if (idx < 0 || idx >= this->size())
                throw outOfRange();
            return this->getArray()[idx];
        }

        class outOfRange : public std::exception
        {
            const char *what() const throw()
            {
                return ("index is out of range!");
            }
        };


};


#endif