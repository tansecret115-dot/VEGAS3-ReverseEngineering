/* Module: sftrans1.dll
   Function: FUN_004232a0
   Address: 004232a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004232a0(double *param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  char local_7f;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  char local_57;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  char local_2f;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  char local_7;
  
  pdVar5 = param_2 + 3;
  pdVar6 = &local_78;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar6 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  pdVar5 = param_3 + 3;
  pdVar6 = &local_28;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar6 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  pdVar5 = param_2 + 8;
  pdVar6 = &local_50;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar6 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  pdVar5 = param_3 + 8;
  pdVar6 = &local_a0;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar6 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  if (local_57 != '\0') {
    local_60 = local_68 * local_38;
  }
  if (local_7 != '\0') {
    local_10 = local_18 * local_88;
  }
  if (local_2f != '\0') {
    local_38 = -(local_40 * local_60);
  }
  if (local_7f != '\0') {
    local_88 = -(local_90 * local_10);
  }
  dVar1 = _DAT_00555908 - param_4;
  pdVar5 = param_2;
  pdVar6 = param_1;
  for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar6 = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pdVar6 = (double *)((int)pdVar6 + 4);
  }
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  *param_1 = dVar1 * *param_2 + param_4 * *param_3;
  param_1[1] = param_4 * param_3[1] + dVar1 * param_2[1];
  param_1[5] = local_18 * param_4 + dVar1 * local_68;
  param_1[6] = local_10 * param_4 + dVar1 * local_60;
  param_1[10] = local_90 * param_4 + dVar1 * local_40;
  param_1[0xb] = local_88 * param_4 + dVar1 * local_38;
  dVar2 = local_a0 * param_4 + dVar1 * local_50;
  dVar3 = _DAT_00557828;
  if ((_DAT_00557828 <= dVar2) && (dVar3 = dVar2, _DAT_00555908 < dVar2)) {
    dVar3 = _DAT_00555908;
  }
  param_1[8] = dVar3;
  dVar2 = local_28 * param_4 + dVar1 * local_78;
  dVar3 = _DAT_00557828;
  if ((_DAT_00557828 <= dVar2) && (dVar3 = dVar2, _DAT_00555908 < dVar2)) {
    dVar3 = _DAT_00555908;
  }
  param_1[3] = dVar3;
  param_1[9] = local_98 * param_4 + dVar1 * local_48;
  param_1[4] = local_20 * param_4 + dVar1 * local_70;
  return;
}


