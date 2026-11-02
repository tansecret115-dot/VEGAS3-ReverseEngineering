/* Module: sfnetmedia.dll
   Function: FUN_00427aa0
   Address: 00427aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00427aa0(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  pvVar1 = (LPCVOID)param_1[0x1d];
  *param_1 = &PTR_FUN_0043ae44;
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
  FUN_004275f0(param_1);
  return;
}


