/* Module: tokr3260.dll
   Function: FUN_68056a50
   Address: 68056a50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_68056a50(float param_1,float param_2,int param_3)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  floor((double)(((float)param_3 - (float)_DAT_6805b100) * (param_1 / param_2) -
                (float)_DAT_6805b100));
  ftol();
  iVar1 = ftol();
  fVar2 = extraout_ST0;
  if (iVar1 < -param_3) {
    fVar2 = (float10)-param_3;
  }
  return fVar2;
}


