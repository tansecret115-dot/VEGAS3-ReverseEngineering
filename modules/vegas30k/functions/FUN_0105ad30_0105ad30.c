/* Module: vegas30k.dll
   Function: FUN_0105ad30
   Address: 0105ad30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0105ad30(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x130) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return;
}


