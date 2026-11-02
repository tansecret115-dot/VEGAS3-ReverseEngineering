/* Module: g2plug.dll
   Function: FUN_5f8063d0
   Address: 5f8063d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f8063d0(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_FUN_5f86ad88;
  if ((param_1[9] != 0) && (piVar1 = (int *)param_1[4], piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x40))(piVar1,param_1[9]);
  }
  if ((LPCVOID)param_1[8] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[8]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[8]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[10] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[10]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[10]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[0xb] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb]);
    GlobalFree(pvVar2);
  }
  piVar1 = (int *)param_1[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *param_1 = &PTR_LAB_5f86adfc;
  return;
}


