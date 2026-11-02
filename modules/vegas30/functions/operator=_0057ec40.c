/* Module: vegas30.exe
   Function: operator=
   Address: 0057ec40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CScanlineIntersect & __thiscall CScanlineIntersect::operator=(class
   CScanlineIntersect const &) */

CScanlineIntersect * __thiscall
CScanlineIntersect::operator=(CScanlineIntersect *this,CScanlineIntersect *param_1)

{
  int iVar1;
  CScanlineIntersect *pCVar2;
  
                    /* 0x17ec40  5  ??4CScanlineIntersect@@QAEAAV0@ABV0@@Z */
  pCVar2 = this;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}


