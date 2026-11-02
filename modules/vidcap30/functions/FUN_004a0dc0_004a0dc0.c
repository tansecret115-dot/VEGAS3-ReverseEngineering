/* Module: vidcap30.exe
   Function: FUN_004a0dc0
   Address: 004a0dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004a0dc0(CHAR *param_1,LPCSTR param_2,int param_3)

{
  CHAR CVar1;
  LPCSTR lpsz;
  uint uVar2;
  uint uVar3;
  CHAR *pCVar4;
  
  for (; (param_3 != 0 && (*param_2 != '\0')); param_2 = CharNextA(param_2)) {
    if (*param_2 == '\t') {
      param_3 = param_3 + -1;
    }
  }
  CVar1 = *param_2;
  lpsz = param_2;
  while ((CVar1 != '\0' && (CVar1 != '\t'))) {
    lpsz = CharNextA(lpsz);
    CVar1 = *lpsz;
  }
  uVar2 = (int)lpsz - (int)param_2;
  pCVar4 = param_1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pCVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pCVar4 = pCVar4 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pCVar4 = *param_2;
    param_2 = param_2 + 1;
    pCVar4 = pCVar4 + 1;
  }
  param_1[uVar2] = '\0';
  return;
}


