/* Module: g2plug.dll
   Function: FUN_5f8177a0
   Address: 5f8177a0
   Source: Ghidra pseudocode (Stage 10 batch) */


LPSTR FUN_5f8177a0(undefined4 *param_1,uint param_2)

{
  SIZE_T SVar1;
  int iVar2;
  LPSTR pCVar3;
  
  if (param_1[0x4c] == 0) {
    return &DAT_5f8774ec;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  SVar1 = param_1[0x49];
  if (SVar1 - param_1[0x4a] < (uint)param_1[0x4b]) {
    param_1[0x4b] = 0;
  }
  else {
    SVar1 = SVar1 - param_1[0x4b];
  }
  pCVar3 = (LPSTR)(param_1[0x4b] + param_1[0x4c]);
  iVar2 = FUN_5f8172d0(param_1,param_2,pCVar3,SVar1);
  if (iVar2 == 0) {
    *pCVar3 = '\0';
  }
  param_1[0x4b] = param_1[0x4b] + 4 + iVar2 & 0xfffffffc;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  return pCVar3;
}


