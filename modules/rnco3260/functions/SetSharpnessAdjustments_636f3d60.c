/* Module: rnco3260.dll
   Function: SetSharpnessAdjustments
   Address: 636f3d60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetSharpnessAdjustments(float param_1,short param_2)

{
  double dVar1;
  
                    /* 0x3d60  19  SetSharpnessAdjustments */
  _DAT_63788f3c = param_1;
  DAT_63788f40 = param_2;
  dVar1 = _DAT_63765300;
  if (param_2 != 0) {
    dVar1 = _DAT_637652f8;
  }
  FUN_636f54d0((void *)((param_1 - (float)_DAT_637652f0) * (float)dVar1),10.0);
  return;
}


