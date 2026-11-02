/* Module: sfpagepeel.dll
   Function: FUN_0040ce90
   Address: 0040ce90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040ce90(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  unkbyte10 extraout_ST1;
  float10 fVar8;
  
  fVar6 = (float10)*(double *)(param_1 + 0x28);
  iVar5 = ftol();
  fVar7 = (float10)(iVar5 % 0x708) * (float10)_DAT_00470878;
  if ((float10)_DAT_00470870 < fVar7) {
    fVar7 = (float10)_DAT_00470860 - fVar7;
  }
  fVar8 = (float10)fpatan(fVar6,extraout_ST1);
  fVar8 = (float10)fcos(fVar7 - fVar8);
  fVar7 = fVar6;
  if ((float10)*(double *)(param_1 + 0x28) < fVar6) {
    fVar7 = (float10)*(double *)(param_1 + 0x28);
  }
  fVar7 = fVar7 * (float10)*(double *)(param_1 + 0x20);
  dVar1 = (double)fVar7;
  *(double *)(param_1 + 0x60) = (double)fVar7;
  fVar7 = fVar6;
  if ((float10)*(double *)(param_1 + 0x28) < fVar6) {
    fVar7 = (float10)*(double *)(param_1 + 0x28);
  }
  fVar7 = fVar7 * (float10)*(double *)(param_1 + 0x20) * (float10)_DAT_00470b58;
  dVar2 = (double)fVar7;
  *(double *)(param_1 + 0x68) = (double)fVar7;
  if ((float10)*(double *)(param_1 + 0x28) < fVar6) {
    fVar6 = (float10)*(double *)(param_1 + 0x28);
  }
  fVar6 = ((float10)*(double *)(param_1 + 8) -
          (float10)*(double *)(param_1 + 0x20) * (float10)_DAT_00470870) *
          (float10)*(double *)(param_1 + 0x78) * fVar6;
  *(double *)(param_1 + 0x70) = (double)fVar6;
  if (fVar6 < (float10)_DAT_0046fdc8) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  dVar4 = ((double)(fVar8 * extraout_ST0) * _DAT_00470820 -
          (dVar1 + (double)(fVar8 * extraout_ST0)) * *(double *)(param_1 + 8)) -
          *(double *)(param_1 + 0x70);
  *(double *)(param_1 + 0x80) = dVar4;
  dVar3 = dVar1 * _DAT_00470860;
  *(double *)(param_1 + 0x88) = dVar4 + dVar4 + dVar3;
  *(double *)(param_1 + 0x90) = dVar3 + dVar4;
  *(double *)(param_1 + 0xa8) = dVar4 + dVar1;
  if (dVar1 <= _DAT_0046fdc8) {
    *(undefined4 *)(param_1 + 0x98) = 0x1e900000;
    *(undefined4 *)(param_1 + 0x9c) = 0x42d6bcc4;
  }
  else {
    *(double *)(param_1 + 0x98) = _DAT_0046fdc0 / dVar1;
  }
  if (dVar2 <= _DAT_0046fdc8) {
    *(undefined4 *)(param_1 + 0xa0) = 0x1e900000;
    *(undefined4 *)(param_1 + 0xa4) = 0x42d6bcc4;
  }
  else {
    *(double *)(param_1 + 0xa0) = _DAT_0046fdc0 / dVar2;
  }
  *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0x50) - *(char *)(param_1 + 0x51);
  *(double *)(param_1 + 0xb0) = (double)*(byte *)(param_1 + 0x52) * _DAT_00470868;
  return;
}


