class Operators
{
    private:
        int i;

        // If not needed dont declare friend functions
        friend bool operator<(int i, Operators const& o);

    public:
        Operators(int i);
        bool operator<(Operators const& o) const;
        bool operator<(int i) const;
        int getInteger() const;
};

bool operator<(int i, Operators const& o);