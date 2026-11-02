/* Module: vegas30.exe
   Function: FUN_00465760
   Address: 00465760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00465760(HDC param_1,RECT *param_2,int param_3,int param_4,LPCSTR param_5,UINT param_6)

{
  undefined4 uVar1;
  HGDIOBJ h;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  LPCSTR pCVar12;
  UINT UVar13;
  int *piVar14;
  int local_94;
  int local_6c;
  int local_68;
  int local_64;
  UINT local_60;
  double local_5c;
  HGDIOBJ local_54;
  COLORREF local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  undefined8 local_10;
  undefined8 local_8;
  
  local_4c = SetBkMode(param_1,1);
  if (((*(uint *)(param_3 + 0x58) & 0x100) == 0) && ((*(byte *)(param_4 + 0x10) & 0x10) != 0)) {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  local_50 = SetTextColor(param_1,(-(uint)bVar7 & 0x9f9f9f) + 0x606060);
  h = (HGDIOBJ)_SfGetUIFont_4(0x6e);
  local_54 = SelectObject(param_1,h);
  local_60 = SetTextAlign(param_1,8);
  piVar14 = &local_6c;
  pCVar12 = param_5;
  UVar13 = param_6;
  uVar2 = _SfGetUIFont_4(0x6e);
  _SfGetTextExtent_16(uVar2,pCVar12,UVar13,piVar14);
  local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
  local_30 = CONCAT44(local_30._4_4_,(undefined4)local_30);
  local_10 = CONCAT44(local_10._4_4_,(undefined4)local_10);
  local_8 = CONCAT44(local_8._4_4_,(undefined4)local_8);
  if ((param_4 != 0) &&
     (iVar3 = *(int *)(param_3 + 0x38), local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38),
     local_30 = CONCAT44(local_30._4_4_,(undefined4)local_30),
     local_10 = CONCAT44(local_10._4_4_,(undefined4)local_10),
     local_8 = CONCAT44(local_8._4_4_,(undefined4)local_8),
     iVar3 != 0 || *(int *)(param_3 + 0x3c) != 0)) {
    uVar11 = __allmul(*(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),2,0);
    iVar3 = __alldiv(uVar11,iVar3,*(undefined4 *)(param_3 + 0x3c));
    bVar7 = 0;
    for (; 1 < iVar3; iVar3 = iVar3 >> 1) {
      bVar7 = bVar7 + 1;
    }
    uVar9 = 1 << (bVar7 & 0x1f) | 1;
    local_94 = ftol();
    if (local_94 < 0) {
      local_94 = 0;
    }
    local_64 = (*(int *)(*(int *)(param_4 + 0x218) + 0x2c) +
               *(int *)(*(int *)(param_4 + 0x218) + 0x24)) / 2 + 1 + local_68 / 2;
    uVar4 = *(int *)(param_3 + 0x40) + *(int *)(param_3 + 0x44);
    iVar3 = (int)uVar4 >> 0x1f;
    for (; local_94 < (int)uVar9; local_94 = local_94 + 1) {
      if ((int)uVar9 < 2) {
        local_20 = *(uint *)(param_4 + 0x18) - *(uint *)(param_3 + 0x30);
        uVar2 = *(undefined4 *)(param_3 + 0x3c);
        uVar1 = *(undefined4 *)(param_3 + 0x38);
        iStack_1c = (*(int *)(param_4 + 0x1c) - *(int *)(param_3 + 0x34)) -
                    (uint)(*(uint *)(param_4 + 0x18) < *(uint *)(param_3 + 0x30));
        local_5c = (double)CONCAT44(iStack_1c,local_20) * (double)*(int *)(param_3 + 0x40);
        uVar11 = __alldiv(uVar1,uVar2,2,0);
        local_30 = uVar11;
        iVar5 = ftol();
        iVar5 = iVar5 + *(int *)(param_3 + 0x44);
        if (iVar5 < -0x4000) {
          iVar5 = -0x4000;
        }
        else if (0x3fff < iVar5) {
          iVar5 = 0x3fff;
        }
        local_5c = (double)CONCAT44(local_5c._4_4_,iVar5 + 4);
        local_40 = uVar1;
        uStack_3c = uVar2;
        uVar11 = __alldiv(*(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),2,0);
        uVar6 = (uint)uVar11 - *(uint *)(param_3 + 0x30);
        local_48 = uVar6 + *(uint *)(param_4 + 0x18);
        iStack_44 = (((int)((ulonglong)uVar11 >> 0x20) - *(int *)(param_3 + 0x34)) -
                    (uint)((uint)uVar11 < *(uint *)(param_3 + 0x30))) + *(int *)(param_4 + 0x1c) +
                    (uint)CARRY4(uVar6,*(uint *)(param_4 + 0x18));
        uVar11 = __alldiv(uVar1,uVar2,2,0);
        local_10 = uVar11;
        iVar5 = ftol();
        iVar5 = iVar5 + *(int *)(param_3 + 0x44);
        if (iVar5 < -0x4000) {
          iVar10 = -0x4000;
        }
        else {
          iVar10 = 0x3fff;
          if (iVar5 < 0x4000) {
            iVar10 = iVar5;
          }
        }
        uVar6 = iVar10 - local_6c / 2;
        if ((int)uVar6 < (int)local_5c._0_4_) {
          uVar6 = local_5c._0_4_;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_3 + 0x38);
        uVar1 = *(undefined4 *)(param_3 + 0x3c);
        iVar10 = uVar9 - 1;
        iStack_24 = iVar10 >> 0x1f;
        local_28 = iVar10;
        uVar11 = __alldiv(iVar10,iStack_24,2,0);
        local_38 = uVar11;
        uVar11 = ftol();
        uVar6 = (uint)uVar11 - *(uint *)(param_3 + 0x30);
        local_18 = uVar6 + *(uint *)(param_4 + 0x18);
        iStack_14 = (((int)((ulonglong)uVar11 >> 0x20) - *(int *)(param_3 + 0x34)) -
                    (uint)((uint)uVar11 < *(uint *)(param_3 + 0x30))) + *(int *)(param_4 + 0x1c) +
                    (uint)CARRY4(uVar6,*(uint *)(param_4 + 0x18));
        uVar11 = __alldiv(uVar2,uVar1,2,0);
        local_8 = uVar11;
        iVar5 = ftol();
        iVar5 = iVar5 + *(int *)(param_3 + 0x44);
        if (iVar5 < -0x4000) {
          iVar8 = -0x4000;
        }
        else {
          iVar8 = 0x3fff;
          if (iVar5 < 0x4000) {
            iVar8 = iVar5;
          }
        }
        iVar5 = MulDiv(local_6c + 8,local_94,iVar10);
        uVar6 = (iVar8 - iVar5) + 4;
      }
      ExtTextOutA(param_1,uVar6,local_64,4,param_2,param_5,param_6,(INT *)0x0);
      if ((iVar3 < (int)uVar6 >> 0x1f) || ((iVar3 <= (int)uVar6 >> 0x1f && (uVar4 < uVar6)))) break;
    }
  }
  SetTextAlign(param_1,local_60);
  SelectObject(param_1,local_54);
  SetTextColor(param_1,local_50);
  SetBkMode(param_1,local_4c);
  return;
}


