/* Module: vegas30k.dll
   Function: FUN_010c2360
   Address: 010c2360
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010c2360(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,double param_8)

{
  short *psVar1;
  int iVar2;
  undefined2 uStack_17;
  undefined4 local_14;
  
  param_1 = param_1 + param_3 * 8;
  param_4 = param_4 + param_6 * 3;
  param_7 = param_7 + -1;
  if (-1 < param_7) {
    iVar2 = param_7 * 3;
    do {
      psVar1 = (short *)(iVar2 + param_4);
      iVar2 = iVar2 + -3;
      uStack_17 = (undefined2)((uint3)*(undefined3 *)psVar1 >> 8);
      local_14 = CONCAT22(uStack_17,*psVar1 << 8);
      param_4 = param_4 + param_5 * 3;
      *(double *)(param_1 + param_7 * 8) =
           (double)local_14 * _DAT_011db2c8 * param_8 + *(double *)(param_1 + param_7 * 8);
      param_1 = param_1 + param_2 * 8;
      param_7 = param_7 + -1;
    } while (-1 < param_7);
  }
  return;
}


