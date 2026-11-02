/* Module: sfxpfx2.dll
   Function: FUN_5c89b400
   Address: 5c89b400
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_5c89b400(void *this,double *param_1,double *param_2,int param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double local_8;
  
  fVar6 = (float10)*param_1;
  fVar7 = (float10)*param_2;
  fVar8 = fVar7;
  if (param_3 == 0) {
    fVar6 = fVar6 * (float10)*(double *)((int)this + 0x68);
    fVar8 = fVar7 * (float10)*(double *)((int)this + 0x68);
  }
  fsin((float10)*(int *)((int)this + param_3 * 4 + 0x1e0) *
       (float10)*(double *)((int)this + param_3 * 8 + 0x238));
  iVar4 = ftol();
  iVar5 = iVar4 + 1;
  if (iVar5 == 0x1964) {
    iVar5 = 0;
  }
  iVar3 = *(int *)((int)this + param_3 * 4 + 0x1ac);
  fVar9 = (float10)*(double *)((int)this + 0x178) *
          (float10)*(double *)((int)this + param_3 * 8 + 0x1c8) +
          ((extraout_ST0 - (float10)iVar4) *
           ((float10)*(double *)(iVar3 + iVar5 * 8) - (float10)*(double *)(iVar3 + iVar4 * 8)) +
          (float10)*(double *)(iVar3 + iVar4 * 8)) * (float10)*(double *)((int)this + 0x180);
  *(double *)((int)this + param_3 * 8 + 0x1c8) = (double)fVar9;
  dVar1 = *(double *)((int)this + param_3 * 8 + 0x1f0) - _DAT_5c8dc920;
  *(double *)((int)this + param_3 * 8 + 0x1f0) = dVar1;
  if (dVar1 < _DAT_5c8dc8e8) {
    *(undefined4 *)((int)this + param_3 * 8 + 0x1f0) = 0;
    *(undefined4 *)((int)this + param_3 * 8 + 500) = 0x40b96300;
  }
  iVar5 = *(int *)((int)this + param_3 * 4 + 0x1e0) + 1;
  *(int *)((int)this + param_3 * 4 + 0x1e0) = iVar5;
  if (*(double *)((int)this + param_3 * 8 + 0x220) <= (double)iVar5) {
    *(undefined4 *)((int)this + param_3 * 4 + 0x1e0) = 0;
  }
  if (param_3 == 0) {
    fVar10 = fVar8 * (float10)*(double *)((int)this + 0x70) +
             (float10)*(double *)((int)this + 0xd8) * (float10)*(double *)((int)this + 0x208) *
             fVar9;
    fVar11 = extraout_ST1 * (float10)*(double *)((int)this + 0x70) +
             (float10)*(double *)((int)this + 0x128) * (float10)*(double *)((int)this + 0x208) *
             fVar9;
  }
  else {
    fVar10 = fVar9 * (float10)*(double *)((int)this + 0xd8) + fVar8;
    fVar11 = fVar9 * (float10)*(double *)((int)this + 0x128) + extraout_ST1;
  }
  local_8 = (double)fVar10;
  *(double *)
   (*(int *)((int)this + param_3 * 4 + 0x1ac) + *(int *)((int)this + param_3 * 4 + 0x1b8) * 8) =
       (double)(fVar9 * (float10)*(double *)((int)this + 0x78) +
               (extraout_ST1 + fVar8) * (float10)_DAT_5c8dc8f8);
  iVar5 = *(int *)((int)this + param_3 * 4 + 0x1b8) + -1;
  *(int *)((int)this + param_3 * 4 + 0x1b8) = iVar5;
  if (iVar5 < 0) {
    *(undefined4 *)((int)this + param_3 * 4 + 0x1b8) = 0x1963;
  }
  dVar1 = *(double *)((int)this + 0x60);
  dVar2 = *(double *)((int)this + 0x58);
  *param_1 = (double)((float10)local_8 * (float10)*(double *)((int)this + 0x58) +
                     fVar7 * (float10)*(double *)((int)this + 0x60));
  *param_2 = (double)((float10)(double)fVar11 * (float10)dVar2 + fVar6 * (float10)dVar1);
  return;
}


