/* Module: mcplugrw.dll
   Function: FUN_00454bb0
   Address: 00454bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454bb0(double *param_1,float *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_38;
  
  dVar2 = (double)*param_2;
  fVar1 = param_2[1];
  dVar8 = (double)fVar1;
  dVar4 = (double)param_2[2];
  dVar3 = (double)param_2[2];
  param_1[3] = (double)param_2[3];
  if (dVar4 <= dVar8) {
    dVar4 = dVar8;
  }
  if (dVar4 <= dVar2) {
    dVar4 = dVar2;
  }
  local_38 = dVar3;
  if (dVar8 <= dVar3) {
    local_38 = (double)fVar1;
  }
  if (dVar2 <= local_38) {
    local_38 = dVar2;
  }
  dVar5 = local_38 + dVar4;
  dVar7 = dVar5 * _DAT_0049ad10;
  param_1[2] = dVar7;
  dVar9 = _DAT_0049ad08;
  if (dVar7 <= _DAT_0049ad08) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return;
  }
  dVar6 = dVar4 - local_38;
  param_1[1] = dVar6;
  if (dVar6 <= dVar9) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return;
  }
  if (_DAT_0049ad10 < dVar7) {
    dVar5 = (_DAT_0049c170 - dVar4) - local_38;
  }
  param_1[1] = dVar6 / dVar5;
  dVar6 = _DAT_0049c008 / dVar6;
  dVar5 = (dVar4 - dVar3) * dVar6;
  dVar7 = (dVar4 - dVar8) * dVar6;
  dVar6 = (dVar4 - dVar2) * dVar6;
  if (dVar3 != dVar4) {
    if (dVar8 != dVar4) {
      if (dVar3 != local_38) {
        *param_1 = _DAT_0049e900 - dVar5;
        *param_1 = *param_1 * _DAT_0049e8f8;
        return;
      }
      *param_1 = dVar7 + _DAT_0049e8f0;
      *param_1 = *param_1 * _DAT_0049e8f8;
      return;
    }
    if (dVar2 != local_38) {
      *param_1 = _DAT_0049e8f0 - dVar6;
      *param_1 = *param_1 * _DAT_0049e8f8;
      return;
    }
    *param_1 = dVar5 + _DAT_0049c008;
    *param_1 = *param_1 * _DAT_0049e8f8;
    return;
  }
  if (dVar8 != local_38) {
    *param_1 = _DAT_0049c008 - dVar7;
    *param_1 = *param_1 * _DAT_0049e8f8;
    return;
  }
  *param_1 = dVar6 + _DAT_0049e900;
  *param_1 = *param_1 * _DAT_0049e8f8;
  return;
}


