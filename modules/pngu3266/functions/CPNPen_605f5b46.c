/* Module: pngu3266.dll
   Function: CPNPen
   Address: 605f5b46
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPen::CPNPen(void) */

CPNPen * __thiscall CPNPen::CPNPen(CPNPen *this)

{
                    /* 0x5b46  112  ??0CPNPen@@QAE@XZ */
  XPNPen::XPNPen((XPNPen *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x37) = 1;
  *(undefined4 *)(this + 0x33) = 1;
  *(undefined4 *)(this + 0x3b) = 2;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x5f) = 0;
  *(undefined4 *)(this + 99) = 0;
  *(undefined4 *)(this + 0x57) = 0;
  *(undefined4 *)(this + 0x5b) = 0;
  *(undefined4 *)(this + 0x67) = 0;
  *(undefined4 *)(this + 0x3f) = 3;
  *(undefined4 *)(this + 0x43) = 0xffffffff;
  *(undefined4 *)(this + 0x47) = 0xffffffff;
  *(undefined4 *)(this + 0x4b) = 0xffffffff;
  *(undefined4 *)(this + 0x4f) = 0xffffffff;
  *(undefined4 *)(this + 0x53) = 0xffffffff;
  return this;
}


