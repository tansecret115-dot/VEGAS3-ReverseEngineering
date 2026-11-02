/* Module: pngu3266.dll
   Function: ~CPNObject
   Address: 60607f06
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNObject::~CPNObject(void) */

void __thiscall CPNObject::~CPNObject(CPNObject *this)

{
                    /* 0x17f06  347  ??1CPNObject@@UAE@XZ */
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined ***)this = &_vftable_;
  return;
}


