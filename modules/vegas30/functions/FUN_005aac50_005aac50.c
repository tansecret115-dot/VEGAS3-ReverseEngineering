/* Module: vegas30.exe
   Function: FUN_005aac50
   Address: 005aac50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005aac50(double param_1,double param_2,double param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_2;
  if (fVar1 < (float10)_DAT_00610fd8) {
    fVar1 = (float10)_DAT_00610fd8;
  }
  fVar2 = (float10)param_3;
  if ((float10)param_1 < fVar2) {
    fVar2 = (float10)param_1;
  }
  return fVar2 - fVar1;
}


