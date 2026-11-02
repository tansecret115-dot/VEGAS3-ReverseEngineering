/* Module: vegas30.exe
   Function: FUN_0046dae0
   Address: 0046dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_0046dae0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int **ppiVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40 [2];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  piVar1 = param_1;
  if (*param_1 < 1) {
    return 1;
  }
  FUN_004694a0(param_1,&local_50,&local_5c,&local_48,&local_58,&param_1,local_54);
  ppiVar4 = local_40;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppiVar4 = (int *)0x0;
    ppiVar4 = ppiVar4 + 1;
  }
  local_38 = *piVar1;
  local_40[1] = param_1;
  local_30 = local_58;
  local_20 = local_48;
  local_18 = 1;
  local_c = 1;
  local_34 = local_5c;
  local_28 = local_50;
  local_40[0] = (int *)0x30;
  local_24 = local_4c;
  local_1c = local_44;
  local_14 = 0;
  if (param_2 != 0) {
    local_28 = param_3;
    local_24 = param_4;
    local_20 = param_5;
    local_1c = param_6;
  }
  uVar2 = _SfList_AllocAndInsertItem_20(piVar1,local_40,0x40,0,0);
  return uVar2;
}


