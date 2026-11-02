/* Module: vidcap30.exe
   Function: FUN_0052aa00
   Address: 0052aa00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0052aa00(int param_1,int param_2)

{
  if (8 < param_2) {
    FUN_00549540(param_1,"Too many bytes for PNG signature.");
  }
  *(byte *)(param_1 + 0x124) = (param_2 < 0) - 1U & (byte)param_2;
  return;
}


