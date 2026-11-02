/* Module: qt4plug.dll
   Function: FUN_5f51bb90
   Address: 5f51bb90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51bb90(int param_1)

{
  HGLOBAL pvVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 8),2000);
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_5f580600();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_5f57b390();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_5f57b390();
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x50) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x50));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x50));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  ReleaseMutex(*(HANDLE *)(param_1 + 8));
  return 0;
}


