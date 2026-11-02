/* Module: vegas30k.dll
   Function: FUN_010b15a0
   Address: 010b15a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010b15a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  FUN_010af340(param_1,1);
  ShowCaret(*(HWND *)(param_1 + 0x3c));
  return;
}


