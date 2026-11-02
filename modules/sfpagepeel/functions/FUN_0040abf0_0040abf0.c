/* Module: sfpagepeel.dll
   Function: FUN_0040abf0
   Address: 0040abf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0040abf0(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 fVar6;
  unkbyte10 extraout_ST1;
  float10 fVar7;
  
  fVar5 = (float10)*(double *)(param_1 + 0x28);
  iVar4 = ftol();
  fVar6 = (float10)(iVar4 % 0x708) * (float10)_DAT_00470878;
  if ((float10)_DAT_00470870 < fVar6) {
    fVar6 = (float10)_DAT_00470860 - fVar6;
  }
  fVar7 = (float10)fpatan(fVar5,extraout_ST1);
  fVar7 = (float10)fcos(fVar6 - fVar7);
  fVar6 = fVar5;
  if ((float10)*(double *)(param_1 + 0x28) < fVar5) {
    fVar6 = (float10)*(double *)(param_1 + 0x28);
  }
  fVar6 = fVar6 * (float10)*(double *)(param_1 + 0x20);
  dVar1 = (double)fVar6;
  *(double *)(param_1 + 0x58) = (double)fVar6;
  if ((float10)*(double *)(param_1 + 0x28) < fVar5) {
    fVar5 = (float10)*(double *)(param_1 + 0x28);
  }
  fVar5 = ((float10)*(double *)(param_1 + 8) -
          (float10)*(double *)(param_1 + 0x20) * (float10)_DAT_00470870) *
          (float10)*(double *)(param_1 + 0x68) * fVar5;
  *(double *)(param_1 + 0x60) = (double)fVar5;
  if (fVar5 < (float10)_DAT_0046fdc8) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  dVar3 = ((double)(fVar7 * extraout_ST0) * _DAT_00470820 -
          (dVar1 + (double)(fVar7 * extraout_ST0)) * *(double *)(param_1 + 8)) -
          *(double *)(param_1 + 0x60);
  *(double *)(param_1 + 0x70) = dVar3;
  dVar2 = dVar1 * _DAT_00470860;
  *(double *)(param_1 + 0x78) = dVar3 + dVar3 + dVar2;
  *(double *)(param_1 + 0x80) = dVar2 + dVar3;
  *(double *)(param_1 + 0x90) = dVar3 + dVar1;
  if (dVar1 <= _DAT_0046fdc8) {
    *(undefined4 *)(param_1 + 0x88) = 0x1e900000;
    *(undefined4 *)(param_1 + 0x8c) = 0x42d6bcc4;
  }
  else {
    *(double *)(param_1 + 0x88) = _DAT_0046fdc0 / dVar1;
  }
  *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0x50) - *(char *)(param_1 + 0x51);
  *(double *)(param_1 + 0x98) = (double)*(byte *)(param_1 + 0x52) * _DAT_00470868;
  return;
}


