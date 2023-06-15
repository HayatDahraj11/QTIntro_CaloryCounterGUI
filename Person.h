#ifndef PERSON_H
#define PERSON_H





class PERSON
{
private:
            double height;
            double weight;

public:
            void SetWeight(double a)
            {
                this->weight = a;

            }
            void SetHeight(double  b)
            {
                this->height = b;
            }
            double GetWeight()
            {
                return weight ;
            }



};

#endif // PERSON_H
