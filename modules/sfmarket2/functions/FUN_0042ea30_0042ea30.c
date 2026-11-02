/* Module: sfmarket2.dll
   Function: FUN_0042ea30
   Address: 0042ea30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0042ea30(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  pvVar1 = (LPCVOID)param_1[0x1d];
  *param_1 = &PTR_FUN_0049c918;
  param_1[0x1a] = 0;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    param_1[0x1d] = 0;
  }
  pvVar1 = (LPCVOID)param_1[0x1c];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    param_1[0x1c] = 0;
  }
  pvVar1 = (LPCVOID)param_1[0x1b];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    param_1[0x1b] = 0;
  }
  FUN_0042e580(param_1);
  return;
}


