/* Module: sfppack2.dll
   Function: FUN_5ccdad90
   Address: 5ccdad90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_5ccdad90(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1 == -0x1e0) {
    return -500;
  }
  fVar3 = (float10)param_1 * (float10)_DAT_5cd514c8;
  if (fVar3 < (float10)_DAT_5cd51520) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
  }
  if (((float10)_DAT_5cd51cd8 <= fVar3) && (fVar3 <= (float10)_DAT_5cd51500)) {
    log2(ABS(fVar3) * (float10)_DAT_5cd51cd0 + (float10)_DAT_5cd51510);
    log2((float10)_DAT_5cd514e0);
    iVar1 = ftol();
    return iVar1 * iVar2;
  }
  log2(ABS(fVar3) * (float10)_DAT_5cd51cd0);
  log2((float10)_DAT_5cd514e0);
  iVar1 = ftol();
  return iVar1 * iVar2;
}


