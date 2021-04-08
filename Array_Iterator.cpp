// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

template <typename T>
Array_Iterator <T>::Array_Iterator (Array_Base <T> & arr)
    : array_ (arr),
    curr_location_ (0)
{

} // end constructor


template <typename T>
Array_Iterator <T>::~Array_Iterator (void) 
{

} // end destructor


template <typename T>
bool Array_Iterator <T>::is_done (void) const
{
    return (curr_location_ >= array_->cur_size_);
} // end is_done


template <typename T>
T & Array_Iterator <T>::operator * (void)
{
    return array_->data_[curr_location_];
} // end operator *


template <typename T>
T * Array_Iterator <T>::operator -> (void)
{
    return &array_->data_[curr_location_];
} // end operator ->