/* Module: rmbe3260.dll
   Function: FUN_66024ce0
   Address: 66024ce0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024ce0(int param_1,ushort param_2)

{
  if (param_2 < 3) {
    *(ushort *)(param_1 + 0x24) = param_2;
    return 0;
  }
  return 0x80070057;
}


