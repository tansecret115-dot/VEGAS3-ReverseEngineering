/* Module: vidcap30.exe
   Function: FUN_00520e30
   Address: 00520e30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00520e30(int param_1)

{
  ShowWindow(*(HWND *)(param_1 + 0x28),0);
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_005222f0();
    return;
  }
  return;
}


