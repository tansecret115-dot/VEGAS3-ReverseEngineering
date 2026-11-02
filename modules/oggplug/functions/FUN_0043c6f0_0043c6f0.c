/* Module: oggplug.dll
   Function: FUN_0043c6f0
   Address: 0043c6f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_0043c6f0(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar7 = 0;
  iVar6 = *param_1;
  iVar8 = 0;
  iVar10 = 0;
  iVar11 = 0;
  iVar9 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = param_1[param_2 * 0xc + -0xb];
  local_1c = 0;
  local_28 = 0;
  if (0 < param_2) {
    piVar5 = param_1 + 2;
    do {
      if (piVar5[7] != 0) {
        iVar8 = iVar8 + *piVar5;
        iVar10 = iVar10 + piVar5[1];
        iVar11 = iVar11 + piVar5[2];
        iVar9 = iVar9 + piVar5[4];
        iVar7 = iVar7 + piVar5[5];
        local_28 = local_28 + piVar5[6];
      }
      piVar5 = piVar5 + 0xc;
      param_2 = param_2 + -1;
      local_24 = iVar8;
      local_20 = iVar10;
      local_1c = iVar11;
    } while (param_2 != 0);
  }
  iVar8 = *param_3;
  if (-1 < iVar8) {
    local_20 = local_20 + iVar8;
    local_24 = local_24 + iVar6;
    local_1c = local_1c + iVar6 * iVar6;
    iVar9 = iVar9 + iVar8 * iVar6;
    iVar7 = iVar7 + 1;
    local_28 = local_28 + 1;
  }
  iVar8 = *param_4;
  if (-1 < iVar8) {
    local_24 = local_24 + iVar1;
    local_20 = local_20 + iVar8;
    local_1c = local_1c + iVar1 * iVar1;
    iVar9 = iVar9 + iVar8 * iVar1;
    iVar7 = iVar7 + 1;
    local_28 = local_28 + 1;
  }
  if (1 < iVar7) {
    dVar4 = (double)local_24;
    dVar2 = _DAT_0044d4a8 / ((double)local_28 * (double)local_1c - dVar4 * dVar4);
    dVar3 = ((double)local_1c * (double)local_20 - (double)iVar9 * dVar4) * dVar2;
    dVar2 = ((double)local_28 * (double)iVar9 - (double)local_20 * dVar4) * dVar2;
    floor((double)iVar6 * dVar2 + dVar3 + _DAT_00447a78);
    iVar6 = ftol();
    *param_3 = iVar6;
    floor((double)iVar1 * dVar2 + dVar3 + _DAT_00447a78);
    iVar6 = ftol();
    *param_4 = iVar6;
    if (0x3ff < *param_3) {
      *param_3 = 0x3ff;
    }
    if (0x3ff < *param_4) {
      *param_4 = 0x3ff;
    }
    if (*param_3 < 0) {
      *param_3 = 0;
    }
    if (*param_4 < 0) {
      *param_4 = 0;
    }
    return 0;
  }
  return iVar7 + -2;
}


