/* Module: rmbe3260.dll
   Function: FUN_660136e0
   Address: 660136e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660136e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  return 0;
}


