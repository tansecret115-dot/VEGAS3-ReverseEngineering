/* Module: vidcap30.exe
   Function: FUN_00517850
   Address: 00517850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00517850(byte *param_1)

{
  LPRECT lprc;
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int local_1c;
  double local_18;
  double local_10;
  int local_8;
  int local_4;
  
  pbVar2 = param_1;
  lprc = (LPRECT)(param_1 + 0x48);
  lprc->left = *(LONG *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
  iVar8 = *(int *)(param_1 + 0x50) - lprc->left;
  iVar7 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
  if ((((*param_1 & 0x10) == 0) || (iVar8 < 8)) || (iVar7 < 8)) {
    uVar3 = *(uint *)(param_1 + 4) & 0xffffffef;
  }
  else {
    iVar8 = iVar8 + -6;
    iVar7 = iVar7 + -6;
    InflateRect(lprc,-3,-3);
    uVar3 = *(uint *)(pbVar2 + 4) | 0x10;
  }
  *(uint *)(pbVar2 + 4) = uVar3;
  if (*(int *)(pbVar2 + 0x294) != 0) {
    *(uint *)(pbVar2 + 4) = *(uint *)(pbVar2 + 4) | 0x2000;
  }
  if ((pbVar2[4] & 0x20) == 0) {
    *(int *)(pbVar2 + 0x110) = iVar8 / 10;
    *(int *)(pbVar2 + 0x114) = iVar7 / 10;
    FUN_00517ee0(pbVar2 + 0x110);
    iVar4 = *(int *)(pbVar2 + 0x110);
    if (iVar4 < 8) {
      iVar4 = 8;
    }
    *(int *)(pbVar2 + 0x128) = iVar4;
    iVar4 = *(int *)(pbVar2 + 0x114);
    if (iVar4 < 8) {
      iVar4 = 8;
    }
    *(int *)(pbVar2 + 300) = iVar4;
    local_8 = (int)(iVar8 + (iVar8 >> 0x1f & 7U)) >> 3;
    local_4 = (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3;
    FUN_00517ee0(&local_8);
    uVar5 = ftol();
    local_10 = (double)local_4;
    *(undefined4 *)(pbVar2 + 0x1b4) = uVar5;
    *(int *)(pbVar2 + 0x1b8) = local_4;
    *(undefined4 *)(pbVar2 + 0x234) = uVar5;
    *(undefined4 *)(pbVar2 + 0x238) = *(undefined4 *)(pbVar2 + 0x1b8);
    *(int *)(pbVar2 + 500) = local_8;
    uVar5 = ftol();
    local_18 = SQRT(_DAT_00589f08);
    *(undefined4 *)(pbVar2 + 0x1f8) = uVar5;
    *(undefined4 *)(pbVar2 + 0x274) = *(undefined4 *)(pbVar2 + 500);
    *(undefined4 *)(pbVar2 + 0x278) = *(undefined4 *)(pbVar2 + 0x1f8);
    uVar5 = ftol();
    uVar6 = ftol();
    *(undefined4 *)(pbVar2 + 0x194) = uVar5;
    *(undefined4 *)(pbVar2 + 0x1d4) = uVar5;
    *(undefined4 *)(pbVar2 + 0x214) = uVar5;
    *(undefined4 *)(pbVar2 + 0x254) = uVar5;
    *(undefined4 *)(pbVar2 + 0x198) = uVar6;
    *(undefined4 *)(pbVar2 + 0x1d8) = uVar6;
    *(undefined4 *)(pbVar2 + 0x218) = uVar6;
    *(undefined4 *)(pbVar2 + 600) = uVar6;
  }
  else {
    iVar7 = *(int *)(pbVar2 + 0x110);
    if (iVar7 < 8) {
      iVar7 = 8;
    }
    *(int *)(pbVar2 + 0x128) = iVar7;
    iVar7 = *(int *)(pbVar2 + 0x114);
    if (iVar7 < 8) {
      iVar7 = 8;
    }
    *(int *)(pbVar2 + 300) = iVar7;
    ImageList_GetIconSize(*(HIMAGELIST *)(pbVar2 + 0xfc),(int *)&local_18,(int *)&local_10);
    *(undefined4 *)(pbVar2 + 0x194) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 0x1b4) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 0x1d4) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 500) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 0x214) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 0x234) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 0x254) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 0x274) = local_18._0_4_;
    *(undefined4 *)(pbVar2 + 0x198) = local_10._0_4_;
    *(undefined4 *)(pbVar2 + 0x1b8) = local_10._0_4_;
    *(undefined4 *)(pbVar2 + 0x1d8) = local_10._0_4_;
    *(undefined4 *)(pbVar2 + 0x1f8) = local_10._0_4_;
    *(undefined4 *)(pbVar2 + 0x218) = local_10._0_4_;
    *(undefined4 *)(pbVar2 + 0x238) = local_10._0_4_;
    *(undefined4 *)(pbVar2 + 600) = local_10._0_4_;
    *(undefined4 *)(pbVar2 + 0x278) = local_10._0_4_;
  }
  pbVar9 = pbVar2 + 0xa8;
  pbVar1 = pbVar2 + 200;
  *(LONG *)pbVar9 = lprc->left;
  *(undefined4 *)(pbVar2 + 0xac) = *(undefined4 *)(pbVar2 + 0x4c);
  *(undefined4 *)(pbVar2 + 0xb0) = *(undefined4 *)(pbVar2 + 0x50);
  *(undefined4 *)(pbVar2 + 0xb4) = *(undefined4 *)(pbVar2 + 0x54);
  *(LONG *)pbVar1 = lprc->left;
  *(undefined4 *)(pbVar2 + 0xcc) = *(undefined4 *)(pbVar2 + 0x4c);
  *(undefined4 *)(pbVar2 + 0xd0) = *(undefined4 *)(pbVar2 + 0x50);
  *(undefined4 *)(pbVar2 + 0xd4) = *(undefined4 *)(pbVar2 + 0x54);
  FUN_00518f10(pbVar2,1,0,2,0,&local_1c,&param_1);
  *(byte **)(pbVar2 + 0xcc) = param_1 + *(int *)(pbVar2 + 0xcc);
  *(int *)(pbVar2 + 0xac) = *(int *)(pbVar2 + 0xac) + local_1c;
  FUN_00518f10(pbVar2,3,2,4,1,&local_1c,&param_1);
  *(int *)(pbVar2 + 0xd0) = *(int *)(pbVar2 + 0xd0) - (int)param_1;
  *(int *)(pbVar2 + 0xb0) = *(int *)(pbVar2 + 0xb0) - local_1c;
  FUN_00518f10(pbVar2,5,4,6,0,&local_1c,&param_1);
  *(int *)(pbVar2 + 0xd4) = *(int *)(pbVar2 + 0xd4) - (int)param_1;
  *(int *)(pbVar2 + 0xb4) = *(int *)(pbVar2 + 0xb4) - local_1c;
  FUN_00518f10(pbVar2,7,0,6,1,&local_1c,&param_1);
  *(byte **)pbVar1 = param_1 + *(int *)pbVar1;
  *(int *)pbVar9 = *(int *)pbVar9 + local_1c;
  *(LONG *)(pbVar2 + 0xb8) = *(LONG *)pbVar9;
  *(undefined4 *)(pbVar2 + 0xbc) = *(undefined4 *)(pbVar2 + 0xac);
  *(undefined4 *)(pbVar2 + 0xc0) = *(undefined4 *)(pbVar2 + 0xb0);
  *(undefined4 *)(pbVar2 + 0xc4) = *(undefined4 *)(pbVar2 + 0xb4);
  InflateRect((LPRECT)(pbVar2 + 0xb8),-(*(int *)(pbVar2 + 0x110) / 2),
              -(*(int *)(pbVar2 + 0x114) / 2));
  *(int *)(pbVar2 + 0xd8) = (*(int *)pbVar9 + *(int *)pbVar1) / 2;
  *(int *)(pbVar2 + 0xe0) = (*(int *)(pbVar2 + 0xd0) + *(int *)(pbVar2 + 0xb0)) / 2;
  *(int *)(pbVar2 + 0xdc) = (*(int *)(pbVar2 + 0xcc) + *(int *)(pbVar2 + 0xac)) / 2;
  *(int *)(pbVar2 + 0xe4) = (*(int *)(pbVar2 + 0xd4) + *(int *)(pbVar2 + 0xb4)) / 2;
  *(int *)(pbVar2 + 0xe8) = (*(int *)pbVar1 + lprc->left) / 2;
  *(int *)(pbVar2 + 0xf0) = (*(int *)(pbVar2 + 0xd0) + *(int *)(pbVar2 + 0x50)) / 2;
  *(int *)(pbVar2 + 0xec) = (*(int *)(pbVar2 + 0xcc) + *(int *)(pbVar2 + 0x4c)) / 2;
  *(int *)(pbVar2 + 0xf4) = (*(int *)(pbVar2 + 0xd4) + *(int *)(pbVar2 + 0x54)) / 2;
  FUN_00515c30(pbVar2 + 0x19c,pbVar2 + 0x194,(*(int *)pbVar9 + lprc->left) / 2,
               (*(int *)(pbVar2 + 0xac) + *(int *)(pbVar2 + 0x4c)) / 2);
  FUN_00515c30(pbVar2 + 0x1dc,pbVar2 + 0x1d4,(*(int *)(pbVar2 + 0xb0) + *(int *)(pbVar2 + 0x50)) / 2
               ,(*(int *)(pbVar2 + 0xac) + *(int *)(pbVar2 + 0x4c)) / 2);
  FUN_00515c30(pbVar2 + 0x21c,pbVar2 + 0x214,(*(int *)(pbVar2 + 0xb0) + *(int *)(pbVar2 + 0x50)) / 2
               ,(*(int *)(pbVar2 + 0xb4) + *(int *)(pbVar2 + 0x54)) / 2);
  FUN_00515c30(pbVar2 + 0x25c,pbVar2 + 0x254,(*(int *)pbVar9 + lprc->left) / 2,
               (*(int *)(pbVar2 + 0xb4) + *(int *)(pbVar2 + 0x54)) / 2);
  pbVar9 = pbVar2 + 0xe8;
  if ((*pbVar2 & 1) == 0) {
    pbVar9 = pbVar2 + 0xd8;
  }
  FUN_00515c30(pbVar2 + 0x1bc,pbVar2 + 0x1b4,(*(int *)(pbVar2 + 0xb8) + *(int *)(pbVar2 + 0xc0)) / 2
               ,*(undefined4 *)(pbVar9 + 4));
  FUN_00515c30(pbVar2 + 0x23c,pbVar2 + 0x234,(*(int *)(pbVar2 + 0xb8) + *(int *)(pbVar2 + 0xc0)) / 2
               ,*(undefined4 *)(pbVar9 + 0xc));
  FUN_00515c30(pbVar2 + 0x27c,pbVar2 + 0x274,*(undefined4 *)pbVar9,
               (*(int *)(pbVar2 + 0xbc) + *(int *)(pbVar2 + 0xc4)) / 2);
  FUN_00515c30(pbVar2 + 0x1fc,pbVar2 + 500,*(undefined4 *)(pbVar9 + 8),
               (*(int *)(pbVar2 + 0xbc) + *(int *)(pbVar2 + 0xc4)) / 2);
  local_10 = (double)CONCAT44(local_10._4_4_,*(int *)(pbVar2 + 0xc0) - *(int *)(pbVar2 + 0xb8));
  if (((double)(*(int *)(pbVar2 + 0xc0) - *(int *)(pbVar2 + 0xb8)) < _DAT_0059bb70) ||
     (local_10 = (double)CONCAT44(local_10._4_4_,*(int *)(pbVar2 + 0xc4) - *(int *)(pbVar2 + 0xbc)),
     (double)(*(int *)(pbVar2 + 0xc4) - *(int *)(pbVar2 + 0xbc)) < _DAT_0059bb70)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  *(uint *)(pbVar2 + 4) = iVar7 << 8 | *(uint *)(pbVar2 + 4) & 0xfffffeff;
  FUN_00517f00(pbVar2);
  FUN_00515a00(pbVar2,0);
  return;
}


