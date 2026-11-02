/* Module: vidpcore.dll
   Function: operator=
   Address: 5dea1380
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CSfSurface & __thiscall CSfSurface::operator=(class CSfSurface const &) */

CSfSurface * __thiscall CSfSurface::operator=(CSfSurface *this,CSfSurface *param_1)

{
  int iVar1;
  CSfSurface *pCVar2;
  
                    /* 0xa1380  8  ??4CSfSurface@@QAEAAV0@ABV0@@Z */
  pCVar2 = this;
  for (iVar1 = 0x15e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}


