// -*- C++ -*-

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

template <typename T>
Expr_Command_Iterator <T>::Expr_Command_Iterator (Array_Base <T> & arr)
    : array_ (arr),
      curr_location_ (0)
{

} // end constructor


template <typename T>
Expr_Command_Iterator <T>::~Expr_Command_Iterator (void) 
{

} // end destructor


template <typename T>
bool Expr_Command_Iterator <T>::is_done (void) const
{
    return (curr_location_ >= array_.cur_size_);
} // end is_done


template <typename T>
void Expr_Command_Iterator <T>::advance (void)
{
    curr_location_++;
} // end advance


template <typename T>
T & Expr_Command_Iterator <T>::operator * (void)
{
    return array_.data_[curr_location_];
} // end operator *


template <typename T>
T * Expr_Command_Iterator <T>::operator -> (void)
{
    return &(array_.data_[curr_location_]);
} // end operator ->