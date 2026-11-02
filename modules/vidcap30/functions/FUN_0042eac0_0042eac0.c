/* Module: vidcap30.exe
   Function: FUN_0042eac0
   Address: 0042eac0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042eac0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0042f4b0(param_1,1);
  *(undefined4 *)(param_2 * 0x40 + 0x420 + param_1) = param_3;
  *(undefined4 *)(param_2 * 0x40 + 0x424 + param_1) = param_4;
  FUN_0042f5d0(param_1,1);
  return;
}


