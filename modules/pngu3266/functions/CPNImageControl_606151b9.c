/* Module: pngu3266.dll
   Function: CPNImageControl
   Address: 606151b9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImageControl::CPNImageControl(void) */

CPNImageControl * __thiscall CPNImageControl::CPNImageControl(CPNImageControl *this)

{
                    /* 0x251b9  85  ??0CPNImageControl@@QAE@XZ */
  CPNControl::CPNControl((CPNControl *)this);
  *(undefined4 *)(this + 0xc0) = 0;
  CPNColor::CPNColor((CPNColor *)(this + 0xc4),0xf);
  CPNColor::CPNColor((CPNColor *)(this + 0xe3),0xf);
  *(undefined4 *)(this + 0x106) = 0;
  *(undefined4 *)(this + 0x102) = 1;
  *(undefined ***)this = &_vftable_;
  return this;
}


