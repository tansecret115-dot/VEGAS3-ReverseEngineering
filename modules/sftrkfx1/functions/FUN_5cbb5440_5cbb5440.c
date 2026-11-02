/* Module: sftrkfx1.dll
   Function: FUN_5cbb5440
   Address: 5cbb5440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbb5440(int param_1)

{
  HGLOBAL pvVar1;
  
  if (*(LPCVOID *)(param_1 + 0x1c) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x1c));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(LPCVOID *)(param_1 + 0x20) != (LPCVOID)0x0) {
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x20));
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(*(LPCVOID *)(param_1 + 0x20));
    GlobalFree(pvVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


