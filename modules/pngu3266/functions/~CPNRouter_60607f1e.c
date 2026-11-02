/* Module: pngu3266.dll
   Function: ~CPNRouter
   Address: 60607f1e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNRouter::~CPNRouter(void) */

void __thiscall CPNRouter::~CPNRouter(CPNRouter *this)

{
                    /* 0x17f1e  358  ??1CPNRouter@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  RemoveObservers(this);
  return;
}


