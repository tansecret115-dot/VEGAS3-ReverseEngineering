/* Module: aviplug.dll
   Function: FUN_5f9497f0
   Address: 5f9497f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f9497f0(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[0xc1];
  *param_1 = &PTR_FUN_5f9d80ec;
  param_1[0x66] = &PTR_LAB_5f9d80a4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xc1] = 0;
  }
  if ((LPVOID)param_1[0xaf] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[0xaf],0,0x8000);
    param_1[0xaf] = 0;
  }
  if ((LPCVOID)param_1[0xb1] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb1]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb1]);
    GlobalFree(pvVar2);
    param_1[0xb1] = 0;
  }
  if ((LPCVOID)param_1[0xb3] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb3]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xb3]);
    GlobalFree(pvVar2);
    param_1[0xb3] = 0;
  }
  if ((LPCVOID)param_1[0xc0] != (LPCVOID)0x0) {
    FUN_5f992dc0((LPCVOID)param_1[0xc0]);
    param_1[0xc0] = 0;
  }
  FUN_5f947430(param_1);
  return;
}


