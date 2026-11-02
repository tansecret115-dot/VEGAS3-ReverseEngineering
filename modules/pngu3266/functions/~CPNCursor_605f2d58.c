/* Module: pngu3266.dll
   Function: ~CPNCursor
   Address: 605f2d58
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNCursor::~CPNCursor(void) */

void __thiscall CPNCursor::~CPNCursor(CPNCursor *this)

{
                    /* 0x2d58  321  ??1CPNCursor@@UAE@XZ */
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)this = &_vftable_;
  XPNCursor::~XPNCursor((XPNCursor *)this);
  return;
}


