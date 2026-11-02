/* Module: pngu3266.dll
   Function: CPNPropertySheet
   Address: 605fe910
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPropertySheet::CPNPropertySheet(class CPNPropertySheet const &) */

CPNPropertySheet * __thiscall
CPNPropertySheet::CPNPropertySheet(CPNPropertySheet *this,CPNPropertySheet *param_1)

{
                    /* 0xe910  120  ??0CPNPropertySheet@@QAE@ABV0@@Z */
  XPNPropertySheet::XPNPropertySheet((XPNPropertySheet *)this,(XPNPropertySheet *)param_1);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined ***)this = &_vftable_;
  return this;
}


