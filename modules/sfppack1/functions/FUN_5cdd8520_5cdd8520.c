/* Module: sfppack1.dll
   Function: FUN_5cdd8520
   Address: 5cdd8520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cdd8520(void *this,float *param_1,int param_2,int param_3)

{
  uint _NewValue;
  float10 fVar1;
  int local_14;
  
  _NewValue = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (param_3 != 0) {
    local_14 = param_3;
    do {
      fVar1 = FUN_5cdd7110(this,(double)*param_1,0);
      *param_1 = (float)fVar1;
      if ((*(int *)((int)this + 0x90) == 2) || (*(int *)((int)this + 0x90) == 3)) {
        fVar1 = FUN_5cdd7110(this,(double)fVar1,1);
        *param_1 = (float)fVar1;
      }
      if (*(int *)((int)this + 0x90) == 3) {
        fVar1 = FUN_5cdd7110(this,(double)*param_1,2);
        *param_1 = (float)fVar1;
      }
      param_1 = param_1 + param_2;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  _controlfp(_NewValue,0xffffffff);
  return 0;
}


