/* Module: pngu3266.dll
   Function: operator=
   Address: 605fcadb
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNPaintDC & __thiscall CPNPaintDC::operator=(class CPNPaintDC &) */

CPNPaintDC * __thiscall CPNPaintDC::operator=(CPNPaintDC *this,CPNPaintDC *param_1)

{
  int iVar1;
  CPNPaintDC *pCVar2;
  CPNPaintDC *pCVar3;
  
                    /* 0xcadb  477  ??4CPNPaintDC@@QAEAAV0@AAV0@@Z */
  CPNDC::operator=((CPNDC *)this,(CPNDC *)param_1);
  pCVar2 = param_1 + 0x1df;
  pCVar3 = this + 0x1df;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x21f) = *(undefined4 *)(param_1 + 0x21f);
  return this;
}


