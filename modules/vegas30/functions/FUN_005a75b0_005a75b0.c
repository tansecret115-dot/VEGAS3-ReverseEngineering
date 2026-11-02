/* Module: vegas30.exe
   Function: FUN_005a75b0
   Address: 005a75b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a75b0(undefined4 *param_1,RECT *param_2,undefined4 *param_3,int *param_4,int *param_5,
                 int param_6,int param_7,double param_8,double param_9)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  tagRECT *ptVar11;
  RECT *pRVar12;
  bool bVar13;
  bool bVar14;
  double local_28;
  int local_20;
  int local_1c;
  tagRECT local_18;
  
  if (param_7 != 0) {
    iVar9 = param_2->left;
    if (param_2->right < iVar9) {
      param_2->left = param_2->right;
      param_2->right = iVar9;
    }
    iVar9 = param_2->top;
    if (param_2->bottom < iVar9) {
      param_2->top = param_2->bottom;
      param_2->bottom = iVar9;
    }
  }
  if (param_6 == 0) {
    if (param_7 == 0) {
      iVar9 = *param_5;
      param_1[3] = param_5[1] << 0xe;
      param_1[2] = iVar9 << 0xe;
      *param_1 = 0;
      param_1[1] = 0;
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    else {
      uVar5 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      uVar8 = ftol();
      *param_1 = uVar8;
      param_1[1] = uVar7;
      param_1[2] = uVar6;
      param_1[3] = uVar5;
      iVar9 = param_5[1];
      iVar10 = *param_5;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = iVar10 << 0xe;
      param_3[3] = iVar9 << 0xe;
    }
  }
  else {
    local_18._0_8_ = (BADTYPE)param_5[1];
    if (param_7 == 0) {
      dVar3 = (double)(param_2->right - param_2->left) * _DAT_00629db0;
      dVar4 = (double)(param_2->bottom - param_2->top) * _DAT_00629db0;
    }
    else {
      dVar3 = (double)*param_4;
      dVar4 = (double)param_4[1];
    }
    dVar3 = (param_8 / param_9) * dVar3;
    local_28 = (double)local_18._0_8_;
    if ((double)*param_5 / dVar3 < (double)local_18._0_8_ / dVar4) {
      local_28 = (double)*param_5 / (dVar3 / dVar4);
    }
    if (param_7 == 0) {
      uVar5 = ftol();
      *param_1 = uVar5;
      uVar5 = ftol();
      param_1[2] = uVar5;
      uVar5 = ftol();
      param_1[1] = uVar5;
      uVar5 = ftol();
      param_1[3] = uVar5;
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    else {
      local_18._0_8_ = ((double)local_18._0_8_ - local_28) * _DAT_00610560;
      uVar5 = ftol();
      *param_1 = uVar5;
      uVar5 = ftol();
      param_1[2] = uVar5;
      uVar5 = ftol();
      param_1[1] = uVar5;
      uVar5 = ftol();
      param_1[3] = uVar5;
      uVar5 = ftol();
      *param_3 = uVar5;
      uVar5 = ftol();
      param_3[1] = uVar5;
      uVar5 = ftol();
      param_3[2] = uVar5;
      uVar5 = ftol();
      param_3[3] = uVar5;
    }
  }
  local_28 = 0.0;
  local_20 = *param_4 << 0xe;
  local_1c = param_4[1] << 0xe;
  IntersectRect(&local_18,(RECT *)&local_28,param_2);
  iVar10 = 0x10;
  bVar13 = false;
  iVar9 = 0;
  bVar14 = true;
  ptVar11 = &local_18;
  pRVar12 = param_2;
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    bVar2 = (byte)pRVar12->left;
    bVar1 = (byte)ptVar11->left;
    bVar13 = bVar1 < bVar2;
    bVar14 = bVar1 == bVar2;
    ptVar11 = (tagRECT *)((int)&ptVar11->left + 1);
    pRVar12 = (RECT *)((int)&pRVar12->left + 1);
  } while (bVar14);
  if (!bVar14) {
    iVar9 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
  }
  if (iVar9 != 0) {
    iVar9 = param_2->right;
    local_28._0_4_ = param_1[2];
    uVar5 = ftol();
    uVar6 = ftol();
    uVar7 = ftol();
    local_28 = (double)CONCAT44(local_28._4_4_,iVar9 - local_18.right);
    uVar8 = ftol();
    *param_1 = uVar7;
    param_1[1] = uVar5;
    param_1[2] = uVar8;
    param_1[3] = uVar6;
    param_2->left = local_18.left;
    param_2->top = local_18.top;
    param_2->right = local_18.right;
    param_2->bottom = local_18.bottom;
  }
  return;
}


