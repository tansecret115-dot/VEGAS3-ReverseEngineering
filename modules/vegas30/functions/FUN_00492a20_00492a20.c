/* Module: vegas30.exe
   Function: FUN_00492a20
   Address: 00492a20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00492a20(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x20c) & 2;
  if ((((uVar1 == 0) || (param_3 != 0)) && ((uVar1 != 0 || (param_3 == 0)))) &&
     ((*(int *)(param_1 + 500) != *(int *)(param_1 + 0x1fc) &&
      (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 0x200))))) {
    FUN_00492a80(param_1,param_2);
    *(uint *)(param_1 + 0x20c) = *(uint *)(param_1 + 0x20c) | 2;
  }
  return;
}


