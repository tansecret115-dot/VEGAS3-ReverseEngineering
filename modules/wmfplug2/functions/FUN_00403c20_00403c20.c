/* Module: wmfplug2.dll
   Function: FUN_00403c20
   Address: 00403c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403c20(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_LAB_0047ba90;
  param_1[1] = &PTR_LAB_0047ba80;
  FUN_00403d80((int)param_1);
  piVar1 = (int *)param_1[0x67];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[0x66];
  param_1[0x67] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x66] = 0;
  if ((LPCVOID)param_1[0x6e] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x6e]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x6e]);
    GlobalFree(pvVar2);
    param_1[0x6e] = 0;
  }
  if ((LPCVOID)param_1[0x70] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x70]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x70]);
    GlobalFree(pvVar2);
    param_1[0x70] = 0;
  }
  if ((LPCVOID)param_1[0x6f] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x6f]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x6f]);
    GlobalFree(pvVar2);
    param_1[0x6f] = 0;
  }
  if ((HANDLE)param_1[2] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[2]);
  }
  piVar1 = (int *)param_1[0x68];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[0x68] = 0;
  return;
}


