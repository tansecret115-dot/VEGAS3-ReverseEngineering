/* Module: pngu3266.dll
   Function: CPNPaintDC
   Address: 605fca99
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPaintDC::CPNPaintDC(class CPNPaintDC const &) */

CPNPaintDC * __thiscall CPNPaintDC::CPNPaintDC(CPNPaintDC *this,CPNPaintDC *param_1)

{
  int iVar1;
  CPNPaintDC *pCVar2;
  CPNPaintDC *pCVar3;
  
                    /* 0xca99  108  ??0CPNPaintDC@@QAE@ABV0@@Z */
  CPNDC::CPNDC((CPNDC *)this,(CPNDC *)param_1);
  *(undefined ***)this = &XPNPaintDC::_vftable_;
  pCVar2 = param_1 + 0x1df;
  pCVar3 = this + 0x1df;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x21f) = *(undefined4 *)(param_1 + 0x21f);
  *(undefined ***)this = &_vftable_;
  return this;
}


