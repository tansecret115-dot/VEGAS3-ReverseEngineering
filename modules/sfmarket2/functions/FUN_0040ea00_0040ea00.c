/* Module: sfmarket2.dll
   Function: FUN_0040ea00
   Address: 0040ea00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0040ea00(undefined4 *param_1)

{
  LPCVOID pvVar1;
  HGLOBAL pvVar2;
  
  pvVar1 = (LPCVOID)param_1[1];
  *param_1 = &PTR_FUN_00495efc;
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    param_1[1] = 0;
  }
  pvVar1 = (LPCVOID)param_1[2];
  if (pvVar1 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pvVar1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
    param_1[2] = 0;
  }
  return;
}


