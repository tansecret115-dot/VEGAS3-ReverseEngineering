/* Module: vegas30k.dll
   Function: _SfTextToDoubleTokenEx@32
   Address: 01094b00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 _SfTextToDoubleTokenEx_32
                  (char *param_1,double param_2,double param_3,double param_4,undefined4 *param_5)

{
  int iVar1;
  float10 fVar2;
  
                    /* 0x94b00  1220  _SfTextToDoubleTokenEx@32 */
  fVar2 = (float10)_SfTextToDoubleToken_8(param_1,&param_1);
  if (((float10)_DAT_011db3f0 == fVar2) && (*param_1 != '\0')) {
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


