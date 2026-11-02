/* Module: mp3rw.dll
   Function: FUN_0042c030
   Address: 0042c030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042c030(LPCSTR param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  CHAR local_80 [64];
  CHAR local_40 [64];
  
  iVar2 = _ismbcspace((int)*param_1);
  while (iVar2 != 0) {
    param_1 = CharNextA(param_1);
    iVar2 = _ismbcspace((int)*param_1);
  }
  cVar1 = *param_1;
  pCVar3 = param_1;
  while ((cVar1 != '\0' && (iVar2 = _ismbcspace((int)*pCVar3), iVar2 == 0))) {
    pCVar3 = CharNextA(pCVar3);
    cVar1 = *pCVar3;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pCVar3;
  }
  pCVar3 = pCVar3 + (1 - (int)param_1);
  if ((LPCSTR)0x40 < pCVar3) {
    pCVar3 = (LPCSTR)0x40;
  }
  lstrcpynA(local_80,param_1,(int)pCVar3);
  local_80[(int)(pCVar3 + -1)] = '\0';
  FUN_0042c0f0(local_80,local_40);
  atol(local_40);
  return;
}


