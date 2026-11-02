/* Module: vegas30.exe
   Function: FUN_00501970
   Address: 00501970
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00501970(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_38 [8];
  undefined4 local_18;
  undefined4 local_14;
  
  piVar2 = local_38;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_38[1] = param_2[1];
  local_38[0] = *param_2;
  piVar2 = (int *)&stack0x0000000c;
  piVar3 = local_38 + 2;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  local_18 = 0;
  local_14 = 0;
  if (local_38[2] == 5) {
    local_38[2] = 0xd;
  }
  iVar1 = _SfDialogBoxParam_20(DAT_00647204,0x322,param_1,&LAB_00501860,local_38);
  if (iVar1 == 1) {
    *param_2 = local_38[0];
    param_2[1] = local_38[1];
    return 0;
  }
  return 1;
}


