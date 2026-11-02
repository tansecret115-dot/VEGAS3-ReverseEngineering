/* Module: vegas30.exe
   Function: FUN_0053fb00
   Address: 0053fb00
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_0053fb00(uint param_1,int param_2,int *param_3,uint param_4,int param_5,uint param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar1 = param_2;
  iVar9 = 0;
  local_1c = 0;
  if (*param_3 != *(int *)(param_2 + 0x1c)) {
    return false;
  }
  iVar4 = FUN_0057c190(0,param_1 + 0xc58,4);
  local_1c = local_1c + iVar4;
  param_1 = *(uint *)(iVar1 + 0x10) >> 0x11 & 1;
  iVar4 = FUN_0057c190(local_1c,&param_1,4);
  local_1c = local_1c + iVar4;
  iVar4 = FUN_0057c190(local_1c,iVar1 + 0x20,4);
  local_1c = local_1c + iVar4;
  iVar4 = FUN_0057c190(local_1c,iVar1 + 0x654,4);
  local_1c = local_1c + iVar4;
  iVar4 = FUN_0057c190(local_1c,iVar1 + 0x15c,4);
  piVar7 = *(int **)(iVar1 + 0x78);
  local_1c = local_1c + iVar4;
  if ((piVar7 != (int *)0x0) && (local_10 = *piVar7, 0 < local_10)) {
    do {
      iVar4 = *(int *)(piVar7[2] + iVar9 * 4);
      iVar5 = FUN_0057c190(local_1c,iVar4 + 0x7c,4);
      local_1c = local_1c + iVar5;
      iVar4 = FUN_0057c190(local_1c,iVar4,0x10);
      local_1c = local_1c + iVar4;
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_10);
  }
  FUN_00541bb0(&local_1c,*(undefined4 *)(iVar1 + 0x7c));
  param_2 = *(int *)(iVar1 + 0x120);
  if (param_2 == 0) {
    param_2 = 1;
  }
  iVar9 = FUN_0057c190(local_1c,&param_2,4);
  local_1c = local_1c + iVar9;
  FUN_00541bb0(&local_1c,*(undefined4 *)(*(int *)(iVar1 + 8) + 0xc40));
  piVar7 = *(int **)(iVar1 + 0x28);
  if ((piVar7 != (int *)0x0) && (iVar1 = *piVar7, iVar1 != 0)) {
    local_8 = param_4;
    local_4 = param_5;
    local_18 = piVar7;
    param_2 = _SfList_FindSortedInsertIndexRange_20(piVar7,&local_8,0,0xffffffff,&LAB_005c5a20);
    if (param_2 < 1) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 + -1;
    }
    local_c = iVar1 + -1;
    local_14 = param_2;
    if (param_2 < local_c) {
      do {
        local_14 = local_14 + 1;
        iVar1 = piVar7[2];
        iVar4 = piVar7[1] * param_2;
        iVar9 = *(int *)(iVar4 + 0x14 + iVar1);
        uVar2 = *(uint *)(iVar4 + 0x10 + iVar1);
        if ((param_7 < iVar9) || ((param_7 <= iVar9 && (param_6 <= uVar2)))) break;
        iVar5 = *(int *)(iVar4 + iVar1);
        if (iVar5 != 0) {
          iVar6 = local_14 * piVar7[1];
          uVar3 = *(uint *)(iVar6 + 0x10 + iVar1);
          iVar6 = *(int *)(iVar6 + 0x14 + iVar1);
          if (((((param_5 <= iVar9) && ((param_5 < iVar9 || (param_4 <= uVar2)))) &&
               ((iVar9 < param_7 || ((iVar9 <= param_7 && (uVar2 < param_6)))))) ||
              (((param_5 <= iVar6 && ((param_5 < iVar6 || (param_4 <= uVar3)))) &&
               ((iVar6 < param_7 || ((iVar6 <= param_7 && (uVar3 < param_6)))))))) ||
             ((piVar7 = local_18, iVar9 <= param_5 &&
              ((((iVar9 < param_5 || (uVar2 <= param_4)) && (param_5 <= iVar6)) &&
               ((param_5 < iVar6 || (param_4 < uVar3)))))))) {
            iVar9 = FUN_0057c190(local_1c,iVar5 + 0x30,8);
            local_1c = local_1c + iVar9;
            iVar9 = FUN_0057c190(local_1c,iVar5 + 0x3c,4);
            local_1c = local_1c + iVar9;
            iVar9 = FUN_0057c190(local_1c,iVar5 + 0xb4,4);
            local_1c = local_1c + iVar9;
            FUN_00541bb0(&local_1c,*(undefined4 *)(iVar5 + 0x140));
            FUN_00541bb0(&local_1c,*(undefined4 *)(iVar5 + 0x200));
            FUN_00541bb0(&local_1c,*(undefined4 *)(iVar5 + 0x204));
            local_10 = *(int *)(iVar5 + 0x1e4);
            if (local_10 == 0) {
              local_10 = 1;
            }
            iVar9 = FUN_0057c190(local_1c,&local_10,4);
            param_1 = 0xffffffff;
            local_1c = local_1c + iVar9;
            if (((*(int *)(iVar5 + 0x50) != 0) &&
                (iVar9 = *(int *)(*(int *)(iVar5 + 0x50) + 0x18), iVar9 != 0)) &&
               (FUN_00541bb0(&local_1c,*(undefined4 *)(iVar9 + 0x138)),
               (*(uint *)(iVar9 + 0x134) & 0x400) != 0)) {
              if (*(uint **)(iVar9 + 0x4c0) == (uint *)0x0) {
                param_1 = 0;
              }
              else {
                param_1 = **(uint **)(iVar9 + 0x4c0);
              }
              iVar5 = FUN_0057c190(local_1c,&param_1,4);
              local_1c = local_1c + iVar5;
              if (*(undefined4 **)(iVar9 + 0x4bc) == (undefined4 *)0x0) {
                uVar8 = 0;
              }
              else {
                uVar8 = **(undefined4 **)(iVar9 + 0x4bc);
              }
              FUN_00541bb0(&local_1c,uVar8);
            }
            iVar1 = ((int *)(iVar4 + iVar1))[1];
            piVar7 = local_18;
            if (iVar1 != 0) {
              FUN_00541c10(&local_1c,iVar1);
              piVar7 = local_18;
            }
          }
        }
        param_2 = param_2 + 1;
      } while (param_2 < local_c);
    }
  }
  return local_1c == param_3[1];
}


