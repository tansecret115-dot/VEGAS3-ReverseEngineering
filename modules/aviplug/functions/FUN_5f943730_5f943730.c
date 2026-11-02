/* Module: aviplug.dll
   Function: FUN_5f943730
   Address: 5f943730
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f943730(undefined4 *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  *param_1 = &PTR_LAB_5f9d7d78;
  if ((LPCVOID)param_1[0x15] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x15]);
    GlobalFree(pvVar2);
    param_1[0x15] = 0;
  }
  if ((LPCVOID)param_1[0x1e] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1e]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[0x1e]);
    GlobalFree(pvVar2);
    param_1[0x1e] = 0;
  }
  if ((LPVOID)param_1[0x18] != (LPVOID)0x0) {
    VirtualFree((LPVOID)param_1[0x18],0,0x8000);
    param_1[0x18] = 0;
  }
  if ((HANDLE)param_1[2] != (HANDLE)0xffffffff) {
    CloseHandle((HANDLE)param_1[2]);
    param_1[2] = 0xffffffff;
  }
  piVar1 = (int *)param_1[100];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[100] = 0;
  }
  InterlockedDecrement((LONG *)&DAT_5f9f419c);
  return;
}


