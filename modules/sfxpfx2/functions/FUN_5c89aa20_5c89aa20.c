/* Module: sfxpfx2.dll
   Function: FUN_5c89aa20
   Address: 5c89aa20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_5c89aa20(void *this,float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar1 = FUN_5c8996a0((int)this,(double)*param_1,0);
    *param_1 = (float)fVar1;
    if ((*(int *)((int)this + 0x80) == 2) || (*(int *)((int)this + 0x80) == 3)) {
      fVar1 = FUN_5c8996a0((int)this,(double)fVar1,1);
      *param_1 = (float)fVar1;
    }
    if (*(int *)((int)this + 0x80) == 3) {
      fVar1 = FUN_5c8996a0((int)this,(double)*param_1,2);
      *param_1 = (float)fVar1;
    }
    param_1 = param_1 + param_2;
  }
  return 0;
}


