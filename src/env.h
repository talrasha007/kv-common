#include <kv-common.h>

namespace kv {
    class Env : public node::ObjectWrap {
    public:
        static void setupExport(v8::Handle<v8::Object>& exports);

    public:
        static NAN_METHOD(ctor);

        static NAN_METHOD(open);
        static NAN_METHOD(close);
    };
}