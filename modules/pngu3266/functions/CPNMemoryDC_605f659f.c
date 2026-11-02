/* Module: pngu3266.dll
   Function: CPNMemoryDC
   Address: 605f659f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNMemoryDC::CPNMemoryDC(class CPNMemoryDC const &) */

CPNMemoryDC * __thiscall CPNMemoryDC::CPNMemoryDC(CPNMemoryDC *this,CPNMemoryDC *param_1)

{
                    /* 0x659f  91  ??0CPNMemoryDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &XPNMemDC::_vftable_;
  *(undefined4 *)(this + 0x1df) = *(undefined4 *)(param_1 + 0x1df);
  *(undefined4 *)(this + 0x1e3) = *(undefined4 *)(param_1 + 0x1e3);
  *(undefined4 *)(this + 0x1e7) = *(undefined4 *)(param_1 + 0x1e7);
  *(undefined4 *)(this + 0x1eb) = *(undefined4 *)(param_1 + 0x1eb);
  *(undefined4 *)(this + 0x1ef) = *(undefined4 *)(param_1 + 0x1ef);
  *(undefined ***)this = &_vftable_;
  return this;
}


