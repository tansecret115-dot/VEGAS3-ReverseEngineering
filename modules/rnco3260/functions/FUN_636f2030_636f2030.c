/* Module: rnco3260.dll
   Function: FUN_636f2030
   Address: 636f2030
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_636f2030(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x40) = 1;
  return 0;
}


