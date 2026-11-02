/* Module: vidpcore.dll
   Function: FUN_5dead430
   Address: 5dead430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5dead430(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    if (*(int *)(param_1 + 0x90) == 5) {
      *(uint *)(param_1 + 0x7c) = (uint)((param_4 & 10) != 0);
      FUN_5deacf30(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_5deacdf0(param_1,param_2,param_3);
    FUN_5deaceb0(param_1,uVar1,0);
  }
  return;
}


