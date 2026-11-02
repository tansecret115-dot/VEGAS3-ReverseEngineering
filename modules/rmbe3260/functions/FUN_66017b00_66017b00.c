/* Module: rmbe3260.dll
   Function: FUN_66017b00
   Address: 66017b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66017b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return 0;
}


