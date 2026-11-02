/* Module: rmbe3260.dll
   Function: FUN_66013aa0
   Address: 66013aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66013aa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  return 0;
}


