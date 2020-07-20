struct Foo{
    fooish;
};
struct Curl{
    std::vector<Foo> foo;
};

Curl size++(Curl curl){
    curl.foo.resize(curl.foo.size() + 1);
    return curl;
}
