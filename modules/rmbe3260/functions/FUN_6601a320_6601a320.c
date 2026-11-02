/* Module: rmbe3260.dll
   Function: FUN_6601a320
   Address: 6601a320
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601a320(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x34) = param_2;
  if (param_2 != 0) {
    FUN_6604eb90((uint *)(param_1 + 0x34),1);
  }
  *(uint *)(param_1 + 0x38) = param_3;
  if (param_3 != 0) {
    FUN_6604eb90((uint *)(param_1 + 0x38),2);
  }
  return 0;
}


