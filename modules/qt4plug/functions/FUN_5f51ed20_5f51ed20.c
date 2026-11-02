/* Module: qt4plug.dll
   Function: FUN_5f51ed20
   Address: 5f51ed20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f51ed20(int param_1)

{
  HGLOBAL pvVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x14),2000);
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_5f580d20();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x78) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x78));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_5f57c110();
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(HGDIOBJ *)(param_1 + 0x50) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(HDC *)(param_1 + 0x4c) != (HDC)0x0) {
    DeleteDC(*(HDC *)(param_1 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_5f57b390();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_5f57b390();
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (*(void **)(param_1 + 0x1d4) != (void *)0x0) {
    free(*(void **)(param_1 + 0x1d4));
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  ReleaseMutex(*(HANDLE *)(param_1 + 0x14));
  return 0;
}


