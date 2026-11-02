/* Module: rv203260.dll
   Function: FUN_638a3390
   Address: 638a3390
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_638a3390(int param_1,int *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[0x81] == 0) {
    iVar8 = *(int *)(param_1 + 0x192) + 0x40 + *param_2 * 8;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x192) + ((param_2[0x81] + 1) * 0xb + *param_2) * 8;
  }
  uVar1 = *(uint *)(param_1 + 0xfa);
  iVar6 = ftol();
  iVar8 = iVar8 + (*(int *)(param_1 + 0x1ae) - iVar6);
  if ((int)((*(int *)(param_1 + 0x102) + 1000) * (uVar1 / 1000)) < iVar8) {
    local_8 = 0x80004005;
    uVar7 = *(int *)(param_1 + 0x1ce) + 200;
    *(undefined4 *)(param_1 + 0x1ca) = 1;
    *(uint *)(param_1 + 0x1ce) = uVar7;
    if (5000 < uVar7) {
      *(undefined4 *)(param_1 + 0x1ce) = 5000;
    }
    dVar5 = _DAT_638b3150;
    dVar2 = *(double *)(param_1 + 0x1ea) - _DAT_638b3148;
    dVar3 = *(double *)(param_1 + 0x1d2) - _DAT_638b3148;
    dVar4 = *(double *)(param_1 + 0x1e2) - _DAT_638b3148;
    *(double *)(param_1 + 0x1ea) = dVar2;
    *(double *)(param_1 + 0x1d2) = dVar3;
    *(double *)(param_1 + 0x1e2) = dVar4;
    if (dVar5 < dVar2) {
      *(undefined4 *)(param_1 + 0x1ea) = 0;
      *(undefined4 *)(param_1 + 0x1ee) = 0x403f0000;
    }
    if (_DAT_638b3150 < dVar3) {
      *(undefined4 *)(param_1 + 0x1d2) = 0;
      *(undefined4 *)(param_1 + 0x1d6) = 0x403f0000;
    }
    if (_DAT_638b3150 < dVar4) {
      *(undefined4 *)(param_1 + 0x1e2) = 0;
      *(undefined4 *)(param_1 + 0x1e6) = 0x403f0000;
    }
  }
  if (iVar8 < (int)(uVar1 * 4)) {
    *(undefined4 *)(param_1 + 0x1ca) = 0;
  }
  return local_8;
}


