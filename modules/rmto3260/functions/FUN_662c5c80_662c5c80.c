/* Module: rmto3260.dll
   Function: FUN_662c5c80
   Address: 662c5c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c5c80(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  return 0;
}


