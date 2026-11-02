/* Module: vegas30.exe
   Function: FUN_004b74a0
   Address: 004b74a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004b74a0(double param_1,undefined4 *param_2)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  log2((float10)param_1);
  ftol();
  *param_2 = 10;
  _CIpow();
  iVar1 = ftol();
  if (iVar1 < 0x50) {
    if (iVar1 < 0x28) {
      fVar2 = extraout_ST0;
      if (9 < iVar1) {
        *param_2 = 0x14;
        fVar2 = extraout_ST0 + extraout_ST0;
      }
    }
    else {
      fVar2 = extraout_ST0 * (float10)_DAT_00613628;
      *param_2 = 5;
    }
  }
  else {
    fVar2 = extraout_ST0 * (float10)_DAT_00612b00;
  }
  if (fVar2 <= (float10)_DAT_006106d0) {
    fVar2 = (float10)_DAT_006106d0;
  }
  return fVar2;
}


