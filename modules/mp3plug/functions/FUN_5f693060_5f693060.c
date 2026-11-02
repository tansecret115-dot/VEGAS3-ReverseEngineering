/* Module: mp3plug.dll
   Function: FUN_5f693060
   Address: 5f693060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f693060(int param_1)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xea4) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea4));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea4));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0xea4) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xeac) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xeac));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xeac));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0xeac) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0xea8) != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea8));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(*(LPCVOID *)(param_1 + 0xea8));
    GlobalFree(pvVar2);
    *(undefined4 *)(param_1 + 0xea8) = 0;
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 8));
  return 0;
}


