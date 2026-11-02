/* Module: pngu3266.dll
   Function: CPNClientDC
   Address: 605fc63b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNClientDC::CPNClientDC(class CPNClientDC const &) */

CPNClientDC * __thiscall CPNClientDC::CPNClientDC(CPNClientDC *this,CPNClientDC *param_1)

{
                    /* 0xc63b  26  ??0CPNClientDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &XPNClientDC::_vftable_;
  *(undefined4 *)(this + 0x1df) = *(undefined4 *)(param_1 + 0x1df);
  *(undefined ***)this = &_vftable_;
  return this;
}


