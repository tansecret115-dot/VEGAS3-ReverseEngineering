/* Module: tokr3260.dll
   Function: FUN_68057360
   Address: 68057360
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 __cdecl FUN_68057360(float *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = ABS(*param_1);
  if (1 < param_2) {
    iVar2 = param_2 + -1;
    do {
      param_1 = param_1 + 1;
      if ((uint)fVar1 < (uint)ABS(*param_1)) {
        fVar1 = ABS(*param_1);
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (float10)fVar1;
}


