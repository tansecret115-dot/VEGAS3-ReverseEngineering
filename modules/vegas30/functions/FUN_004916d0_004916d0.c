/* Module: vegas30.exe
   Function: FUN_004916d0
   Address: 004916d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004916d0(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(HWND *)(param_1 + 0xdc) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0xdc));
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  if (*(LPCVOID *)(param_1 + 300) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 300));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 300));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 300) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}


