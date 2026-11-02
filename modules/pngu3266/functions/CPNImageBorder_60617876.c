/* Module: pngu3266.dll
   Function: CPNImageBorder
   Address: 60617876
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNImageBorder::CPNImageBorder(void) */

CPNImageBorder * __thiscall CPNImageBorder::CPNImageBorder(CPNImageBorder *this)

{
                    /* 0x27876  81  ??0CPNImageBorder@@QAE@XZ */
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  CPNColor::CPNColor((CPNColor *)(this + 0x20),0xf);
  *(undefined ***)this = &_vftable_;
  memset(this + 0x10,0,0x10);
  return this;
}


