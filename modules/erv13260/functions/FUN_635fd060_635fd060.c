/* Module: erv13260.dll
   Function: FUN_635fd060
   Address: 635fd060
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_635fd060(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined3 extraout_var;
  int iVar9;
  undefined4 *puVar10;
  int in_stack_fffffdb8;
  byte local_1b0 [8];
  byte local_1a8 [120];
  byte local_130 [8];
  byte local_128 [120];
  undefined4 local_b0 [18];
  int *local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  void *local_30;
  int local_2c;
  void *local_28;
  int *local_24;
  int local_20;
  undefined4 *local_1c;
  void *local_18;
  void *local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  local_58 = param_6[0x73b];
  local_2c = *param_6;
  local_8 = param_6[0x739];
  iVar7 = param_6[1];
  local_38 = *(int *)((int)param_6 + 0x23cb);
  local_44 = 0;
  local_14 = (void *)0x0;
  local_4c = iVar7;
  puVar6 = (undefined4 *)
           FUN_635f24b0(local_b0,param_6[0x73d],local_38,*(int *)((int)param_6 + 0x23cf),
                        (uint)*(byte *)(param_6 + 0x754));
  puVar10 = local_b0;
  for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar10 = puVar10 + 1;
  }
  local_28 = malloc(0x100);
  local_30 = malloc(0x100);
  local_18 = malloc(0x100);
  if (local_8 != 0) {
    local_14 = malloc(0x100);
  }
  local_54 = 0;
  if (0 < iVar7) {
    local_20 = 0;
    local_1c = (undefined4 *)(param_5 + 0xac);
    do {
      if (0 < local_2c) {
        local_68 = (int *)(local_54 + 1);
        local_48 = 0;
        local_10 = local_1c;
        local_60 = 0;
        do {
          local_34 = (int *)local_10[0x516];
          piVar1 = (int *)*local_10;
          local_3c = (int *)local_10[0xa2c];
          local_24 = (int *)local_10[0xf42];
          local_40 = (int *)local_10[0x1458];
          local_60 = local_60 + 1;
          FUN_635fb150(param_5,local_60,local_68,&local_5c,&local_64,0,0,0);
          if (local_58 == 0) {
            iVar7 = 0;
            local_c = (int *)0x0;
          }
          else {
            local_c = (int *)(local_5c / 2);
            iVar7 = local_64 / 2;
          }
          piVar4 = local_c;
          puVar6 = local_b0;
          puVar10 = (undefined4 *)&stack0xfffffdb8;
          for (iVar9 = 0x12; iVar3 = local_20, iVar2 = local_48, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar10 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar10 = puVar10 + 1;
          }
          FUN_635f2750(param_1,param_2,param_3,local_48,local_20,piVar4,iVar7,in_stack_fffffdb8);
          iVar7 = piVar1[4];
          if (piVar1[6] == 1) {
            piVar1[5] = 0;
          }
          else {
            if (local_8 == 0) {
              iVar9 = *param_1;
            }
            else {
              iVar8 = local_3c[4] + local_24[4] + local_34[4] + local_40[4];
              if (iVar7 <= iVar8) {
                iVar8 = iVar7;
              }
              iVar9 = *param_1;
              iVar7 = iVar8;
            }
            bVar5 = FUN_635fa1c0(iVar9,iVar2,iVar3,iVar7,local_38);
            piVar1[5] = CONCAT31(extraout_var,bVar5);
          }
          if (((piVar1[5] == 3) && (*(int *)((int)param_6 + 0x1d8f) == 0)) &&
             (local_44 = local_44 + 1, (local_4c * local_2c) / 2 < local_44)) {
            free(local_28);
            free(local_30);
            free(local_18);
            if (local_8 != 0) {
              free(local_14);
            }
            return 3;
          }
          if ((piVar1[6] == 0) && (piVar1[7] == 0)) {
            if (piVar1[5] == 3) {
              iVar7 = 5;
              puVar6 = local_10;
              do {
                FUN_635fb620((undefined4 *)*puVar6);
                puVar6 = puVar6 + 0x516;
                iVar7 = iVar7 + -1;
              } while (iVar7 != 0);
            }
            else {
              FUN_635f1000(*param_1,iVar2,iVar3,local_38,local_1b0);
              FUN_635f87e0(iVar2,iVar3,piVar1,param_4,local_1b0,0x10,0,(int)param_6);
              local_c = (int *)piVar1[4];
              if (local_8 == 0) {
                if (local_50 < (int)local_c) {
                  piVar1[1] = 0;
                  *piVar1 = 0;
                  piVar1[3] = 0;
                  piVar1[2] = 0;
                }
              }
              else {
                if (local_34[6] == 0) {
                  FUN_635f87e0(iVar2,iVar3,local_34,param_4,local_1b0,8,0,(int)param_6);
                }
                if (local_3c[6] == 0) {
                  FUN_635f87e0(iVar2,iVar3,local_3c,param_4,local_1a8,8,1,(int)param_6);
                }
                if (local_24[6] == 0) {
                  FUN_635f87e0(iVar2,iVar3,local_24,param_4,local_130,8,2,(int)param_6);
                }
                if (local_40[6] == 0) {
                  FUN_635f87e0(iVar2,iVar3,local_40,param_4,local_128,8,3,(int)param_6);
                }
                iVar7 = local_3c[4] + local_24[4] + local_34[4] + 200 + local_40[4];
                if ((local_50 < iVar7) && (local_50 < (int)local_c)) {
                  piVar1[1] = 0;
                  *piVar1 = 0;
                  piVar1[3] = 0;
                  piVar1[2] = 0;
                }
                else if (iVar7 < (int)local_c) {
                  piVar1[5] = 2;
                }
              }
            }
          }
          local_48 = iVar2 + 0x10;
          local_10 = local_10 + 1;
          iVar7 = local_4c;
        } while (local_60 < local_2c);
      }
      local_54 = local_54 + 1;
      local_1c = local_1c + 0x2a;
      local_20 = local_20 + 0x10;
    } while (local_54 < iVar7);
  }
  free(local_28);
  free(local_30);
  free(local_18);
  if (local_8 != 0) {
    free(local_14);
  }
  return 0;
}


