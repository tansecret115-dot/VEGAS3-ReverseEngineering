/* Module: vidcap30.exe
   Function: FUN_00407f20
   Address: 00407f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407f20(void)

{
  if (*(int *)(DAT_005ba4c0 + 0x38) != 0) {
    SendMessageA(*(HWND *)(*(int *)(DAT_005ba4c0 + 0x38) + 8),0x15,0,0);
  }
  return;
}


