/* Module: vegas30k.dll
   Function: FUN_01006cd0
   Address: 01006cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01006cd0(double *param_1,byte *param_2)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = (double)*param_2 * _DAT_011db3f8;
  dVar7 = (double)param_2[1] * _DAT_011db3f8;
  dVar5 = (double)param_2[2] * _DAT_011db3f8;
  dVar8 = (double)param_2[3] * _DAT_011db3f8;
  dVar3 = dVar2;
  if (dVar2 < dVar5) {
    dVar3 = dVar5;
  }
  dVar6 = dVar7;
  if ((dVar7 < dVar3) && (dVar6 = dVar5, dVar5 <= dVar2)) {
    dVar6 = dVar2;
  }
  dVar3 = dVar2;
  if (dVar5 < dVar2) {
    dVar3 = dVar5;
  }
  dVar4 = dVar7;
  if ((dVar3 < dVar7) && (dVar4 = dVar2, dVar5 < dVar2)) {
    dVar4 = dVar5;
  }
  dVar4 = dVar6 - dVar4;
  param_1[2] = dVar6;
  dVar3 = _DAT_011db3f0;
  if (dVar6 != _DAT_011db3f0) {
    dVar3 = dVar4 / dVar6;
  }
  param_1[1] = dVar3;
  bVar1 = _DAT_011db3f0 == dVar3;
  param_1[3] = dVar8;
  if (bVar1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)((int)param_1 + 4) = 0;
    return;
  }
  if (dVar5 == dVar6) {
    *param_1 = (dVar7 - dVar2) / dVar4;
  }
  else {
    if (dVar7 == dVar6) {
      dVar2 = (dVar2 - dVar5) / dVar4 + _DAT_011db3e8;
    }
    else {
      if (dVar2 != dVar6) goto LAB_01006e62;
      dVar2 = (dVar5 - dVar7) / dVar4 + _DAT_011db3e0;
    }
    *param_1 = dVar2;
  }
LAB_01006e62:
  dVar2 = *param_1 * _DAT_011db3d8;
  bVar1 = _DAT_011db3f0 <= dVar2;
  *param_1 = dVar2;
  if (bVar1) {
    return;
  }
  *param_1 = dVar2 + _DAT_011db3d0;
  return;
}


