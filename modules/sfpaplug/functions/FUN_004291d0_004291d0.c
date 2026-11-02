/* Module: sfpaplug.dll
   Function: FUN_004291d0
   Address: 004291d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004291d0(LPCSTR param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  LPCSTR pCVar4;
  
  if (0x1e < param_3) {
    param_3 = 0x1e;
  }
  builtin_memcpy(param_2,"    ",4);
  lstrcpynA(param_2 + 4,param_1,param_3 + -3);
  (param_2 + 4)[param_3 + -4] = '\0';
  iVar1 = lstrlenA(param_2);
  param_2[iVar1] = ':';
  iVar1 = iVar1 + 1;
  if (iVar1 < param_3 + -1) {
    uVar2 = (param_3 + -1) - iVar1;
    uVar3 = uVar2 >> 2;
    pCVar4 = param_2 + iVar1;
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      builtin_memcpy(pCVar4,"    ",4);
      pCVar4 = pCVar4 + 4;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar4 = ' ';
      pCVar4 = pCVar4 + 1;
    }
    iVar1 = iVar1 + uVar2;
  }
  param_2[iVar1] = '\0';
  return param_3;
}


