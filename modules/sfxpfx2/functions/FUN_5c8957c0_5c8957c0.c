/* Module: sfxpfx2.dll
   Function: FUN_5c8957c0
   Address: 5c8957c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_5c8957c0(void *this)

{
  int iVar1;
  uint uVar2;
  float10 extraout_ST0;
  float10 fVar3;
  int in_stack_00000010;
  
  iVar1 = ftol();
  fVar3 = (float10)*(double *)((int)this + 0x20e0) *
          (float10)*(double *)((int)this + in_stack_00000010 * 8 + 0x20f0) +
          (float10)*(double *)((int)this + iVar1 * 8 + 0x180) *
          (float10)*(double *)((int)this + 0x178) * extraout_ST0 *
          (float10)*(double *)((int)this + 0x20e8);
  if (ABS(fVar3) < (float10)_DAT_5c8dc948) {
    fVar3 = (float10)_DAT_5c8dc8e8;
  }
  *(double *)((int)this + in_stack_00000010 * 8 + 0x20f0) = (double)fVar3;
  uVar2 = ftol();
  if ((int)uVar2 < -0x80) {
    return uVar2 & 0xffffff00;
  }
  if (0x7f < (int)uVar2) {
    return CONCAT31((int3)(uVar2 >> 8),0xff);
  }
  return uVar2 ^ 0x80;
}


