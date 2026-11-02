/* Module: rmbe3260.dll
   Function: FUN_66024d10
   Address: 66024d10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024d10(int param_1,uint param_2)

{
  if (param_2 < 10) {
    *(uint *)(param_1 + 0x26) = param_2;
    return 0;
  }
  return 0x80070057;
}


