/* Module: sfxpfx1.dll
   Function: FUN_5c946700
   Address: 5c946700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c946700(void *this,float *param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar1 = FUN_5c945830((int)this,(double)*param_1,param_4);
    *param_1 = (float)fVar1;
    param_1 = param_1 + param_2;
  }
  return 0;
}


