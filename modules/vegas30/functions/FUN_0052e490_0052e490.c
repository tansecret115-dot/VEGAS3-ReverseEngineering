/* Module: vegas30.exe
   Function: FUN_0052e490
   Address: 0052e490
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0052e490(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int local_10 [3];
  undefined4 local_4;
  
  local_10[2] = *param_3;
  local_10[0] = *param_2;
  local_10[1] = 0;
  local_4 = param_3[1];
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x3ee,param_1,&LAB_0052e140,local_10);
  if ((iVar1 == 1) && (*param_2 = local_10[0], local_10[0] != 0)) {
    *param_3 = local_10[2];
    param_3[1] = local_4;
  }
  return iVar1 == 1;
}


