/* Module: sftrans1.dll
   Function: FUN_0048ee00
   Address: 0048ee00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0048ee00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,double param_5,
            int *param_6)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  LONG LVar4;
  int iVar5;
  int iVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  RECT local_88;
  RECT local_78;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  RECT local_38;
  tagRECT local_28;
  undefined1 local_18 [20];
  
  local_68 = 0;
  local_3c = 0;
  local_40 = 0;
  iVar9 = (*(int *)(param_1 + 0x568) + *(int *)(param_1 + 0x56c)) / 2;
  iVar5 = ftol();
  ceil(param_5 + *(double *)(param_1 + 0x560));
  local_88.bottom = ftol();
  local_88.left = *(int *)(param_1 + 0x568);
  local_88.right = *(int *)(param_1 + 0x56c);
  dVar2 = (param_5 + *(double *)(param_1 + 0x560)) / (double)*(uint *)(*(int *)(param_1 + 8) + 0xc4)
  ;
  *(undefined4 *)(param_1 + 0x4b4) = param_3;
  *(double *)(param_1 + 0x228) = (dVar2 + dVar2) - _DAT_00555908;
  local_88.top = iVar5;
  local_78.left = local_88.right;
  local_78.right = local_88.right;
  iVar6 = FUN_0053f9e0(param_1 + 0x1d8,&local_38,0,0,0);
  if (iVar6 < 0) {
    local_64 = local_78.left;
    local_5c = local_78.right;
    local_60 = iVar5;
    local_58 = iVar5;
  }
  else {
    local_78.top = local_38.top;
    local_78.bottom = local_38.top;
    local_78.left = local_38.right;
    local_78.right = local_38.right;
    if ((*(uint *)(param_1 + 0x21c) & 8) == 0) {
      if ((*(uint *)(param_1 + 0x21c) & 0x20) != 0) {
        local_88.right = local_38.right;
      }
    }
    else {
      local_3c = local_88.left - local_38.left;
      local_88.left = local_38.left;
    }
    IntersectRect(&local_88,&local_38,&local_88);
    BVar7 = IntersectRect(&local_28,&local_88,(RECT *)(param_2 + 8));
    if (BVar7 == 0) {
      local_64 = local_78.left;
      local_60 = local_78.top;
      local_5c = local_78.right;
      local_58 = local_78.bottom;
    }
    else {
      iVar6 = FUN_00540150(&local_88,param_2,param_1 + 0x24,0,&local_64);
      if (-1 < iVar6) goto LAB_0048efd7;
      local_64 = local_78.left;
      local_60 = local_78.top;
      local_5c = local_78.right;
      local_58 = local_78.bottom;
    }
  }
  local_68 = 1;
  local_78.left = local_64;
  local_78.right = local_5c;
LAB_0048efd7:
  iVar6 = ftol();
  local_54 = local_5c + iVar6 * -2;
  iVar6 = iVar9 - iVar6;
  if (iVar6 <= local_54) {
    local_54 = iVar6;
  }
  ceil(param_5 + *(double *)(param_1 + 0x560));
  local_88.bottom = ftol();
  local_88.right = *(int *)(param_1 + 0x56c);
  local_88.left = local_54;
  dVar2 = (param_5 + *(double *)(param_1 + 0x560)) / (double)*(uint *)(*(int *)(param_1 + 8) + 0xc4)
  ;
  *(undefined4 *)(param_1 + 0x51c) = param_4;
  *(double *)(param_1 + 0x3c8) = (dVar2 + dVar2) - _DAT_00555908;
  local_88.top = iVar5;
  iVar6 = FUN_0053f9e0(param_1 + 0x378,&local_38,0,0,0);
  LVar4 = local_88.right;
  if (iVar6 < 0) {
    local_50 = local_54;
    local_48 = local_54;
    local_68 = 1;
    local_4c = iVar5;
    local_44 = iVar5;
  }
  else {
    local_78.top = local_38.top;
    local_78.bottom = local_38.top;
    local_78.left = local_38.left;
    local_78.right = local_38.left;
    if ((*(uint *)(param_1 + 0x3bc) & 8) == 0) {
      if ((*(uint *)(param_1 + 0x3bc) & 0x20) != 0) {
        local_88.right = local_38.right;
        local_40 = local_38.right - LVar4;
      }
    }
    else {
      local_88.left = local_38.left;
    }
    IntersectRect(&local_88,&local_38,&local_88);
    if (local_88.right <= local_5c) {
      local_88.right = local_5c;
    }
    BVar7 = IntersectRect(&local_28,&local_88,(RECT *)(param_2 + 8));
    if (BVar7 == 0) {
      local_50 = local_78.left;
      local_4c = local_78.top;
      local_48 = local_78.right;
      local_44 = local_78.bottom;
      local_68 = 1;
    }
    else {
      iVar6 = FUN_00540150(&local_88,param_2,param_1 + 0x24,0,&local_50);
    }
    if (iVar6 < 0) {
      local_50 = local_78.left;
      local_4c = local_78.top;
      local_48 = local_78.right;
      local_44 = local_78.bottom;
      local_68 = 1;
    }
    else {
      iVar6 = ftol();
      if (local_54 == iVar9 - iVar6) {
        iVar6 = ftol();
        if (local_50 - iVar6 <= local_5c) {
          local_5c = local_50 - iVar6;
        }
      }
    }
  }
  pcVar10 = IntersectRect_exref;
  if ((**(short **)(*(int *)(param_1 + 0x1dc) + 4) != 0) &&
     (**(short **)(*(int *)(param_1 + 0x37c) + 4) != 0)) {
    ceil(param_5 + *(double *)(param_1 + 0x560));
    local_88.bottom = ftol();
    local_88.left = local_5c;
    local_78.right = *(int *)(param_1 + 0x56c);
    local_78.left = *(int *)(param_1 + 0x568);
    local_88.right = local_50;
    local_88.top = iVar5;
    local_78.top = iVar5;
    ceil(param_5 + *(double *)(param_1 + 0x560));
    local_78.bottom = ftol();
    pcVar10 = IntersectRect_exref;
    IntersectRect(&local_88,&local_88,&local_78);
    iVar6 = *(int *)(param_1 + 8);
    dVar2 = (param_5 + *(double *)(param_1 + 0x560)) / (double)*(uint *)(iVar6 + 0xc4);
    *(double *)(param_1 + 0x2f8) = (dVar2 + dVar2) - _DAT_00555908;
    uVar1 = *(uint *)(iVar6 + 200);
    *(int *)(param_1 + 0x4e8) = iVar6 + 0xa8c;
    dVar3 = (double)local_88.left / (double)uVar1;
    dVar2 = (double)local_88.right / (double)uVar1;
    *(double *)(param_1 + 0x2f0) =
         (((dVar2 + dVar2) - _DAT_00555908) + ((dVar3 + dVar3) - _DAT_00555908)) * _DAT_00557838;
    iVar6 = FUN_0053f9e0(param_1 + 0x2a8,&local_38,0,0,0);
    if ((-1 < iVar6) &&
       (BVar7 = IntersectRect(&local_28,&local_88,(RECT *)(param_2 + 8)), BVar7 != 0)) {
      FUN_00540150(&local_88,param_2,param_1 + 0x24,1,local_18);
    }
  }
  if (local_68 != 0) {
    ceil(param_5 + *(double *)(param_1 + 0x560));
    iVar8 = ftol();
    iVar6 = *(int *)(param_1 + 0x56c);
    iVar9 = *(int *)(param_1 + 0x568);
    param_6[3] = iVar8;
    *param_6 = iVar9;
    param_6[1] = iVar5;
    param_6[2] = iVar6;
    if (0 < local_3c) {
      *param_6 = iVar9 - local_3c;
    }
    if (0 < local_40) {
      param_6[2] = iVar6 + local_40;
    }
    (*pcVar10)(param_6,param_6,param_2 + 8);
    return;
  }
  *param_6 = local_64;
  param_6[1] = local_60;
  param_6[2] = local_48;
  param_6[3] = local_44;
  return;
}


