/* Module: vegas30.exe
   Function: FUN_0045f6d0
   Address: 0045f6d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0045f991) */
/* WARNING: Removing unreachable block (ram,0x0045f9ab) */

void FUN_0045f6d0(int param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char *local_88 [2];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78 [6];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_50 [80];
  
  local_a8._0_4_ = *(uint *)(param_1 + 0xb70);
  local_a8._4_4_ = *(int *)(param_1 + 0xb74);
  puVar7 = (undefined4 *)(param_1 + 0x20);
  puVar9 = local_78;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar8 = 0;
  local_7c = 0;
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  if (*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0) {
    FUN_004582a0(param_1,&local_a8,&local_a0);
  }
  if (param_2 == 1) {
    local_98 = *(undefined4 *)(param_1 + 0x3d4);
    local_94 = *(undefined4 *)(param_1 + 0x3d8);
    local_90 = *(undefined4 *)(param_1 + 0x3dc);
    local_8c = *(undefined4 *)(param_1 + 0x3e0);
    uVar6 = (uint)local_a8;
    local_80 = local_a8._4_4_;
  }
  else if (param_2 == 2) {
    uVar6 = (uint)local_a0 + (uint)local_a8;
    local_80 = local_a0._4_4_ + local_a8._4_4_ + (uint)CARRY4((uint)local_a0,(uint)local_a8);
    local_98 = *(undefined4 *)(param_1 + 0x3e4);
    local_94 = *(undefined4 *)(param_1 + 1000);
    local_90 = *(undefined4 *)(param_1 + 0x3ec);
    local_8c = *(undefined4 *)(param_1 + 0x3f0);
    uVar8 = local_7c;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    local_98 = *(undefined4 *)(param_1 + 0x3f4);
    local_94 = *(undefined4 *)(param_1 + 0x3f8);
    local_90 = *(undefined4 *)(param_1 + 0x3fc);
    local_8c = *(undefined4 *)(param_1 + 0x400);
    local_60 = 0;
    local_5c = 0;
    uVar6 = (uint)local_a0;
    uVar8 = 2;
    local_80 = local_a0._4_4_;
  }
  _SfNanoTimeToTextEx_20(local_50,local_78,uVar6,local_80,uVar8);
  local_88[0] = (char *)FUN_00404d90(*(undefined4 *)(param_1 + 4),0xffffffff,&local_98,100,local_50,
                                     0x50);
  if (local_88[0] == (char *)0x0) {
    lVar10 = _SfTextToNanoTimeToken2_40(local_50,local_78,0,0,0,0,0,0,uVar8,local_88);
    iVar5 = (int)((ulonglong)lVar10 >> 0x20);
    uVar3 = (uint)lVar10;
    if ((lVar10 != CONCAT44(local_80,uVar6)) &&
       ((((lVar10 != 0 || (cVar1 = *local_88[0], cVar1 == '\0')) || (cVar1 == '0')) ||
        (iVar4 = _ismbcspace((int)cVar1), iVar4 != 0)))) {
      lVar11 = CONCAT44(local_a8._4_4_,(uint)local_a8);
      if (param_2 == 1) {
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0);
        lVar2 = lVar10;
        if (((uint)local_a0 != 0 || local_a0._4_4_ != 0) &&
           (local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0), DAT_00647728 == 0)) {
          local_a0 = CONCAT44(local_a0._4_4_ +
                              ((local_a8._4_4_ - iVar5) - (uint)((uint)local_a8 < uVar3)) +
                              (uint)CARRY4((uint)local_a0,(uint)local_a8 - uVar3),
                              (uint)local_a0 + ((uint)local_a8 - uVar3));
        }
      }
      else {
        lVar2 = lVar11;
        if (param_2 == 2) {
          if ((DAT_00647728 == 0) || ((uint)local_a0 == 0 && local_a0._4_4_ == 0)) {
            local_a0 = lVar10 - lVar11;
          }
          else if (lVar10 == lVar11) {
            local_a0 = 0;
          }
          else {
            lVar2 = lVar10 - CONCAT44(local_a0._4_4_,(uint)local_a0);
            if ((int)((iVar5 - local_a0._4_4_) - (uint)(uVar3 < (uint)local_a0)) < 0) {
              local_a0 = lVar10 + lVar11;
              lVar2 = lVar11;
            }
          }
        }
        else {
          local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0);
          if (param_2 == 3) {
            local_a0 = lVar10;
          }
        }
      }
      local_a8 = lVar2;
      FUN_00453340(param_1,lVar2,local_a0,3);
      lVar10 = local_a8;
      uVar6 = *(uint *)(param_1 + 0xb88);
      if ((local_a8 < *(longlong *)(param_1 + 0xb88)) ||
         (CONCAT44(*(int *)(param_1 + 0xb94) + *(int *)(param_1 + 0xb8c) +
                   (uint)CARRY4(*(uint *)(param_1 + 0xb90),uVar6),*(uint *)(param_1 + 0xb90) + uVar6
                  ) < local_a8)) {
        uVar8 = *(undefined4 *)(param_1 + 0xb90);
        lVar11 = __alldiv(uVar8,*(undefined4 *)(param_1 + 0xb94),10,0);
        local_a8 = lVar10 - lVar11;
        if ((local_a8 < 0x100000000) && (local_a8 < 0)) {
          local_a8 = 0;
        }
        FUN_004543c0(param_1,local_a8,uVar8,*(undefined4 *)(param_1 + 0xb94),1);
      }
    }
  }
  return;
}


