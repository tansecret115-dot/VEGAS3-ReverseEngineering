/* Module: vegas30.exe
   Function: FUN_004c2ff0
   Address: 004c2ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004c3243) */
/* WARNING: Removing unreachable block (ram,0x004c32d1) */

void FUN_004c2ff0(int param_1,int param_2,HDC param_3,RECT *param_4)

{
  int iVar1;
  ulonglong uVar2;
  BOOL BVar3;
  uint uVar4;
  COLORREF CVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  RECT local_20;
  tagRECT local_10;
  
  if (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 0x14)) {
    if (param_4 == (RECT *)0x0) {
      local_10.left = *(int *)(param_2 + 8);
      local_10.top = *(int *)(param_2 + 0xc);
      local_10.right = *(int *)(param_2 + 0x10);
      local_10.bottom = *(LONG *)(param_2 + 0x14);
    }
    else {
      BVar3 = IntersectRect(&local_10,(RECT *)(param_2 + 8),param_4);
      if (BVar3 == 0) {
        return;
      }
    }
    if ((DAT_006476b8 == 0) || (DAT_006476c4 == 0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = 1;
    }
    if ((*(int *)(param_1 + 0xc44) != 0) && ((iVar7 != 0 || (DAT_0064aecc != 0)))) {
      if (((*(uint *)(param_2 + 4) & 0x10000000) != 0) && (*(int *)(param_1 + 0xc38) != 0)) {
        FUN_004c2ec0(param_1,param_3,&local_10,*(int *)(param_1 + 0xc38),0x82,iVar7);
        FUN_004c2ce0(param_1,param_3,&local_10,*(undefined4 *)(param_1 + 0xc38),0x83,iVar7);
      }
      if ((((*(uint *)(param_2 + 4) & 0x20000000) != 0) && (*(int *)(param_1 + 0x8f4) != 0)) &&
         (0 < *(int *)(param_1 + 0x8cc) - *(int *)(param_1 + 0x8c4))) {
        FUN_004c2ec0(param_1,param_3,&local_10,*(int *)(param_1 + 0x8f4),0x99,iVar7);
      }
      if ((((*(uint *)(param_2 + 4) & 0x40000000) != 0) && (*(int *)(param_1 + 0x948) != 0)) &&
         (0 < *(int *)(param_1 + 0x920) - *(int *)(param_1 + 0x918))) {
        FUN_004c2ec0(param_1,param_3,&local_10,*(int *)(param_1 + 0x948),0x96,iVar7);
      }
      if ((((*(uint *)(param_2 + 4) & 0x80000000) != 0) && (*(int *)(param_1 + 0x99c) != 0)) &&
         (0 < *(int *)(param_1 + 0x974) - *(int *)(param_1 + 0x96c))) {
        FUN_004c2ec0(param_1,param_3,&local_10,*(int *)(param_1 + 0x99c),0x95,iVar7);
        FUN_004c2ce0(param_1,param_3,&local_10,*(undefined4 *)(param_1 + 0x99c),0x96,iVar7);
      }
    }
    if (((*(uint *)(param_2 + 4) & 0x10000000) != 0) &&
       (((uVar4 = *(uint *)(param_1 + 0x18) & 0x100, uVar4 != 0 || (DAT_00647794 == 2)) ||
        ((DAT_00647794 == 1 && (*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0))))
       )) {
      iVar7 = *(int *)(param_1 + 0xb90);
      iVar1 = *(int *)(param_1 + 0xb94);
      if (iVar7 == 0 && iVar1 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        lVar8 = ftol();
        uVar2 = lVar8 + *(int *)(param_1 + 0xac0);
        uVar6 = (uint)uVar2;
        if ((uVar2 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar6)))) {
          if (0x3fff < (longlong)uVar2) {
            uVar6 = 0x3fff;
          }
        }
        else {
          uVar6 = 0xffffc000;
        }
      }
      *(uint *)(param_1 + 0xb58) = uVar6;
      if (iVar7 == 0 && iVar1 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        local_20.left = *(uint *)(param_1 + 0xb50) + *(uint *)(param_1 + 0xb48);
        local_20.top = *(int *)(param_1 + 0xb54) + *(int *)(param_1 + 0xb4c) +
                       (uint)CARRY4(*(uint *)(param_1 + 0xb50),*(uint *)(param_1 + 0xb48));
        lVar8 = ftol();
        uVar2 = lVar8 + *(int *)(param_1 + 0xac0);
        uVar6 = (uint)uVar2;
        if ((uVar2 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar2 && (0xffffbfff < uVar6)))) {
          if (0x3fff < (longlong)uVar2) {
            uVar6 = 0x3fff;
          }
        }
        else {
          uVar6 = 0xffffc000;
        }
      }
      *(uint *)(param_1 + 0xb5c) = uVar6;
      if ((uVar4 == 0) && (DAT_006476b8 == 0)) {
        CVar5 = GetSysColor(0x10);
      }
      else {
        CVar5 = _SfGetUIColor_4(0x97);
      }
      CVar5 = SetBkColor(param_3,CVar5);
      iVar7 = *(int *)(param_1 + 0xb58);
      if (iVar7 <= *(int *)(param_1 + 0xb5c)) {
        if ((local_10.left <= iVar7) && (iVar7 < local_10.right)) {
          local_20.right = iVar7 + 1;
          local_20.top = local_10.top;
          local_20.bottom = local_10.bottom;
          local_20.left = iVar7;
          ExtTextOutA(param_3,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
        }
        iVar7 = *(int *)(param_1 + 0xb5c);
        if ((local_10.left <= iVar7) && (iVar7 < local_10.right)) {
          local_20.right = iVar7 + 1;
          local_20.top = local_10.top;
          local_20.bottom = local_10.bottom;
          local_20.left = iVar7;
          ExtTextOutA(param_3,0,0,2,&local_20,(LPCSTR)0x0,0,(INT *)0x0);
        }
      }
      SetBkColor(param_3,CVar5);
    }
  }
  return;
}


