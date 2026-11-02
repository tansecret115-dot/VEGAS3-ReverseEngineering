/* Module: pngu3266.dll
   Function: ~CPNAnimateCtl
   Address: 605fc9f7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNAnimateCtl::~CPNAnimateCtl(void) */

void __thiscall CPNAnimateCtl::~CPNAnimateCtl(CPNAnimateCtl *this)

{
                    /* 0xc9f7  305  ??1CPNAnimateCtl@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  XPNAnimateCtl::~XPNAnimateCtl((XPNAnimateCtl *)this);
  return;
}


