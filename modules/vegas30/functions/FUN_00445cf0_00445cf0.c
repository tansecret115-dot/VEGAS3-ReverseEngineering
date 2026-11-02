/* Module: vegas30.exe
   Function: FUN_00445cf0
   Address: 00445cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00445cf0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = *(undefined4 *)(param_1 + 0xac);
  *param_2 = *(undefined4 *)(param_1 + 0xa8);
  param_2[3] = 400;
  uVar1 = FUN_00445160(param_1);
  param_2[2] = uVar1;
  return;
}


