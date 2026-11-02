/* Module: vidcap30.exe
   Function: FUN_0054d5f0
   Address: 0054d5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054d5f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,char *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4;
  undefined1 local_3;
  
  uVar2 = param_1;
  if (3 < param_5) {
    FUN_00549570(param_1,"Unrecognized equation type for pCAL chunk");
  }
  local_10 = FUN_0054cfc0(param_1,param_2,&local_18);
  uVar5 = 0xffffffff;
  local_10 = local_10 + 1;
  pcVar9 = param_7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  iVar8 = (~uVar5 - 1) + (uint)(param_6 != 0);
  iVar4 = iVar8 + 10 + local_10;
  local_14 = iVar8;
  piVar3 = (int *)FUN_00549470(param_1,param_6 * 4);
  iVar7 = 0;
  param_1 = iVar4;
  if (0 < param_6) {
    piVar6 = piVar3;
    do {
      uVar5 = 0xffffffff;
      pcVar9 = *(char **)(((int)param_8 - (int)piVar3) + (int)piVar6);
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      iVar4 = (uint)(iVar7 != param_6 + -1) + (~uVar5 - 1);
      param_1 = param_1 + iVar4;
      *piVar6 = iVar4;
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      iVar8 = local_14;
    } while (iVar7 < param_6);
  }
  FUN_0054c410(uVar2,&DAT_005b89f4,param_1);
  FUN_0054c460(uVar2,local_18,local_10);
  FUN_0054c390(local_c,param_3);
  FUN_0054c390(local_8,param_4);
  local_4 = (undefined1)param_5;
  local_3 = (undefined1)param_6;
  FUN_0054c460(uVar2,local_c,10);
  FUN_0054c460(uVar2,param_7,iVar8);
  FUN_005494b0(uVar2,local_18);
  if (0 < param_6) {
    iVar4 = (int)piVar3 - (int)param_8;
    do {
      FUN_0054c460(uVar2,*param_8,*(undefined4 *)(iVar4 + (int)param_8));
      param_8 = param_8 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  FUN_005494b0(uVar2,piVar3);
  FUN_0054c490(uVar2);
  return;
}


