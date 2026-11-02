/* Module: vegas30.exe
   Function: FUN_004e5d40
   Address: 004e5d40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004e5e1d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5d40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 extraout_ST0;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = FUN_004e5fd0();
  if (local_28 == 0) {
    return;
  }
  floor(((double)*(longlong *)(param_1 + 0xb90) * (double)*(int *)(param_1 + 0xad0)) /
        (double)*(int *)(param_1 + 0xb98) + _DAT_00610560);
  local_10 = (double)(ulonglong)*(uint *)(param_1 + 0xdac);
  lVar6 = ftol();
  local_20 = param_3;
  local_2c = param_3;
  local_10 = (double)((float10)*(int *)(param_1 + 0xb98) /
                     ((float10)*(longlong *)(param_1 + 0xb90) * extraout_ST0 *
                     (float10)_DAT_006106c8));
  if (0 < param_3) {
    local_24 = (uint)*(ushort *)(param_1 + 0xdaa);
    if (local_10 <= _DAT_006106d0) {
      local_18 = lVar6;
      lVar7 = ftol();
      local_1c = param_3;
      local_18 = lVar7 + CONCAT44((int)((ulonglong)lVar6 >> 0x20),(int)local_18);
      local_20 = **(int **)(param_1 + 0xe18);
      uVar4 = (undefined4)((ulonglong)local_18 >> 0x20);
      uVar8 = ftol(local_28,param_3,&local_2c);
      (**(code **)(local_20 + 0x34))(*(undefined4 *)(param_1 + 0xe18),(int)local_18,uVar4,uVar8);
      lVar6 = CONCAT44(uVar4,(int)local_18);
      iVar1 = local_1c;
      if (local_1c <= local_2c) goto LAB_004e5f02;
    }
    else {
      local_2c = param_3 + 1;
      if (0 < lVar6) {
        lVar6 = lVar6 + -1;
        local_2c = param_3 + 2;
      }
      local_18._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      uVar4 = local_18._4_4_;
      local_20 = local_2c;
      local_18 = lVar6;
      (**(code **)(**(int **)(param_1 + 0xe18) + 0x34))
                (*(int **)(param_1 + 0xe18),lVar6,local_2c,local_2c >> 0x1f,local_28,local_2c,
                 &local_2c);
      lVar6 = CONCAT44(uVar4,(int)local_18);
      iVar1 = local_20;
      if (local_20 <= local_2c) goto LAB_004e5f02;
    }
    lVar6 = CONCAT44(uVar4,(int)local_18);
    uVar2 = (iVar1 - local_2c) * local_24;
    puVar5 = (undefined4 *)(local_28 + local_24 * local_2c * 4);
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
LAB_004e5f02:
  local_18._0_4_ = (int)lVar6;
  *(undefined4 *)(param_1 + 0xe20) = *(undefined4 *)(param_1 + 0xb88);
  *(int *)(param_1 + 0xe58) = (int)local_18;
  *(undefined4 *)(param_1 + 0xe24) = *(undefined4 *)(param_1 + 0xb8c);
  *(int *)(param_1 + 0xe5c) = (int)((ulonglong)lVar6 >> 0x20);
  local_18._0_4_ = *(int *)(param_1 + 0xdac);
  if ((int)local_18 == 0) {
    uVar8 = 0;
  }
  else {
    local_18._4_4_ = 0;
    uVar8 = ftol();
  }
  *(undefined8 *)(param_1 + 0xe50) = uVar8;
  *(undefined4 *)(param_1 + 0xe28) = *(undefined4 *)(param_1 + 0xba0);
  *(undefined4 *)(param_1 + 0xe2c) = *(undefined4 *)(param_1 + 0xba4);
  *(undefined4 *)(param_1 + 0xe60) = (undefined4)local_10;
  *(undefined4 *)(param_1 + 0xe64) = local_10._4_4_;
  *(uint *)(param_1 + 0xe6c) = (uint)*(ushort *)(param_1 + 0xdaa);
  *(int *)(param_1 + 0xe48) = param_3;
  *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0x678);
  return;
}


