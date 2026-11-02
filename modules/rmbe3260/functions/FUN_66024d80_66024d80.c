/* Module: rmbe3260.dll
   Function: FUN_66024d80
   Address: 66024d80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024d80(int param_1,uint param_2)

{
  if ((param_2 != 0) && (param_2 < 0x65)) {
    *(uint *)(param_1 + 0x36) = param_2;
    return 0;
  }
  return 0x80070057;
}


