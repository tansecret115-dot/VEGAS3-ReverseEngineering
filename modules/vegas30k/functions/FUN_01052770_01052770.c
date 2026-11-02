/* Module: vegas30k.dll
   Function: FUN_01052770
   Address: 01052770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01052770(int param_1,CHAR *param_2)

{
  CHAR CVar1;
  ushort uVar2;
  LPCSTR lpsz;
  uint uVar3;
  uint uVar4;
  LPCSTR pCVar5;
  CHAR *pCVar6;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 0x12) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x10);
  }
  pCVar5 = (LPCSTR)(uVar2 + 0x14 + param_1);
  CVar1 = *pCVar5;
  lpsz = pCVar5;
  while ((CVar1 != '\0' && (CVar1 != '\t'))) {
    lpsz = CharNextA(lpsz);
    CVar1 = *lpsz;
  }
  uVar3 = (int)lpsz - (int)pCVar5;
  pCVar6 = param_2;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pCVar6 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    pCVar6 = pCVar6 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pCVar6 = *pCVar5;
    pCVar5 = pCVar5 + 1;
    pCVar6 = pCVar6 + 1;
  }
  param_2[uVar3] = '\0';
  return;
}


