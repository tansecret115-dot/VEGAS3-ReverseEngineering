/* Module: vegas30k.dll
   Function: FUN_01126c60
   Address: 01126c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01126c60(int param_1,int param_2)

{
  if (8 < param_2) {
    FUN_01155f80(param_1,"Too many bytes for PNG signature.");
  }
  *(byte *)(param_1 + 0x124) = (param_2 < 0) - 1U & (byte)param_2;
  return;
}


