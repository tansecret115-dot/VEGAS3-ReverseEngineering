/* Module: sfcdi.dll
   Function: FUN_5bf422d0
   Address: 5bf422d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf422d0(CHAR *param_1,uint param_2,LPCSTR param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CHAR *pCVar4;
  
  uVar1 = lstrlenA(param_3);
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  pCVar4 = param_1;
  for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)pCVar4 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pCVar4 = pCVar4 + 4;
  }
  uVar2 = param_2 - uVar1;
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar4 = *param_3;
    param_3 = param_3 + 1;
    pCVar4 = pCVar4 + 1;
  }
  if (uVar2 != 0) {
    uVar3 = uVar2 >> 2;
    pCVar4 = param_1 + uVar1;
    while (uVar3 != 0) {
      uVar3 = uVar3 - 1;
      builtin_memcpy(pCVar4,"    ",4);
      pCVar4 = pCVar4 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pCVar4 = ' ';
      pCVar4 = pCVar4 + 1;
    }
  }
  return;
}


