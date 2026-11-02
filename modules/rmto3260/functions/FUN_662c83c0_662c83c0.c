/* Module: rmto3260.dll
   Function: FUN_662c83c0
   Address: 662c83c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c83c0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x5a) = param_2;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  return 0;
}


