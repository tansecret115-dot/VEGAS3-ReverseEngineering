/* Module: vegas30.exe
   Function: FUN_00455400
   Address: 00455400
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455400(int param_1)

{
  if (*(HWND *)(param_1 + 0x210) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x210));
  }
  FUN_00455300(param_1);
  return;
}


