/* Module: vidcap30.exe
   Function: FUN_0055b150
   Address: 0055b150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055b150(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  short *psVar2;
  double *pdVar3;
  undefined2 uStack_f;
  undefined4 local_c;
  
  if (param_4 == (float)_DAT_00587ad0) {
    iVar1 = param_3 + -1;
    if (-1 < iVar1) {
      psVar2 = (short *)(param_2 + iVar1 * 3);
      pdVar3 = (double *)(param_1 + iVar1 * 8);
      do {
        param_3 = param_3 + -1;
        local_c._0_2_ = *psVar2 << 8;
        uStack_f = (undefined2)((uint3)*(undefined3 *)psVar2 >> 8);
        local_c = CONCAT22(uStack_f,(short)local_c);
        *pdVar3 = (double)local_c * _DAT_0059a198;
        psVar2 = (short *)((int)psVar2 + -3);
        pdVar3 = pdVar3 + -1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    iVar1 = param_3 + -1;
    if (-1 < iVar1) {
      psVar2 = (short *)(param_2 + iVar1 * 3);
      pdVar3 = (double *)(param_1 + iVar1 * 8);
      do {
        param_3 = param_3 + -1;
        local_c._0_2_ = *psVar2 << 8;
        uStack_f = (undefined2)((uint3)*(undefined3 *)psVar2 >> 8);
        local_c = CONCAT22(uStack_f,(short)local_c);
        *pdVar3 = (double)local_c * _DAT_0059a198 * (double)param_4;
        psVar2 = (short *)((int)psVar2 + -3);
        pdVar3 = pdVar3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}


