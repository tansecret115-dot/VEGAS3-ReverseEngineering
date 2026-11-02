/* Module: rmbe3260.dll
   Function: FUN_66021260
   Address: 66021260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66021260(int param_1,ushort param_2)

{
  if (param_2 < 2) {
    *(ushort *)(param_1 + 0x178) = param_2;
    return 0;
  }
  return 0x80070057;
}


