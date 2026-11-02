/* Module: rmbe3260.dll
   Function: FUN_66027370
   Address: 66027370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66027370(int param_1,uint param_2)

{
  if (3 < param_2) {
    return 0x80070057;
  }
  *(uint *)(param_1 + 0x34) = param_2;
  return 0;
}


