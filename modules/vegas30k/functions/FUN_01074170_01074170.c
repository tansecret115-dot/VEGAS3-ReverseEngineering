/* Module: vegas30k.dll
   Function: FUN_01074170
   Address: 01074170
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01074170(int param_1,uint param_2,char *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return -(uint)(param_4 != 0);
  }
  if (param_4 == 0) {
    return 1;
  }
  uVar1 = 0;
  if (param_5 != 0) {
    param_1 = param_1 - (int)param_3;
    do {
      if ((param_2 <= uVar1) || (param_4 <= uVar1)) break;
      if (param_3[param_1] < *param_3) {
        return -1;
      }
      if (*param_3 < param_3[param_1]) {
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


