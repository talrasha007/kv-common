
namespace kv {
    enum KvType {
        STRING = 0,
        HEX,
        BINARY,
        INT32,
        UINT32,
        INT64,
        UINT64
    };

    class KvCursor {

    };

    class KvBatch {

    };

    class KvTxn {

    };

    class KvDb {
    public:
        virtual void put() = 0;
        virtual void get() = 0;
        virtual void del() = 0;
    };

    class KvEnv {
    public:
        virtual bool supportDup() = 0;
        virtual bool supportTxn() = 0;
        virtual bool supportBatch() = 0;

    public:
        virtual bool open() = 0;
        virtual bool close() = 0;

        virtual KvDb* openDb() = 0;
    };

    class KvEnvFactory {
    public:
        virtual KvEnv* getEnv() = 0;
    };
}