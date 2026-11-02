/* Module: sfppack1.dll
   Function: FUN_5cdd7ef0
   Address: 5cdd7ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cdd7ef0(void *this,int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  double local_14;
  
  pcVar1 = _controlfp_exref;
  uVar2 = _controlfp(0,0);
  _controlfp(0x300,0x300);
  for (; param_3 != 0; param_3 = param_3 + -1) {
    fVar4 = FUN_5cdd7110(this,(double)*param_1 * _DAT_5ce13278,0);
    local_14 = (double)fVar4;
    if (*(int *)((int)this + 0x90) == 2) {
      fVar4 = FUN_5cdd7110(this,local_14,1);
      local_14 = (double)fVar4;
    }
    if (*(int *)((int)this + 0x90) == 3) {
      fVar4 = FUN_5cdd7110(this,local_14,2);
    }
    iVar3 = -0x80000000;
    if (0x7fffffff < (uint)(int)ROUND((double)(fVar4 * (float10)_DAT_5ce13260))) {
      iVar3 = (int)ROUND((double)(fVar4 * (float10)_DAT_5ce13260));
    }
    *param_1 = iVar3;
    param_1 = param_1 + param_2;
    pcVar1 = _controlfp_exref;
  }
  (*pcVar1)(uVar2,0xffffffff);
  return 0;
}


