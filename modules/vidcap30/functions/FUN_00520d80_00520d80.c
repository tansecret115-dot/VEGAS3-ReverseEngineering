/* Module: vidcap30.exe
   Function: FUN_00520d80
   Address: 00520d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00520d80(int param_1)

{
  LRESULT LVar1;
  
  if (*(HWND *)(param_1 + 0x28) != (HWND)0x0) {
    LVar1 = SendMessageA(*(HWND *)(param_1 + 0x28),0x30f,0,0);
    if (LVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


