/* Module: sfxpfx2.dll
   Function: FUN_5c899e10
   Address: 5c899e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c899e10(void *this,short *param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  double local_18;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar2 = FUN_5c8996a0((int)this,(double)(int)*param_1 * _DAT_5c8dc960,0);
    local_18 = (double)fVar2;
    if (*(int *)((int)this + 0x80) == 2) {
      fVar2 = FUN_5c8996a0((int)this,local_18,1);
      local_18 = (double)fVar2;
    }
    if (*(int *)((int)this + 0x80) == 3) {
      FUN_5c8996a0((int)this,local_18,2);
    }
    iVar1 = ftol();
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    *param_1 = (short)iVar1;
    param_1 = param_1 + param_2;
  }
  return 0;
}


