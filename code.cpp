struct Foo{
    int foo1, foo2, foo3;
    std::string foo4[8];
};
struct FooA{
    std::vector<Foo> fooA;
};
struct FooB{
    std::vector<FooA> fooB;
};

struct size++(struct thing){
    thing.resize(thing.size() + 1);
    return thing;
}

void whatever(){
    FooB fooB = fooData;
    fooB.fooA[i].size++();
    fooB.fooA[i].foo4[j] = "fooishness";
}
