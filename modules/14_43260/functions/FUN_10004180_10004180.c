/* Module: 14_43260.dll
   Function: FUN_10004180
   Address: 10004180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10004180(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(param_1 + 0x996);
  fVar4 = (float10)_DAT_10010c58;
  if (0 < iVar3) {
    do {
      fVar1 = *param_3;
      fVar2 = *param_2;
      param_3 = param_3 + 1;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
      fVar4 = (float10)fVar1 * (float10)fVar2 + fVar4;
    } while (iVar3 != 0);
  }
  return fVar4;
}


