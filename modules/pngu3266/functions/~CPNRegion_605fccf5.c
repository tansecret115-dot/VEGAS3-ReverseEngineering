/* Module: pngu3266.dll
   Function: ~CPNRegion
   Address: 605fccf5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNRegion::~CPNRegion(void) */

void __thiscall CPNRegion::~CPNRegion(CPNRegion *this)

{
                    /* 0xccf5  357  ??1CPNRegion@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(HGDIOBJ *)(this + 0xc) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(this + 0xc));
  }
  XPNRegion::~XPNRegion((XPNRegion *)this);
  return;
}


