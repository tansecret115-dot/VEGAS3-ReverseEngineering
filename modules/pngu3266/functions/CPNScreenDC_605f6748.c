/* Module: pngu3266.dll
   Function: CPNScreenDC
   Address: 605f6748
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNScreenDC::CPNScreenDC(class CPNScreenDC const &) */

CPNScreenDC * __thiscall CPNScreenDC::CPNScreenDC(CPNScreenDC *this,CPNScreenDC *param_1)

{
                    /* 0x6748  131  ??0CPNScreenDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &_vftable_;
  return this;
}


