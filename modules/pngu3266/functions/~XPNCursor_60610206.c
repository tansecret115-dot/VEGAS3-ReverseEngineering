/* Module: pngu3266.dll
   Function: ~XPNCursor
   Address: 60610206
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall XPNCursor::~XPNCursor(void) */

void __thiscall XPNCursor::~XPNCursor(XPNCursor *this)

{
                    /* 0x20206  386  ??1XPNCursor@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


