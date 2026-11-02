/* Module: vegas30k.dll
   Function: FUN_011d75b0
   Address: 011d75b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011d75b0(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[3];
  *param_1 = &PTR_LAB_011ec788;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((LPCVOID)param_1[5] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[5]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[5]);
    GlobalFree(pvVar2);
    param_1[5] = 0;
    return;
  }
  param_1[5] = 0;
  return;
}


