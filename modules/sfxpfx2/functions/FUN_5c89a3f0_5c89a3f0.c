/* Module: sfxpfx2.dll
   Function: FUN_5c89a3f0
   Address: 5c89a3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c89a3f0(void *this,int *param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  double local_10;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar2 = FUN_5c8996a0((int)this,(double)*param_1 * _DAT_5c8dc980,0);
    local_10 = (double)fVar2;
    if (*(int *)((int)this + 0x80) == 2) {
      fVar2 = FUN_5c8996a0((int)this,local_10,1);
      local_10 = (double)fVar2;
    }
    if (*(int *)((int)this + 0x80) == 3) {
      fVar2 = FUN_5c8996a0((int)this,local_10,2);
    }
    if ((float10)_DAT_5c8dc970 <= fVar2 * (float10)_DAT_5c8dc978) {
      if (fVar2 * (float10)_DAT_5c8dc978 <= (float10)_DAT_5c8dc968) {
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


