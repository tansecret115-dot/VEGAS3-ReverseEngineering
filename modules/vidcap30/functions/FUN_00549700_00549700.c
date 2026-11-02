/* Module: vidcap30.exe
   Function: FUN_00549700
   Address: 00549700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00549700(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_4;
  return;
}


