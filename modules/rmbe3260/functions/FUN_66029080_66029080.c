/* Module: rmbe3260.dll
   Function: FUN_66029080
   Address: 66029080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66029080(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x148) = param_3;
  *(undefined4 *)(param_1 + 0x14c) = param_2;
  FUN_6602b490((void *)(param_1 + 0xb8),param_3);
  return 0;
}


