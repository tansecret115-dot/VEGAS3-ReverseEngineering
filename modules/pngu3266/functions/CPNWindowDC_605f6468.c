/* Module: pngu3266.dll
   Function: CPNWindowDC
   Address: 605f6468
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNWindowDC::CPNWindowDC(class CPNWindowDC const &) */

CPNWindowDC * __thiscall CPNWindowDC::CPNWindowDC(CPNWindowDC *this,CPNWindowDC *param_1)

{
                    /* 0x6468  161  ??0CPNWindowDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &XPNWindowDC::_vftable_;
  *(undefined4 *)(this + 0x1df) = *(undefined4 *)(param_1 + 0x1df);
  *(undefined ***)this = &_vftable_;
  return this;
}


