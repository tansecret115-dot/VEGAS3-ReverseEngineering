/* Module: sfcdi.dll
   Function: FUN_5bf42130
   Address: 5bf42130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf42130(int param_1,uint param_2,char *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return -(uint)(param_4 != 0);
  }
  if (param_4 == 0) {
    return 1;
  }
  uVar1 = 0;
  if (param_5 != 0) {
    iVar2 = param_1 - (int)param_3;
    do {
      if ((param_2 <= uVar1) || (param_4 <= uVar1)) break;
      if (param_3[iVar2] < *param_3) {
        return -1;
      }
      if (*param_3 < param_3[iVar2]) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      param_3 = param_3 + 1;
    } while (uVar1 < param_5);
  }
  if (param_2 != param_4) {
    return (-(uint)(param_2 < param_4) & 0xfffffffe) + 1;
  }
  return 0;
}


