/* Module: sfppack1.dll
   Function: FUN_5cdd8a50
   Address: 5cdd8a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5cdd8a50(void *this,double *param_1,int param_2,int param_3)

{
  uint _NewValue;
  float10 fVar1;
  int local_1c;
  
  _NewValue = _controlfp(0,0);
  _controlfp(0x300,0x300);
  if (param_3 != 0) {
    local_1c = param_3;
    do {
      fVar1 = FUN_5cdd7110(this,*param_1,0);
      *param_1 = (double)fVar1;
      if ((*(int *)((int)this + 0x90) == 2) || (*(int *)((int)this + 0x90) == 3)) {
        fVar1 = FUN_5cdd7110(this,(double)fVar1,1);
        *param_1 = (double)fVar1;
      }
      if (*(int *)((int)this + 0x90) == 3) {
        fVar1 = FUN_5cdd7110(this,*param_1,2);
        *param_1 = (double)fVar1;
      }
      param_1 = param_1 + param_2;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  _controlfp(_NewValue,0xffffffff);
  return 0;
}


