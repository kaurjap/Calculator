// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

template <typename T>
Array_Auto_Ptr <T>::Array_Auto_Ptr (void)
    : ptr_ (0)
{

} // end constructor

template <typename T>
Array_Auto_Ptr <T>::Array_Auto_Ptr (T * ptr)
    : ptr_ (ptr)
{

} // end initialization constructor


template <typename T>
Array_Auto_Ptr <T>::~Array_Auto_Ptr (void) 
{
    if (this->ptr_ != 0) {
        delete [] this->ptr_;
    } // end if
} // end destructor

template <typename T>
T * Array_Auto_Ptr <T>::operator -> (void)
{
    return this->ptr_;
} // end


template <typename T>
T & Array_Auto_Ptr <T>::operator * (void)
{
    return *this->ptr_;
} // end

template <typename T>
Array_Auto_Ptr <T>::operator T * (void)
{
    return this->ptr_;
} // end

template <typename T>
T & Array_Auto_Ptr <T>::operator [] (int i)
{
    return this->ptr_[i];
} // end
