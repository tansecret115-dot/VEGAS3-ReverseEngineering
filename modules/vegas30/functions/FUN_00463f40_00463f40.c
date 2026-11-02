/* Module: vegas30.exe
   Function: FUN_00463f40
   Address: 00463f40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463f40(int param_1,HDC param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  HRGN pHVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_90;
  int local_8c;
  double local_88;
  int *local_80;
  int local_7c;
  int local_78;
  int local_74;
  HRGN local_70;
  int local_6c;
  DWORD local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  RECT local_54;
  int local_44;
  double local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  
  if (param_4 != 0) {
    local_88 = (double)*(int *)(param_4 + 0x40);
    local_98._0_4_ = *(uint *)(param_4 + 0x68) - *(uint *)(param_4 + 0x30);
    uVar1 = *(undefined4 *)(param_4 + 0x3c);
    uVar2 = *(undefined4 *)(param_4 + 0x38);
    local_98._4_4_ =
         (*(int *)(param_4 + 0x6c) - *(int *)(param_4 + 0x34)) -
         (uint)(*(uint *)(param_4 + 0x68) < *(uint *)(param_4 + 0x30));
    local_40 = (double)CONCAT44(local_98._4_4_,(int)local_98) * local_88;
    local_98 = __alldiv(uVar2,uVar1,2,0);
    iVar3 = ftol();
    iVar3 = iVar3 + *(int *)(param_4 + 0x44);
    if (iVar3 < -0x4000) {
      local_8c = -0x4000;
    }
    else {
      local_8c = 0x3fff;
      if (iVar3 < 0x4000) {
        local_8c = iVar3;
      }
    }
    uVar9 = *(uint *)(param_4 + 0x70) - *(uint *)(param_4 + 0x30);
    local_88 = (double)CONCAT44(((*(int *)(param_4 + 0x74) - *(int *)(param_4 + 0x34)) -
                                (uint)(*(uint *)(param_4 + 0x70) < *(uint *)(param_4 + 0x30))) +
                                *(int *)(param_4 + 0x6c) +
                                (uint)CARRY4(uVar9,*(uint *)(param_4 + 0x68)),
                                uVar9 + *(uint *)(param_4 + 0x68)) * local_88;
    local_98._0_4_ = uVar2;
    local_98._4_4_ = uVar1;
    __alldiv(uVar2,uVar1,2,0);
    iVar3 = ftol();
    iVar3 = iVar3 + *(int *)(param_4 + 0x44);
    if (iVar3 < -0x4000) {
      local_90 = -0x4000;
    }
    else {
      local_90 = 0x3fff;
      if (iVar3 < 0x4000) {
        local_90 = iVar3;
      }
    }
    DVar4 = GetSysColor(0xd);
    local_88 = (double)CONCAT44(local_88._4_4_,DVar4);
    local_74 = 0;
    if (0 < *(int *)(param_4 + 0x5c)) {
      local_80 = (int *)(param_4 + 0x78);
      do {
        if ((*(byte *)(local_80 + 0x13) & 1) != 0) {
          iVar3 = *local_80;
          iVar5 = *(int *)(*(int *)(iVar3 + 0x69c) + 0x24) -
                  *(int *)(*(int *)(iVar3 + 0x69c) + 0x1c);
          if (DAT_006477b8 <= iVar5) {
            FUN_004606f0(iVar3,iVar5,3,&local_6c,&local_98);
            local_78 = FUN_005be610(1,local_28);
            local_44 = local_24;
            local_40 = (double)CONCAT44(local_40._4_4_,local_20 + local_24);
            if (local_78 != 0) {
              if (((*(uint *)(iVar3 + 0x10) & 0x80000) == 0) ||
                 ((*(uint *)(iVar3 + 0x10) & 0x10000) != 0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = 1;
              }
              local_7c = FUN_005382e0(iVar5);
              iVar7 = *(int *)(iVar3 + 0x69c);
              local_64 = *(int *)(iVar7 + 0x18);
              local_5c = *(undefined4 *)(iVar7 + 0x20);
              local_60 = *(int *)(iVar7 + 0x1c) + local_6c;
              local_58 = local_60 + local_7c;
              local_54.left = *(int *)(iVar7 + 0x18);
              local_54.top = *(int *)(iVar7 + 0x1c);
              local_54.right = *(int *)(iVar7 + 0x20);
              local_54.bottom = *(int *)(iVar7 + 0x24) + -1;
              pHVar6 = CreateRectRgnIndirect(&local_54);
              local_70 = pHVar6;
              if ((pHVar6 != (HRGN)0x0) && (iVar7 = GetClipRgn(param_2,pHVar6), iVar7 != 1)) {
                DeleteObject(pHVar6);
                local_70 = (HRGN)0x0;
              }
              IntersectClipRect(param_2,local_54.left,local_54.top,local_54.right,local_54.bottom);
              iVar7 = 0;
              if (0 < local_78) {
                do {
                  local_68 = 0x808080;
                  if (iVar7 == 0) {
                    local_68 = GetSysColor(0x14);
                  }
                  iVar8 = 0;
                  local_a0 = 0;
                  uStack_9c = 0;
                  if (local_44 <= iVar7) {
                    local_a0 = 0x47ae147b;
                    uStack_9c = 0x3fa47ae1;
                    iVar8 = ((iVar7 < local_40._0_4_) - 1 & 0xff0100ff) + 0xff0000;
                  }
                  FUN_00463190(param_2,param_1,iVar3,iVar7,local_28,&local_64,&local_54,iVar5,
                               &local_68,local_a0,uStack_9c,iVar8,param_5,local_8c,local_90,
                               local_88._0_4_);
                  if (iVar5 != 0) {
                    local_60 = local_60 + local_7c;
                    local_58 = local_58 + local_7c;
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < local_78);
              }
              pHVar6 = local_70;
              SelectClipRgn(param_2,local_70);
              if (pHVar6 != (HRGN)0x0) {
                DeleteObject(pHVar6);
              }
            }
            if (((param_5 == 0) && (*(int **)(iVar3 + 0x650) != (int *)0x0)) &&
               (**(int **)(iVar3 + 0x650) != 0)) {
              iVar5 = *(int *)(iVar3 + 0x69c);
              local_38 = *(undefined4 *)(iVar5 + 0x18);
              local_34 = *(undefined4 *)(iVar5 + 0x1c);
              local_30 = *(undefined4 *)(iVar5 + 0x20);
              local_2c = *(int *)(iVar5 + 0x1c) + local_6c;
              FUN_00479350(iVar3 + 0x638,param_2,param_1 + 0xc78,&local_38,
                           *(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),
                           *(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),param_3,
                           *(uint *)(iVar3 + 0x10) >> 0x11 & 1);
            }
          }
        }
        local_74 = local_74 + 1;
        local_80 = local_80 + 0x16;
      } while (local_74 < *(int *)(param_4 + 0x5c));
    }
  }
  return;
}


