/* Module: rmbe3260.dll
   Function: FUN_6601a190
   Address: 6601a190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6601a190(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return 0;
}


