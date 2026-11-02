/* Module: pngu3266.dll
   Function: operator=
   Address: 605f1027
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMapLongToObj & __thiscall CPNMapLongToObj::operator=(class CPNMapLongToObj const
   &) */

CPNMapLongToObj * __thiscall
CPNMapLongToObj::operator=(CPNMapLongToObj *this,CPNMapLongToObj *param_1)

{
  int iVar1;
  CPNMapLongToObj *pCVar2;
  
                    /* 0x1027  468  ??4CPNMapLongToObj@@QAEAAV0@ABV0@@Z
                       0x1027  562  ??4_PNxEvent@@QAEAAU0@ABU0@@Z */
  pCVar2 = this;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}


