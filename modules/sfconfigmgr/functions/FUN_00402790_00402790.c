/* Module: sfconfigmgr.dll
   Function: FUN_00402790
   Address: 00402790
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00402790(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_0040aa50((int)param_1,param_2,param_3,&local_4);
  if (-1 < iVar1) {
    param_3 = (int *)0x0;
    iVar1 = FUN_0040abb0(param_1,local_4,param_4,&param_3);
    if (-1 < iVar1) {
      (**(code **)(*param_3 + 8))(param_3);
      param_3 = (int *)0x0;
    }
    (**(code **)(*local_4 + 8))(local_4);
  }
  return iVar1;
}


