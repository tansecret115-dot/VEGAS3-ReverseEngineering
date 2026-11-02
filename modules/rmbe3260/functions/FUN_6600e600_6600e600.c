/* Module: rmbe3260.dll
   Function: FUN_6600e600
   Address: 6600e600
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600e600(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return 0;
}


