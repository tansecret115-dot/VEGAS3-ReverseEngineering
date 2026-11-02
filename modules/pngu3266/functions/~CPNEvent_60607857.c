/* Module: pngu3266.dll
   Function: ~CPNEvent
   Address: 60607857
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNEvent::~CPNEvent(void) */

void __thiscall CPNEvent::~CPNEvent(CPNEvent *this)

{
                    /* 0x17857  329  ??1CPNEvent@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  CPNObject::~CPNObject((CPNObject *)this);
  return;
}


