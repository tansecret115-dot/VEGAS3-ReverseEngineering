/* Module: vidcap30.exe
   Function: FUN_004611b0
   Address: 004611b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004611b0(int param_1,int param_2)

{
  if (param_2 == 0x203) {
    SendMessageA(*(HWND *)(param_1 + 8),0x111,(uint)*(ushort *)(param_1 + 4),0);
  }
  return 0;
}


