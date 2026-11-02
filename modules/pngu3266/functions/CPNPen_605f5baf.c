/* Module: pngu3266.dll
   Function: CPNPen
   Address: 605f5baf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPen::CPNPen(class CPNColor &,long,long) */

CPNPen * __thiscall CPNPen::CPNPen(CPNPen *this,CPNColor *param_1,long param_2,long param_3)

{
                    /* 0x5baf  110  ??0CPNPen@@QAE@AAVCPNColor@@JJ@Z */
  XPNPen::XPNPen((XPNPen *)this);
  *(undefined ***)this = &_vftable_;
  CPNColor::operator=((CPNColor *)(this + 0x14),param_1);
  *(long *)(this + 0x33) = param_2;
  *(long *)(this + 0x37) = param_3;
  *(undefined4 *)(this + 0x3b) = 2;
  *(undefined4 *)(this + 0x3f) = 3;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x5f) = 0;
  *(undefined4 *)(this + 99) = 0;
  *(undefined4 *)(this + 0x43) = 0xffffffff;
  *(undefined4 *)(this + 0x47) = 0xffffffff;
  *(undefined4 *)(this + 0x4b) = 0xffffffff;
  *(undefined4 *)(this + 0x4f) = 0xffffffff;
  *(undefined4 *)(this + 0x53) = 0xffffffff;
  *(undefined4 *)(this + 0x57) = 0;
  *(undefined4 *)(this + 0x5b) = 0;
  *(undefined4 *)(this + 0x67) = 0;
  if ((((param_3 == 4) || (param_3 == 5)) || (param_3 == 6)) || (param_3 == 7)) {
    *(undefined4 *)(this + 0x33) = 1;
  }
  return this;
}


