/* Module: sfxpfx2.dll
   Function: FUN_5c895c10
   Address: 5c895c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_5c895c10(void *this)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  int in_stack_00000010;
  
  iVar1 = ftol();
  fVar2 = (float10)*(double *)((int)this + 0x20e0) *
          (float10)*(double *)((int)this + in_stack_00000010 * 8 + 0x20f0) +
          (float10)*(double *)((int)this + iVar1 * 8 + 0x180) *
          (float10)*(double *)((int)this + 0x178) * extraout_ST0 *
          (float10)*(double *)((int)this + 0x20e8);
  if (ABS(fVar2) < (float10)_DAT_5c8dc948) {
    fVar2 = (float10)_DAT_5c8dc8e8;
  }
  *(double *)((int)this + in_stack_00000010 * 8 + 0x20f0) = (double)fVar2;
  iVar1 = ftol();
  if (iVar1 < -0x8000) {
    return -0x8000;
  }
  if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  return iVar1;
}


