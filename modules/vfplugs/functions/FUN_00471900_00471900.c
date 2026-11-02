/* Module: vfplugs.dll
   Function: FUN_00471900
   Address: 00471900
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00471900(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x47c) = param_2;
  return 1;
}


