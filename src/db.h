#include <kv-common.h>

namespace kv {
    class Db : public node::ObjectWrap {
    public:
        static void setupExport(v8::Handle<v8::Object>& exports);

    public:
        static NAN_METHOD(ctor);

        static NAN_METHOD(close);
        static NAN_METHOD(get);
        static NAN_METHOD(put);
        static NAN_METHOD(del);

        static NAN_METHOD(exists);
    };
}