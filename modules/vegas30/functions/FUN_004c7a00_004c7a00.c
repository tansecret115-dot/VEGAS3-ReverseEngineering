/* Module: vegas30.exe
   Function: FUN_004c7a00
   Address: 004c7a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004c7a00(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  tagRECT local_44;
  uint *local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  local_34 = *(uint **)(param_1 + 0x5d0);
  if (*(int *)(param_1 + 0xbc8) == 0) {
    local_1c = (int *)0x0;
    local_8 = 0;
  }
  else {
    local_1c = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (local_1c == (int *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = *local_1c;
    }
  }
  local_14 = *(int *)(iVar2 + 0xbac);
  param_1 = 0;
  local_10 = 0;
  local_24 = -1;
  local_28 = 0;
  if (local_8 < 1) {
LAB_004c7ba5:
    if (local_8 != 0) {
      iVar7 = *(int *)local_1c[2];
      param_1 = *(int *)(iVar7 + 0x694);
      if ((*(uint *)(iVar7 + 0x10) & 0x10000) == 0) {
        if ((*(int *)(iVar7 + 4) == 3) &&
           (((*(uint *)(iVar7 + 0x10) & 0x40000) != 0 || (iVar6 = FUN_005be5f0(1), iVar6 != 0)))) {
          local_2c = *(uint *)(iVar2 + 0xbb0);
          local_30 = *(int *)(iVar2 + 0xbac);
          uVar5 = (local_2c ^ (int)local_2c >> 0x1f) - ((int)local_2c >> 0x1f) >> 1;
          lVar1 = (longlong)param_1 * (longlong)(int)local_30;
          if (lVar1 < 0) {
            lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                             (uint)lVar1 - uVar5);
            uVar5 = 0;
          }
          local_20 = (int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)local_2c);
          FUN_004606f0(iVar7,local_20,0,local_18,&param_1);
          local_2c = *(uint *)(iVar2 + 0xbb0);
          local_30 = *(int *)(iVar2 + 0xbac);
          uVar5 = (local_2c ^ (int)local_2c >> 0x1f) - ((int)local_2c >> 0x1f) >> 1;
          lVar1 = (longlong)param_1 * (longlong)(int)local_30;
          if (lVar1 < 0) {
            lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                             (uint)lVar1 - uVar5);
            uVar5 = 0;
          }
          param_1 = (int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)local_2c);
          local_10 = 1;
          local_20 = param_1;
          goto LAB_004c7c9c;
        }
      }
      else {
        param_1 = 0x18;
      }
    }
  }
  else {
    do {
      iVar6 = local_28;
      iVar7 = *(int *)(local_1c[2] + local_28 * 4);
      BVar3 = IntersectRect(&local_44,(RECT *)(*(int *)(iVar7 + 0x69c) + 0x18),
                            (RECT *)(iVar2 + 0xac0));
      if (BVar3 != 0) {
        if (local_24 < 0) {
          local_24 = iVar6;
        }
        iVar6 = *(int *)(iVar7 + 0x694);
        if ((*(uint *)(iVar2 + 0x18) & 0x80000) != 0) {
          iVar6 = local_14;
        }
        if ((*(uint *)(iVar7 + 0x10) & 0x10000) == 0) {
          if ((*(int *)(iVar7 + 4) == 3) &&
             (((*(uint *)(iVar7 + 0x10) & 0x40000) != 0 || (iVar4 = FUN_005be5f0(1), iVar4 != 0))))
          {
            local_30 = *(uint *)(iVar2 + 0xbb0);
            local_2c = *(int *)(iVar2 + 0xbac);
            uVar5 = (local_30 ^ (int)local_30 >> 0x1f) - ((int)local_30 >> 0x1f) >> 1;
            lVar1 = (longlong)iVar6 * (longlong)(int)local_2c;
            if (lVar1 < 0) {
              lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                               (uint)lVar1 - uVar5);
              uVar5 = 0;
            }
            local_20 = (int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)local_30);
            FUN_004606f0(iVar7,local_20,0,local_18,&local_c);
            local_2c = *(uint *)(iVar2 + 0xbb0);
            local_30 = *(int *)(iVar2 + 0xbac);
            uVar5 = (local_2c ^ (int)local_2c >> 0x1f) - ((int)local_2c >> 0x1f) >> 1;
            lVar1 = (longlong)local_c * (longlong)(int)local_30;
            if (lVar1 < 0) {
              lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                               (uint)lVar1 - uVar5);
              uVar5 = 0;
            }
            iVar6 = (int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)local_2c);
            local_20 = iVar6;
          }
        }
        else {
          iVar6 = 0x18;
        }
        param_1 = param_1 + iVar6;
        local_10 = local_10 + 1;
        iVar6 = local_28;
      }
      local_28 = iVar6 + 1;
    } while (local_28 < local_8);
    if (local_10 == 0) goto LAB_004c7ba5;
LAB_004c7c9c:
    param_1 = param_1 / local_10;
  }
  local_28 = 4;
  if (param_2 != 0) {
    if (param_2 < 0) {
      if (param_3 == 0) {
        param_1 = FUN_004c7920(local_14,0,param_1);
      }
      else {
        param_1 = param_1 + param_2;
      }
      if (param_1 < 0x19) {
        local_28 = 3;
      }
    }
    else {
      if (param_3 == 0) {
        param_1 = FUN_004c7920(local_14,1,param_1);
      }
      else {
        param_1 = param_1 + param_2;
      }
      if (local_14 <= param_1) {
LAB_004c7d93:
        *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | 0x80000;
        goto LAB_004c7d9a;
      }
    }
  }
  iVar7 = 0;
  *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) & 0xfff7ffff;
  if (0 < local_8) {
    do {
      iVar6 = *(int *)(local_1c[2] + iVar7 * 4);
      if (local_28 == 3) {
        *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) | 0x10000;
      }
      else {
        *(uint *)(iVar6 + 0x10) = *(uint *)(iVar6 + 0x10) & 0xfffeffff;
        if (param_2 == 0) {
          if (*(int *)(iVar6 + 4) == 3) {
            param_1 = DAT_006477b4;
          }
          else {
            param_1 = DAT_006477b0;
          }
        }
        FUN_004c7520(iVar2,iVar6,param_1);
        if ((local_24 == iVar7) && (local_14 <= *(int *)(iVar6 + 0x694))) goto LAB_004c7d93;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_8);
  }
LAB_004c7d9a:
  *local_34 = *local_34 | 1;
  FUN_00456c20(iVar2);
  *(uint *)**(undefined4 **)(iVar2 + 0xbc8) = *(uint *)**(undefined4 **)(iVar2 + 0xbc8) | 0x10;
  PostMessageA(*(HWND *)(iVar2 + 4),0x111,0xa1d0,0);
  return;
}


