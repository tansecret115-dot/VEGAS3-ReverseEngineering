/* Module: sfppack3.dll
   Function: FUN_5cc35c40
   Address: 5cc35c40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc35c40(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar2 = FUN_5cc35160((int)this,(double)*param_1 * _DAT_5cc87d98,param_4);
    if ((float10)_DAT_5cc87d88 <= fVar2 * (float10)_DAT_5cc87d90) {
      if (fVar2 * (float10)_DAT_5cc87d90 <= (float10)_DAT_5cc87d80) {
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


