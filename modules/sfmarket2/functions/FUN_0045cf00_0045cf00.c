/* Module: sfmarket2.dll
   Function: FUN_0045cf00
   Address: 0045cf00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cf00(double *param_1,byte *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_38;
  
  dVar1 = (double)*param_2 * _DAT_004a0330;
  dVar2 = (double)param_2[1] * _DAT_004a0330;
  dVar4 = (double)param_2[2] * _DAT_004a0330;
  param_1[3] = (double)param_2[3] * _DAT_004a0330;
  dVar3 = dVar4;
  if (dVar4 <= dVar2) {
    dVar3 = dVar2;
  }
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  local_38 = dVar2;
  if (dVar4 < dVar2) {
    local_38 = dVar4;
  }
  if (dVar1 <= local_38) {
    local_38 = dVar1;
  }
  dVar5 = local_38 + dVar3;
  dVar7 = dVar5 * _DAT_0049c7b0;
  param_1[2] = dVar7;
  dVar8 = _DAT_0049c7a8;
  if (dVar7 <= _DAT_0049c7a8) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return;
  }
  dVar6 = dVar3 - local_38;
  param_1[1] = dVar6;
  if (dVar6 <= dVar8) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return;
  }
  if (_DAT_0049c7b0 < dVar7) {
    dVar5 = (_DAT_0049cfb0 - dVar3) - local_38;
  }
  param_1[1] = dVar6 / dVar5;
  dVar6 = _DAT_0049e748 / dVar6;
  dVar7 = (dVar3 - dVar4) * dVar6;
  dVar5 = (dVar3 - dVar2) * dVar6;
  dVar6 = (dVar3 - dVar1) * dVar6;
  if (dVar4 != dVar3) {
    if (dVar2 != dVar3) {
      if (dVar4 != local_38) {
        *param_1 = _DAT_004a1300 - dVar7;
        *param_1 = *param_1 * _DAT_004a12f8;
        return;
      }
      *param_1 = dVar5 + _DAT_004a12f0;
      *param_1 = *param_1 * _DAT_004a12f8;
      return;
    }
    if (dVar1 != local_38) {
      *param_1 = _DAT_004a12f0 - dVar6;
      *param_1 = *param_1 * _DAT_004a12f8;
      return;
    }
    *param_1 = dVar7 + _DAT_0049e748;
    *param_1 = *param_1 * _DAT_004a12f8;
    return;
  }
  if (dVar2 != local_38) {
    *param_1 = _DAT_0049e748 - dVar5;
    *param_1 = *param_1 * _DAT_004a12f8;
    return;
  }
  *param_1 = dVar6 + _DAT_004a1300;
  *param_1 = *param_1 * _DAT_004a12f8;
  return;
}


