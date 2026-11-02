/* Module: rmbe3260.dll
   Function: FUN_66019740
   Address: 66019740
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66019740(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *local_8;
  
  local_8 = (int *)0x0;
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1,param_2,param_3,&local_8);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*local_8 + 0x10))(local_8,param_4);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
    }
  }
  return iVar1;
}


