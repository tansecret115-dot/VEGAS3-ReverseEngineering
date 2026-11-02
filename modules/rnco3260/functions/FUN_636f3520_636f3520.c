/* Module: rnco3260.dll
   Function: FUN_636f3520
   Address: 636f3520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f3520(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x48) = 1;
  return 0;
}


