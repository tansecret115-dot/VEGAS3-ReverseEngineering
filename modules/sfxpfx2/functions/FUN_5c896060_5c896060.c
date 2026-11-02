/* Module: sfxpfx2.dll
   Function: FUN_5c896060
   Address: 5c896060
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5c896060(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  dVar2 = (double)param_1 * _DAT_5c8dc980;
  dVar1 = *(double *)((int)this + 0x170);
  iVar3 = ftol();
  fVar5 = (float10)*(double *)((int)this + 0x20e0) *
          (float10)*(double *)((int)this + param_4 * 8 + 0x20f0) +
          (float10)*(double *)((int)this + iVar3 * 8 + 0x180) *
          (float10)*(double *)((int)this + 0x178) * extraout_ST0 *
          (float10)*(double *)((int)this + 0x20e8);
  if (ABS(fVar5) < (float10)_DAT_5c8dc948) {
    fVar5 = (float10)_DAT_5c8dc8e8;
  }
  *(double *)((int)this + param_4 * 8 + 0x20f0) = (double)fVar5;
  fVar5 = (fVar5 + (float10)(dVar2 * dVar1)) * (float10)_DAT_5c8dc978;
  if (fVar5 < (float10)_DAT_5c8dc970) {
    return 0x80000000;
  }
  if ((float10)_DAT_5c8dc968 < fVar5) {
    return 0x7fffffff;
  }
  uVar4 = ftol();
  return uVar4;
}


