/* Module: wmfplug2.dll
   Function: FUN_00405260
   Address: 00405260
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00405260(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_LAB_0047baec;
  FUN_00406750((int)param_1);
  piVar1 = (int *)param_1[0x5a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x59];
  param_1[0x5a] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x59] = 0;
  if ((LPCVOID)param_1[0xc] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xc]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xc]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[0xd] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xd]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0xd]);
    GlobalFree(pvVar2);
  }
  if ((LPCVOID)param_1[0x10] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x10]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x10]);
    GlobalFree(pvVar2);
  }
  if ((HANDLE)param_1[4] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[4]);
  }
  return;
}


