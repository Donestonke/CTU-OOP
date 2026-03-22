#ifndef MYVECT_H_
#define MYVECT_H_

template <class T>
class myVect {
private:
    T * array_ptr;
    int array_size;
public:
    myVect();
    myVect(int);
    myVect(const myVect &);
    ~myVect();
    T getValAt(int);
    T & operator[](const int &);
};

template <class T>
myVect<T>::myVect() {
    array_ptr = 0;
    array_size = 0;
}

template <class T>
myVect<T>::myVect(int s) {
    array_size = s;
    array_ptr = new T[s];
    for(int i=0; i<array_size; i++)
        *(array_ptr + i) = 0;
}

template <class T>
myVect<T>::myVect(const myVect & vect) {
    array_size = vect.array_size;
    array_ptr = new T[array_size];
    for(int i=0; i<array_size; i++)
        *(array_ptr + i) = *(vect.array_ptr + i);
}

template <class T>
myVect<T>::~myVect() {
    if(array_size > 0)
        delete[] array_ptr;
}

template <class T>
T myVect<T>::getValAt(int position) {
    return array_ptr[position];
}

template <class T>
T & myVect<T>::operator[](const int & position) {
    return array_ptr[position];
}

#endif /* MYVECT_H_ */
