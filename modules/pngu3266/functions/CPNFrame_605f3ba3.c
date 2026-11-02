/* Module: pngu3266.dll
   Function: CPNFrame
   Address: 605f3ba3
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNFrame::CPNFrame(void) */

CPNFrame * __thiscall CPNFrame::CPNFrame(CPNFrame *this)

{
                    /* 0x3ba3  69  ??0CPNFrame@@QAE@XZ */
  XPNFrame::XPNFrame((XPNFrame *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return this;
}


