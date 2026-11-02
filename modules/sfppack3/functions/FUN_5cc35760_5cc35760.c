/* Module: sfppack3.dll
   Function: FUN_5cc35760
   Address: 5cc35760
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_5cc35760(void *this,short *param_1,uint param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  double *pdVar4;
  uint uVar5;
  short *local_118;
  int local_114;
  double local_108 [32];
  
  local_118 = param_1;
  if (param_3 != 0) {
    local_114 = param_3;
    do {
      if (param_2 != 0) {
        psVar2 = local_118;
        pdVar4 = local_108;
        uVar5 = param_2;
        do {
          sVar1 = *psVar2;
          psVar2 = psVar2 + 1;
          uVar5 = uVar5 - 1;
          *pdVar4 = (double)(int)sVar1 * _DAT_5cc87d78;
          pdVar4 = pdVar4 + 1;
        } while (uVar5 != 0);
      }
      FUN_5cc34f70(this,local_108,param_2);
      psVar2 = local_118;
      for (uVar5 = param_2; uVar5 != 0; uVar5 = uVar5 - 1) {
        iVar3 = ftol();
        if (iVar3 < -0x8000) {
          iVar3 = -0x8000;
        }
        else if (0x7fff < iVar3) {
          iVar3 = 0x7fff;
        }
        *psVar2 = (short)iVar3;
        psVar2 = psVar2 + 1;
      }
      local_118 = local_118 + param_2;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
  }
  return 0;
}


