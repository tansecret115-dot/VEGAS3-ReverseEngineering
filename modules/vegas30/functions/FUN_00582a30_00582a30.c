/* Module: vegas30.exe
   Function: FUN_00582a30
   Address: 00582a30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00582a30(int param_1)

{
  if (*(HWND *)(param_1 + 4) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 4));
  }
  return 0;
}


