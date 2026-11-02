/* Module: rv303260.dll
   Function: FUN_672030e0
   Address: 672030e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_672030e0(int param_1,int *param_2)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  if (param_2[0x101] == 0) {
    iVar8 = *(int *)(param_1 + 0x18a) + 0x40 + *param_2 * 8;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x18a) + ((param_2[0x101] + 1) * 0xb + *param_2) * 8;
  }
  uVar2 = *(uint *)(param_1 + 0xfa);
  iVar6 = ftol();
  iVar6 = (*(int *)(param_1 + 0x1a6) + iVar8) - iVar6;
  if ((int)((*(int *)(param_1 + 0x102) + 1000) * (uVar2 / 1000)) < iVar6) {
    uVar9 = 0x80004005;
    if ((*(int *)(param_1 + 0xea) == 3) || (*(int *)(param_1 + 0xea) == 2)) {
      uVar7 = *(int *)(param_1 + 0x1c6) + 200;
      *(uint *)(param_1 + 0x1c6) = uVar7;
      if (5000 < uVar7) {
        *(undefined4 *)(param_1 + 0x1c6) = 5000;
      }
      dVar5 = _DAT_67213150;
      dVar3 = *(double *)(param_1 + 0x1e2) - _DAT_67213158;
      dVar4 = *(double *)(param_1 + 0x1ca) - _DAT_67213158;
      dVar1 = *(double *)(param_1 + 0x1da) - _DAT_67213158;
      *(double *)(param_1 + 0x1e2) = dVar3;
      *(double *)(param_1 + 0x1ca) = dVar4;
      *(double *)(param_1 + 0x1da) = dVar1;
      if (dVar5 < dVar3) {
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        *(undefined4 *)(param_1 + 0x1e6) = 0x403f0000;
      }
      if (_DAT_67213150 < dVar4) {
        *(undefined4 *)(param_1 + 0x1ca) = 0;
        *(undefined4 *)(param_1 + 0x1ce) = 0x403f0000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1c2) = 1;
      uVar7 = *(int *)(param_1 + 0x1c6) + 200;
      *(uint *)(param_1 + 0x1c6) = uVar7;
      if (5000 < uVar7) {
        *(undefined4 *)(param_1 + 0x1c6) = 5000;
      }
      dVar5 = _DAT_67213150;
      dVar3 = *(double *)(param_1 + 0x1e2) - _DAT_67213148;
      dVar4 = *(double *)(param_1 + 0x1ca) - _DAT_67213148;
      dVar1 = *(double *)(param_1 + 0x1da) - _DAT_67213148;
      *(double *)(param_1 + 0x1e2) = dVar3;
      *(double *)(param_1 + 0x1ca) = dVar4;
      *(double *)(param_1 + 0x1da) = dVar1;
      if (dVar5 < dVar3) {
        *(undefined4 *)(param_1 + 0x1e2) = 0;
        *(undefined4 *)(param_1 + 0x1e6) = 0x403f0000;
      }
      if (_DAT_67213150 < dVar4) {
        *(undefined4 *)(param_1 + 0x1ca) = 0;
        *(undefined4 *)(param_1 + 0x1ce) = 0x403f0000;
      }
    }
    if (_DAT_67213150 < dVar1) {
      *(undefined4 *)(param_1 + 0x1da) = 0;
      *(undefined4 *)(param_1 + 0x1de) = 0x403f0000;
    }
  }
  else {
    uVar9 = 0;
  }
  if (iVar6 < (int)(uVar2 * 4)) {
    *(undefined4 *)(param_1 + 0x1c2) = 0;
  }
  return uVar9;
}


