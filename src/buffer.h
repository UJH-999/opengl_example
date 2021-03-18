#ifndef _BUFFER_H_
#define _BUFFER_H_

#include "common.h"

CLASS_PTR(Buffer)
class Buffer {
    public:
        static BufferUPtr CreateWithData(uint32_t bufferType, uint32_t usage,
            const void* data, size_t dataSize);

            ~Buffer();
            uint32_t Get() const { return m_buffer; }
            void Bind() const;

    private:
        Buffer() {}
        bool Init(uint32_t bufferType, uint32_t usage,
            const void* data, size_t dataSize);
        uint32_t m_buffer { 0 };
        uint32_t m_bufferType { 0 };
        uint32_t m_usage { 0 };
};

#endif // _BUFFER_H_