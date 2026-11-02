/* Module: vegas30.exe
   Function: FUN_005014c0
   Address: 005014c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005014c0(undefined4 param_1,int *param_2,double *param_3,uint *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  int local_28 [2];
  double local_20;
  uint local_18;
  int local_14;
  double local_8;
  
  piVar2 = local_28;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  if (param_4 != (uint *)0x0) {
    local_18 = (uint)(*param_4 == 0);
  }
  if ((param_3 != (double *)0x0) && (*param_3 != _DAT_00610fd8)) {
    local_8 = *param_3 * _DAT_00613618;
  }
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    local_28[0] = *param_2;
  }
  if ((param_5 != (int *)0x0) && (*param_5 != 0)) {
    local_14 = *param_5;
  }
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x307,param_1,&LAB_00501350,local_28);
  if (iVar1 == 1) {
    local_20 = local_20 * _DAT_00619d40;
    *param_2 = local_28[0];
    *param_3 = local_20;
    *param_4 = (uint)(local_18 == 0);
    *param_5 = local_14;
    return 0;
  }
  return 1;
}


