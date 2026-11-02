/* Module: vegas30k.dll
   Function: _SFRGBA_To_SFHSL@8
   Address: 010b41b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _SFRGBA_To_SFHSL_8(double *param_1,byte *param_2)

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
  
                    /* 0xb41b0  703  _SFRGBA_To_SFHSL@8 */
  dVar1 = (double)*param_2 * _DAT_011db3f8;
  dVar2 = (double)param_2[1] * _DAT_011db3f8;
  dVar4 = (double)param_2[2] * _DAT_011db3f8;
  param_1[3] = (double)param_2[3] * _DAT_011db3f8;
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
  dVar7 = dVar5 * _DAT_011db6e8;
  param_1[2] = dVar7;
  dVar8 = _DAT_011db3f0;
  if (dVar7 <= _DAT_011db3f0) {
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
  if (_DAT_011db6e8 < dVar7) {
    dVar5 = (_DAT_011db3e8 - dVar3) - local_38;
  }
  param_1[1] = dVar6 / dVar5;
  dVar6 = _DAT_011dad58 / dVar6;
  dVar7 = (dVar3 - dVar4) * dVar6;
  dVar5 = (dVar3 - dVar2) * dVar6;
  dVar6 = (dVar3 - dVar1) * dVar6;
  if (dVar4 != dVar3) {
    if (dVar2 != dVar3) {
      if (dVar4 != local_38) {
        *param_1 = _DAT_011e24f8 - dVar7;
        *param_1 = *param_1 * _DAT_011e24f0;
        return;
      }
      *param_1 = dVar5 + _DAT_011dba48;
      *param_1 = *param_1 * _DAT_011e24f0;
      return;
    }
    if (dVar1 != local_38) {
      *param_1 = _DAT_011dba48 - dVar6;
      *param_1 = *param_1 * _DAT_011e24f0;
      return;
    }
    *param_1 = dVar7 + _DAT_011dad58;
    *param_1 = *param_1 * _DAT_011e24f0;
    return;
  }
  if (dVar2 != local_38) {
    *param_1 = _DAT_011dad58 - dVar5;
    *param_1 = *param_1 * _DAT_011e24f0;
    return;
  }
  *param_1 = dVar6 + _DAT_011e24f8;
  *param_1 = *param_1 * _DAT_011e24f0;
  return;
}


