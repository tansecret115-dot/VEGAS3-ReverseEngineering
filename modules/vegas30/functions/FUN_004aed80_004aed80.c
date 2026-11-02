/* Module: vegas30.exe
   Function: FUN_004aed80
   Address: 004aed80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004aed80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004aac00(param_1);
  FUN_004abbe0(param_1,param_2,uVar1);
  FUN_004aac70(param_1,uVar1);
  FUN_004abac0(&param_2);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  return;
}


