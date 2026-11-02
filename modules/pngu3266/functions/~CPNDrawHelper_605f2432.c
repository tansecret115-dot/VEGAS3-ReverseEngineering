/* Module: pngu3266.dll
   Function: ~CPNDrawHelper
   Address: 605f2432
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNDrawHelper::~CPNDrawHelper(void) */

void __thiscall CPNDrawHelper::~CPNDrawHelper(CPNDrawHelper *this)

{
                    /* 0x2432  327  ??1CPNDrawHelper@@UAE@XZ
                       0x2432  365  ??1CPNSystemInfo@@UAE@XZ */
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined ***)this = &CPNObject::_vftable_;
  return;
}


