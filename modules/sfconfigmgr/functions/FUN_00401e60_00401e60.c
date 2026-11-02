/* Module: sfconfigmgr.dll
   Function: FUN_00401e60
   Address: 00401e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401e60(int *param_1,undefined4 *param_2,int *param_3,short *param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  int iVar1;
  int *local_4;
  
  local_4 = (int *)0x0;
  iVar1 = FUN_0040aa50((int)param_1,param_2,&DAT_0041a404,&local_4);
  if (-1 < iVar1) {
    FUN_00401ec0(param_1,local_4,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


