#ifndef EX13_39
#define EX13_39

#include <string>
#include <memory>

class StrVec{
public:
    StrVec():
        elements(nullptr),first_free(nullptr),cap(nullptr){ }
    StrVec(const StrVec&);
    StrVec& operator=(const StrVec&);
    ~StrVec();

    void push_back(const std::string&);
    size_t size() const { return first_free - elements; }
    size_t capacity() const { return cap - elements; }
    std::string* begin() const { return elements; }
    std::string *end() const { return first_free; }
    void reserve(size_t);
    void resize(size_t n, const std::string& str = std::string());
private:
    static std::allocator<std::string> alloc;

    void chk_n_alloc(){
        if(size() == capacity()) reallocate();
    }
    std::pair<std::string*, std::string*> alloc_n_copy
        (const std::string*, const std::string*);

    void alloc_n_move(size_t);
    void free();
    void reallocate();
    std::string *elements;
    std::string *first_free;
    std::string *cap;
};


#endif