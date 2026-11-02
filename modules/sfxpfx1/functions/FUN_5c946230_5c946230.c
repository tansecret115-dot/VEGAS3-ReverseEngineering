/* Module: sfxpfx1.dll
   Function: FUN_5c946230
   Address: 5c946230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5c946230(void *this,int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  double *pdVar3;
  uint uVar4;
  int *local_114;
  int local_110;
  double local_108 [32];
  
  local_114 = param_1;
  if (param_3 != 0) {
    local_110 = param_3;
    do {
      if (param_2 != 0) {
        piVar1 = local_114;
        pdVar3 = local_108;
        uVar4 = param_2;
        do {
          iVar2 = *piVar1;
          piVar1 = piVar1 + 1;
          uVar4 = uVar4 - 1;
          *pdVar3 = (double)iVar2 * _DAT_5c98ba08;
          pdVar3 = pdVar3 + 1;
        } while (uVar4 != 0);
      }
      FUN_5c945630(this,local_108,param_2);
      if (param_2 != 0) {
        pdVar3 = local_108;
        uVar4 = param_2;
        piVar1 = local_114;
        do {
          if (_DAT_5c98b9f8 <= *pdVar3 * _DAT_5c98ba00) {
            if (*pdVar3 * _DAT_5c98ba00 <= _DAT_5c98b9f0) {
              iVar2 = ftol();
            }
            else {
              iVar2 = 0x7fffffff;
            }
          }
          else {
            iVar2 = -0x80000000;
          }
          *piVar1 = iVar2;
          pdVar3 = pdVar3 + 1;
          piVar1 = piVar1 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      local_114 = local_114 + param_2;
      local_110 = local_110 + -1;
    } while (local_110 != 0);
  }
  return 0;
}


