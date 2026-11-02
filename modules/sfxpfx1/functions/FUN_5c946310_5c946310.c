/* Module: sfxpfx1.dll
   Function: FUN_5c946310
   Address: 5c946310
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c946310(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar2 = FUN_5c945830((int)this,(double)*param_1 * _DAT_5c98ba08,param_4);
    if ((float10)_DAT_5c98b9f8 <= fVar2 * (float10)_DAT_5c98ba00) {
      if (fVar2 * (float10)_DAT_5c98ba00 <= (float10)_DAT_5c98b9f0) {
        iVar1 = ftol();
      }
      else {
        iVar1 = 0x7fffffff;
      }
    }
    else {
      iVar1 = -0x80000000;
    }
    *param_1 = iVar1;
    param_1 = param_1 + param_2;
  }
  return 0;
}


