/* Module: qt4plug.dll
   Function: FUN_5f51d390
   Address: 5f51d390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f51d390(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_LAB_5f596a00;
  if ((LPCVOID)param_1[0x71] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x71]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x71]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[0x72] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x72]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x72]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[0x11] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x11]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x11]);
    GlobalFree(pvVar2);
    param_1[0x11] = 0;
  }
  if ((HANDLE)param_1[5] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[5]);
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}


