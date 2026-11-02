/* Module: pngu3266.dll
   Function: CPNRegion
   Address: 605fcc8e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNRegion::CPNRegion(void) */

CPNRegion * __thiscall CPNRegion::CPNRegion(CPNRegion *this)

{
                    /* 0xcc8e  128  ??0CPNRegion@@QAE@XZ */
  XPNRegion::XPNRegion((XPNRegion *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &_vftable_;
  return this;
}


