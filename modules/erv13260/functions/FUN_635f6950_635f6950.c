/* Module: erv13260.dll
   Function: FUN_635f6950
   Address: 635f6950
   Source: Ghidra pseudocode (Stage 10 batch) */


bool __cdecl FUN_635f6950(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_stack_fffffed4;
  undefined4 local_94 [19];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  void *local_30;
  int local_2c;
  void *local_28;
  int local_24;
  void *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar1 = param_5;
  local_2c = *param_5;
  local_24 = param_5[1];
  local_34 = *(int *)((int)param_5 + 0x23cb);
  iVar5 = *(int *)((int)param_5 + 0x23cf);
  local_38 = param_5[0xb];
  bVar3 = *(byte *)(param_5 + 0x754);
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_8 = 0;
  local_c = malloc(0xc);
  DAT_63606d08 = malloc(0xc);
  FUN_635f7bf0((int)param_1,local_c,param_5[3]);
  FUN_635f7bf0((int)param_2,DAT_63606d08,param_5[3]);
  puVar4 = (undefined4 *)FUN_635f24b0(local_94,param_5[0x73d],local_34,iVar5,(uint)bVar3);
  puVar7 = local_94;
  for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  local_20 = malloc(0x100);
  local_28 = malloc(0x100);
  local_30 = malloc(0x100);
  if (param_5[0x739] != 0) {
    param_5[0x739] = 0;
    local_10 = 1;
  }
  if (param_5[0x73a] != 0) {
    param_5[0x73a] = 0;
    local_14 = 1;
  }
  if (param_5[0x73b] != 0) {
    param_5[0x73b] = 0;
    local_18 = 1;
  }
  local_48 = param_5[0x73d];
  param_5[0x73d] = 3;
  *param_3 = 0;
  local_3c = 0;
  iVar5 = local_24;
  if (0 < local_24) {
    param_2 = (int *)(local_38 + 0x12b0);
    do {
      if (0 < local_2c) {
        param_5 = (int *)0x0;
        local_44 = local_38 + 0x1204;
        local_1c = local_3c << 4;
        param_1 = param_2;
        local_40 = local_2c;
        do {
          iVar5 = local_1c;
          puVar4 = local_94;
          puVar7 = (undefined4 *)&stack0xfffffed4;
          for (iVar6 = 0x12; piVar2 = local_c, iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar7 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar7 = puVar7 + 1;
          }
          FUN_635f2750(local_c,DAT_63606d08,DAT_63606d08,(int)param_5,iVar5,(int *)0x0,0,
                       in_stack_fffffed4);
          iVar5 = *(int *)(*param_1 + 0x10);
          *param_3 = *param_3 + iVar5;
          bVar3 = FUN_635fa1c0(*piVar2,(int)param_5,local_1c,iVar5,local_34);
          if (CONCAT31(extraout_var,bVar3) == 3) {
            local_8 = local_8 + 1;
          }
          param_1 = param_1 + 1;
          param_5 = param_5 + 4;
          local_40 = local_40 + -1;
          iVar5 = local_24;
        } while (local_40 != 0);
      }
      local_3c = local_3c + 1;
      param_2 = param_2 + 0x2a;
    } while (local_3c < iVar5);
  }
  iVar6 = local_8;
  iVar5 = iVar5 * local_2c;
  *param_4 = (local_8 * 100) / iVar5;
  piVar1[0x739] = local_10;
  piVar1[0x73a] = local_14;
  piVar1[0x73b] = local_18;
  piVar1[0x73d] = local_48;
  free(local_20);
  free(local_28);
  free(local_30);
  free(local_c);
  free(DAT_63606d08);
  return iVar5 / 2 < iVar6;
}


