template
class RingBuffer {
public:
bool push(const T& item);
bool pop(T& item);
bool isEmpty() const;
};