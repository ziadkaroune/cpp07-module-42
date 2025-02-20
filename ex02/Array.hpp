#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
private:
    unsigned int _size;
    T* _arr;

public:
    Array();
    Array(unsigned int arr_size);
    Array(const Array<T>& copy);
    Array<T>& operator=(const Array<T>& other);
    ~Array();

    class OutOfBoundsException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    T& operator[](unsigned int i);
    const T& operator[](unsigned int i) const;
    unsigned int getSize() const;
    void display(std::ostream& stream) const;
};


/////   Addd ostream operator<<

// Default constructor
template <typename T>
Array<T>::Array() : _size(0), _arr(nullptr) {}

// Constructor with size
template <typename T>
Array<T>::Array(unsigned int arr_size) : _size(arr_size) {
    _arr = new T[_size]; // Allocate array
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array<T>& copy) : _size(copy._size) {
    _arr = new T[_size];
    for (unsigned int k = 0; k < _size; k++)
        _arr[k] = copy._arr[k];
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        delete[] _arr;
        _size = other._size;
        _arr = new T[_size];
        for (unsigned int k = 0; k < _size; k++) {
            _arr[k] = other._arr[k];
        }
    }
    return *this;
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] _arr;
}

// Exception class
template <class T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
    return "Index is out of bounds";
}

// Subscript operator
template <typename T>
T& Array<T>::operator[](unsigned int i) {
    if (i >= _size)
        throw OutOfBoundsException();
    return _arr[i];
}

// Const subscript operator
template <typename T>
const T& Array<T>::operator[](unsigned int i) const {
    if (i >= _size)
        throw OutOfBoundsException();
    return _arr[i];
}

// Get array size
template <typename T>
unsigned int Array<T>::getSize() const {
    return _size;
}

// Display function
template <typename T>
void Array<T>::display(std::ostream& stream) const {
    if (_size == 0) return;
    for (unsigned int i = 0; i < _size - 1; i++)
        stream << _arr[i] << " - ";
    if (_size > 0)
        stream << _arr[_size - 1];
}

#endif
