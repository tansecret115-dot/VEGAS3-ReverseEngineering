/* Module: rmbe3260.dll
   Function: FUN_66027320
   Address: 66027320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66027320(int param_1,uint param_2)

{
  if (3 < param_2) {
    return 0x80070057;
  }
  *(uint *)(param_1 + 0x2c) = param_2;
  return 0;
}


