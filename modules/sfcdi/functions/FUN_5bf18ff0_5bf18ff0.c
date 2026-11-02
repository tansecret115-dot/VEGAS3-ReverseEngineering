/* Module: sfcdi.dll
   Function: FUN_5bf18ff0
   Address: 5bf18ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf18ff0(int param_1,uint param_2,short *param_3,uint param_4,uint param_5)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = (param_4 >> 1) + param_5 * -2;
  if (uVar4 != 0) {
    param_4 = (param_1 + ((param_2 >> 1) + param_5 * -2) * 2) - (int)param_3;
    do {
      uVar2 = 0;
      psVar1 = param_3;
      if ((param_5 & 0x7fffffff) == 0) {
LAB_5bf19059:
        return uVar3 * 2;
      }
      while (*(short *)(param_4 + (int)psVar1) == *psVar1) {
        psVar1 = psVar1 + 2;
        uVar2 = uVar2 + 1;
        if ((param_5 & 0x7fffffff) <= uVar2) goto LAB_5bf19059;
      }
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
      param_4 = param_4 - 2;
    } while (uVar3 < uVar4);
  }
  return -1;
}


