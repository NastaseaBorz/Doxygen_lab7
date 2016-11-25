/**
 \namespace car
 \brief This namespace defines all the classes related
 to car
 */


namespace car
{
    /**
     Car type enum
     */

    enum  Type
    {
        Simple, ///< Simple car
        Offroad,///< Offroad car
        Truck   ///< Truck
    };

    /** \class Car
     \brief A car class
     */

    class Car
    {
    public:
        /**
         \brief the default constructor that takes no argument
         */
        Car()
        {
            _wheels = 4;
        }

        /**
         \brief constructor that takes one argument
         \param type - Car type
         */

        Car(Type type) : _type(type)
        {
            if(type == Simple)
                _wheels = 4;
            if(type == Offroad)
                _wheels = 6;
            if(type == Truck)
                _wheels = 8;
        }
        /**
         \brief the default destructor
         */
        ~Car()
        {
        }

    private:
        int _wheels; ///< wheel count
        Type _type;  ///< Car type
    };
}
