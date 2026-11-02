/* Module: aviplug.dll
   Function: FUN_5f944890
   Address: 5f944890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f944890(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_FUN_5f9d7e90;
  param_1[0x66] = &PTR_LAB_5f9d7e74;
  param_1[0x67] = &PTR_LAB_5f9d7e1c;
  FUN_5f947240((int)param_1,1,1);
  FUN_5f947170((int)param_1);
  piVar1 = (int *)param_1[0xd3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xd3] = 0;
  }
  piVar1 = (int *)param_1[0xd4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xd4] = 0;
  }
  if ((LPVOID)param_1[0xa5] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[0xa5],0,0x8000);
    param_1[0xa5] = 0;
  }
  if ((LPCVOID)param_1[0x7e] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x7e]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x7e]);
    GlobalFree(pvVar2);
    param_1[0x7e] = 0;
  }
  if ((LPCVOID)param_1[0x92] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x92]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x92]);
    GlobalFree(pvVar2);
    param_1[0x92] = 0;
  }
  if ((LPVOID)param_1[0xab] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[0xab],0,0x8000);
    param_1[0xab] = 0;
  }
  if ((HANDLE)param_1[0x69] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[0x69]);
    param_1[0x69] = 0;
  }
  FUN_5f943730(param_1);
  return;
}


