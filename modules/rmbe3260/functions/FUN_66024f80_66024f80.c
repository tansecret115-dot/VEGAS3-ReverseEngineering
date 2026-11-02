/* Module: rmbe3260.dll
   Function: FUN_66024f80
   Address: 66024f80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66024f80(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x56) = param_2;
  *(undefined4 *)(param_1 + 0x5a) = param_3;
  return 0;
}


