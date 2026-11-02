/* Module: vegas30k.dll
   Function: FUN_0107f960
   Address: 0107f960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0107f960(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  double *pdVar3;
  int iVar4;
  undefined2 uStack_f;
  undefined4 local_c;
  
  iVar4 = 0;
  iVar1 = param_3 + -1;
  if (-1 < iVar1) {
    psVar2 = (short *)(param_2 + iVar1 * 3);
    pdVar3 = (double *)(param_1 + iVar1 * 8);
    do {
      iVar4 = iVar4 + 1;
      uStack_f = (undefined2)((uint3)*(undefined3 *)psVar2 >> 8);
      local_c = CONCAT22(uStack_f,*psVar2 << 8);
      *pdVar3 = (double)local_c * _DAT_011db2c8 * *(double *)(param_5 + -8 + iVar4 * 8) + *pdVar3;
      if (param_4 == iVar4) {
        iVar4 = 0;
      }
      psVar2 = (short *)((int)psVar2 + -3);
      pdVar3 = pdVar3 + -1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


