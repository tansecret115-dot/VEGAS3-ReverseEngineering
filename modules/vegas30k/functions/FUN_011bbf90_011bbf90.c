/* Module: vegas30k.dll
   Function: FUN_011bbf90
   Address: 011bbf90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011bbf90(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[0x86];
  *param_1 = &PTR_LAB_011eba4c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x86] = 0;
  if ((LPCVOID)param_1[0xb2] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb2]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb2]);
    GlobalFree(pvVar2);
    param_1[0xb2] = 0;
    return;
  }
  param_1[0xb2] = 0;
  return;
}


