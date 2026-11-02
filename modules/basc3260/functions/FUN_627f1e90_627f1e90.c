/* Module: basc3260.dll
   Function: FUN_627f1e90
   Address: 627f1e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_627f1e90(int *param_1,undefined4 param_2,char *param_3)

{
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_627f3160(param_3,&local_8);
  (**(code **)(*param_1 + 0x2c))(param_1,param_2,local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}


