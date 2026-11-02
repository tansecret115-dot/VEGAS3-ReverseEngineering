/* Module: sfcdi.dll
   Function: FUN_5bf427f0
   Address: 5bf427f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf427f0(uint param_1,int param_2,int *param_3,int *param_4)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *this;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar11;
  uint uVar10;
  int iVar12;
  
  iVar5 = param_2;
  uVar6 = param_1;
  iVar9 = *param_3;
  iVar8 = 0;
  iVar12 = *(int *)(param_2 + 0x34c);
  if ((*(uint *)(param_2 + 8) & 0x10) != 0) {
    *(undefined4 *)(iVar12 + 0xe8) = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
    param_1 = CONCAT13((char)uVar2,(uint3)param_1);
    *(uint *)(iVar12 + 0xec) = param_1;
    *(int *)(iVar12 + 0xf0) = *(int *)(iVar12 + 0x14) << 0xb;
    iVar8 = *(int *)(iVar12 + 0x14) << 0xb;
    param_1._0_2_ = CONCAT11((char)((uint)iVar8 >> 0x10),(char)((uint)iVar8 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)iVar8 >> 8),(undefined2)param_1);
    param_1 = (uint)(uint3)param_1;
    *(uint *)(iVar12 + 0xf4) = param_1;
    *(undefined4 *)(iVar12 + 0x1d5) = *(undefined4 *)(uVar6 + 0x1c);
    uVar2 = *(undefined4 *)(uVar6 + 0x1c);
    param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
    param_1 = CONCAT13((char)uVar2,(uint3)param_1);
    *(uint *)(iVar12 + 0x1d9) = param_1;
    *(int *)(iVar12 + 0x1dd) = *(int *)(iVar12 + 0x14) << 0xb;
    iVar8 = *(int *)(iVar12 + 0x14) << 0xb;
    param_1._0_2_ = CONCAT11((char)((uint)iVar8 >> 0x10),(char)((uint)iVar8 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)iVar8 >> 8),(undefined2)param_1);
    param_1 = (uint)(uint3)param_1;
    *(uint *)(iVar12 + 0x1e1) = param_1;
    if (*(int *)(param_2 + 0x21c) == 0) {
      *(undefined4 *)(iVar12 + 0x1f7) = *(undefined4 *)(uVar6 + 0x1c);
      uVar2 = *(undefined4 *)(uVar6 + 0x1c);
      param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
      param_1 = CONCAT13((char)uVar2,(uint3)param_1);
      *(uint *)(iVar12 + 0x1fb) = param_1;
      *(int *)(iVar12 + 0x1ff) = *(int *)(iVar12 + 0x14) << 0xb;
      iVar8 = *(int *)(iVar12 + 0x14) << 0xb;
      param_1._0_2_ = CONCAT11((char)((uint)iVar8 >> 0x10),(char)((uint)iVar8 >> 0x18));
      param_1._0_3_ = CONCAT12((char)((uint)iVar8 >> 8),(undefined2)param_1);
      param_1 = (uint)(uint3)param_1;
      *(uint *)(iVar12 + 0x203) = param_1;
    }
    else {
      iVar8 = *(int *)(*(int *)(param_2 + 0x21c) + 0x34c);
      *(undefined4 *)(iVar12 + 0x1f7) = *(undefined4 *)(iVar8 + 0x1d5);
      *(undefined4 *)(iVar12 + 0x1fb) = *(undefined4 *)(iVar8 + 0x1d9);
      iVar8 = *(int *)(*(int *)(param_2 + 0x21c) + 0x34c);
      *(undefined4 *)(iVar12 + 0x1ff) = *(undefined4 *)(iVar8 + 0x1dd);
      *(undefined4 *)(iVar12 + 0x203) = *(undefined4 *)(iVar8 + 0x1e1);
    }
    param_2 = iVar9;
    iVar8 = FUN_5bf40830(uVar6,9,iVar12,*(int *)(iVar12 + 0x14));
    if (-1 < iVar8) {
      if (*(int *)(uVar6 + 0xc) == 2) {
        *(undefined4 *)(iVar12 + 0x12f) = *(undefined4 *)(uVar6 + 0x1c);
        uVar2 = *(undefined4 *)(uVar6 + 0x1c);
        param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
        param_1 = CONCAT13((char)uVar2,(uint3)param_1);
        *(uint *)(iVar12 + 0x133) = param_1;
        *(int *)(iVar12 + 0x137) = *(int *)(iVar12 + 0x1c) << 0xb;
        iVar9 = *(int *)(iVar12 + 0x1c) << 0xb;
        param_1._0_2_ = CONCAT11((char)((uint)iVar9 >> 0x10),(char)((uint)iVar9 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)iVar9 >> 8),(undefined2)param_1);
        param_1 = (uint)(uint3)param_1;
        *(uint *)(iVar12 + 0x13b) = param_1;
        *(undefined4 *)(iVar12 + 0x219) = *(undefined4 *)(uVar6 + 0x1c);
        uVar2 = *(undefined4 *)(uVar6 + 0x1c);
        param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
        param_1 = CONCAT13((char)uVar2,(uint3)param_1);
        *(uint *)(iVar12 + 0x21d) = param_1;
        *(int *)(iVar12 + 0x221) = *(int *)(iVar12 + 0x1c) << 0xb;
        iVar9 = *(int *)(iVar12 + 0x1c) << 0xb;
        param_1._0_2_ = CONCAT11((char)((uint)iVar9 >> 0x10),(char)((uint)iVar9 >> 0x18));
        param_1._0_3_ = CONCAT12((char)((uint)iVar9 >> 8),(undefined2)param_1);
        param_1 = (uint)(uint3)param_1;
        *(uint *)(iVar12 + 0x225) = param_1;
        if (*(int *)(iVar5 + 0x21c) == 0) {
          *(undefined4 *)(iVar12 + 0x23b) = *(undefined4 *)(uVar6 + 0x1c);
          uVar2 = *(undefined4 *)(uVar6 + 0x1c);
          param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
          param_1 = CONCAT13((char)uVar2,(uint3)param_1);
          *(uint *)(iVar12 + 0x23f) = param_1;
          *(int *)(iVar12 + 0x243) = *(int *)(iVar12 + 0x1c) << 0xb;
          iVar9 = *(int *)(iVar12 + 0x1c) << 0xb;
          param_1._0_2_ = CONCAT11((char)((uint)iVar9 >> 0x10),(char)((uint)iVar9 >> 0x18));
          param_1._0_3_ = CONCAT12((char)((uint)iVar9 >> 8),(undefined2)param_1);
          param_1 = (uint)(uint3)param_1;
          *(uint *)(iVar12 + 0x247) = param_1;
        }
        else {
          iVar9 = *(int *)(*(int *)(iVar5 + 0x21c) + 0x34c);
          *(undefined4 *)(iVar12 + 0x23b) = *(undefined4 *)(iVar9 + 0x219);
          *(undefined4 *)(iVar12 + 0x23f) = *(undefined4 *)(iVar9 + 0x21d);
          iVar9 = *(int *)(*(int *)(iVar5 + 0x21c) + 0x34c);
          *(undefined4 *)(iVar12 + 0x243) = *(undefined4 *)(iVar9 + 0x221);
          *(undefined4 *)(iVar12 + 0x247) = *(undefined4 *)(iVar9 + 0x225);
        }
        iVar8 = FUN_5bf40830(uVar6,10,iVar12,*(int *)(iVar12 + 0x1c));
        if (iVar8 < 0) goto LAB_5bf42d76;
      }
      piVar7 = param_4;
      iVar9 = 0;
      while( true ) {
        piVar3 = *(int **)(iVar5 + 0x214);
        if (piVar3 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar3;
        }
        if (iVar12 <= iVar9) break;
        iVar8 = FUN_5bf427f0(uVar6,*(int *)(piVar3[2] + iVar9 * 4),&param_2,piVar7);
        if (iVar8 < 0) break;
        iVar9 = iVar9 + 1;
      }
    }
    goto LAB_5bf42d76;
  }
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (iVar4 = *(int *)(*(int *)(param_2 + 0x348) + 0x10c), iVar4 != 0)) {
    iVar5 = *(int *)(iVar4 + 0x34c);
    *(undefined4 *)(iVar12 + 0xe8) = *(undefined4 *)(iVar5 + 0xe8);
    *(undefined4 *)(iVar12 + 0xec) = *(undefined4 *)(iVar5 + 0xec);
    *(undefined4 *)(iVar12 + 0xf0) = *(undefined4 *)(iVar5 + 0xf0);
    *(undefined4 *)(iVar12 + 0xf4) = *(undefined4 *)(iVar5 + 0xf4);
    param_2 = iVar9;
    if (*(int *)(param_1 + 0xc) == 2) {
      *(undefined4 *)(iVar12 + 0x12f) = *(undefined4 *)(iVar5 + 0x12f);
      *(undefined4 *)(iVar12 + 0x133) = *(undefined4 *)(iVar5 + 0x133);
      *(undefined4 *)(iVar12 + 0x137) = *(undefined4 *)(iVar5 + 0x137);
      *(undefined4 *)(iVar12 + 0x13b) = *(undefined4 *)(iVar5 + 0x13b);
      *param_3 = iVar9;
      return iVar8;
    }
    goto LAB_5bf42d76;
  }
  *(int *)(*param_4 + 0x34) = iVar12;
  *param_4 = iVar12;
  uVar10 = *(uint *)(iVar12 + 0xc);
  if ((uVar10 == 0) || ((0x20000 < uVar10 || ((*(uint *)(param_2 + 0x218) & 1) != 0)))) {
    if (*(int *)(param_1 + 0x2c) != -1) {
      *(uint *)(iVar12 + 0x24) = (-(uint)(uVar10 < 0x80000) & 0xfffffffe) + 4;
      uVar10 = *(uint *)(iVar12 + 0x28) | 2;
      param_2 = iVar9;
LAB_5bf42c8d:
      *(uint *)(iVar12 + 0x28) = uVar10;
      iVar9 = param_2;
    }
  }
  else {
    this = *(void **)(param_1 + 0x28);
    if (this != (void *)0xffffffff) {
      pCVar1 = (LPCSTR)(param_2 + 0x224);
      param_2 = iVar9;
      iVar8 = FUN_5bf46b30(this,pCVar1,(DWORD)this);
      iVar9 = param_2;
      if (-1 < iVar8) {
        uVar10 = *(uint *)(iVar12 + 0x28) | 1;
        goto LAB_5bf42c8d;
      }
    }
  }
  param_2 = iVar9;
  *(int *)(iVar12 + 0xe8) = param_2;
  param_1._0_2_ = CONCAT11(param_2._2_1_,param_2._3_1_);
  uVar11 = (undefined1)((uint)param_2 >> 8);
  param_1._0_3_ = CONCAT12(uVar11,(undefined2)param_1);
  param_1 = CONCAT13((char)param_2,(uint3)param_1);
  *(uint *)(iVar12 + 0xec) = param_1;
  *(undefined4 *)(iVar12 + 0xf0) = *(undefined4 *)(iVar12 + 0xc);
  uVar2 = *(undefined4 *)(iVar12 + 0xc);
  param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
  param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
  param_1 = CONCAT13((char)uVar2,(uint3)param_1);
  *(uint *)(iVar12 + 0xf4) = param_1;
  if (*(int *)(uVar6 + 0xc) == 2) {
    *(int *)(iVar12 + 0x12f) = param_2;
    param_1._0_2_ = CONCAT11(param_2._2_1_,param_2._3_1_);
    param_1._0_3_ = CONCAT12(uVar11,(undefined2)param_1);
    param_1 = CONCAT13((char)param_2,(uint3)param_1);
    *(uint *)(iVar12 + 0x133) = param_1;
    *(undefined4 *)(iVar12 + 0x137) = *(undefined4 *)(iVar12 + 0xc);
    uVar2 = *(undefined4 *)(iVar12 + 0xc);
    param_1._0_2_ = CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18));
    param_1._0_3_ = CONCAT12((char)((uint)uVar2 >> 8),(undefined2)param_1);
    param_1 = CONCAT13((char)uVar2,(uint3)param_1);
    *(uint *)(iVar12 + 0x13b) = param_1;
  }
  if (*(int *)(uVar6 + 0x10) != 0) {
    *(int *)(*(int *)(iVar5 + 0x348) + 0x10c) = iVar5;
  }
  param_2 = param_2 + *(int *)(iVar12 + 0x14);
LAB_5bf42d76:
  *param_3 = param_2;
  return iVar8;
}


