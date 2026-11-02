/* Module: aviplug.dll
   Function: FUN_5f941ef0
   Address: 5f941ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f941ef0(int *param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  if (param_1 != (int *)0x0) {
    if ((HANDLE)param_1[0x34] != (HANDLE)0x0) {
      CloseHandle((HANDLE)param_1[0x34]);
    }
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2e));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x35));
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
  }
  return;
}


