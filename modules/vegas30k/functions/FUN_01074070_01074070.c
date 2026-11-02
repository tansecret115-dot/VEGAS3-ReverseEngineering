/* Module: vegas30k.dll
   Function: FUN_01074070
   Address: 01074070
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01074070(int param_1,uint param_2,ushort *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return -(uint)(param_4 != 0);
  }
  if (param_4 == 0) {
    return 1;
  }
  uVar2 = 0;
  if (param_5 != 0) {
    param_1 = param_1 - (int)param_3;
    do {
      if ((param_2 <= uVar2) || (param_4 <= uVar2)) break;
      uVar1 = *(ushort *)(param_1 + (int)param_3);
      if (uVar1 < *param_3) {
        return -1;
      }
      if (uVar1 != *param_3) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 < param_5);
  }
  if (param_2 != param_4) {
    return (-(uint)(param_2 < param_4) & 0xfffffffe) + 1;
  }
  return 0;
}


