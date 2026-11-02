/* Module: sftrans1.dll
   Function: FUN_004d95a0
   Address: 004d95a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d95a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;
  
  local_14 = 0;
  if (0 < param_2 * 4) {
    do {
      if (0 < param_4) {
        iVar1 = 0;
        pdVar2 = (double *)(param_5 + local_14 * 8);
        iVar3 = 0;
        do {
          local_10 = SUB84(*(double *)(iVar1 + local_14 * -8 + -0x20 + param_2 * 0x20 + param_6) +
                           *pdVar2 + _DAT_0056b158,0);
          local_10 = local_10 + -0x80000000;
          if (local_10 < 0) {
            local_10 = 0;
          }
          else if (0xff < local_10) {
            local_10 = 0xff;
          }
          iVar4 = iVar3 + 1;
          iVar1 = iVar1 + 8;
          pdVar2 = pdVar2 + 1;
          *(char *)(iVar3 + param_1) = (char)local_10;
          iVar3 = iVar4;
        } while (iVar4 < param_4);
      }
      local_14 = local_14 + 4;
      param_1 = param_1 + param_3;
    } while (local_14 < param_2 * 4);
  }
  return;
}


