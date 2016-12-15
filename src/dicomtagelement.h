#ifndef _DICOMTAGELEMENT_H_
#define _DICOMTAGELEMENT_H_

using namespace std;

namespace DicomImageViewer
{
    #define MAX_STATICBUFFER_LENGTH          64

    typedef struct _TagElement
    {
        DWORD   id;
        char    VRtype[2];
        DWORD   size;
        bool    alloced;
        char    staticbuffer[MAX_STATICBUFFER_LENGTH];
        void*   dynamicbuffer;
    }TagElement;
}

#endif // _DICOMTAGELEMENT_H_
