/* Module: vegas30.exe
   Function: FUN_004ad710
   Address: 004ad710
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ad710(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6,
                int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint local_12c [4];
  int local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined1 *local_10c;
  undefined1 local_104 [260];
  
  if (param_7 == 0) {
    return 1;
  }
  if (param_1 == 0) {
    return 1;
  }
  FUN_004ab380(param_1,param_3,param_4,param_5,param_6,local_104,0x104);
  puVar4 = local_12c;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_12c[3] = param_4;
  local_118 = param_6;
  local_11c = param_5;
  local_12c[2] = param_3;
  local_10c = local_104;
  local_12c[0] = 0x10;
  local_114 = param_1;
  local_110 = param_2;
  iVar3 = FUN_004aafe0(param_1,*(undefined4 *)(param_7 + 4),param_2);
  uVar1 = DAT_0064b138;
  if (iVar3 == 0) {
    return 1;
  }
  if (((*(int *)(iVar3 + 4) != 3) || (*(int *)(iVar3 + 0x80) != 1)) || (*(int *)(iVar3 + 0x84) != 0)
     ) {
    if ((0 < param_6) || (-1 < param_6)) goto LAB_004ad864;
    if (((*(int *)(iVar3 + 4) != 3) ||
        ((*(int *)(iVar3 + 0x80) != 1 || (*(int *)(iVar3 + 0x84) != 0)))) ||
       (**(int **)(param_1 + 0x130) != 1)) {
      local_11c = *(uint *)(iVar3 + 0x20) - local_12c[2];
      local_118 = (*(int *)(iVar3 + 0x24) - local_12c[3]) -
                  (uint)(*(uint *)(iVar3 + 0x20) < local_12c[2]);
      goto LAB_004ad864;
    }
  }
  local_11c = DAT_00647e58;
  local_118 = DAT_00647e5c;
LAB_004ad864:
  iVar2 = FUN_004e9f70(DAT_0064b138,0x21,"DDSDropStream");
  if ((-1 < iVar2) && (iVar2 = FUN_004ea750(uVar1,param_7,2,1), -1 < iVar2)) {
    FUN_005b83b0(uVar1,1);
    iVar2 = FUN_005c70c0(uVar1,param_7,*(undefined4 *)(iVar3 + 8),local_12c,local_110,0,param_8);
    FUN_005b84d0(uVar1,1);
    if (-1 < iVar2) {
      FUN_004eb2b0(uVar1);
    }
    FUN_004ea040(uVar1,iVar2 < 0);
  }
  return iVar2;
}


