/* Module: pngu3266.dll
   Function: CPNPropertySheet
   Address: 605feeaa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPropertySheet::CPNPropertySheet(unsigned long) */

CPNPropertySheet * __thiscall
CPNPropertySheet::CPNPropertySheet(CPNPropertySheet *this,ulong param_1)

{
                    /* 0xeeaa  121  ??0CPNPropertySheet@@QAE@K@Z */
  XPNPropertySheet::XPNPropertySheet((XPNPropertySheet *)this,param_1);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  return this;
}


