/* Module: aviplug.dll
   Function: FUN_5f9a04a0
   Address: 5f9a04a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_5f9a04a0(LPCSTR param_1,double param_2,double param_3,double param_4,undefined4 *param_5
                    )

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_5f9a03d0(param_1,&param_1);
  if (((float10)_DAT_5f9d78f0 == fVar2) && (*param_1 != '\0')) {
    iVar1 = _ismbcspace((int)*param_1);
    if (iVar1 == 0) {
      fVar2 = (float10)param_2;
    }
    else {
      fVar2 = (float10)(double)fVar2;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = param_1;
  }
  if (fVar2 < (float10)param_3) {
    return (float10)param_3;
  }
  if ((float10)param_4 < fVar2) {
    fVar2 = (float10)param_4;
  }
  return fVar2;
}


