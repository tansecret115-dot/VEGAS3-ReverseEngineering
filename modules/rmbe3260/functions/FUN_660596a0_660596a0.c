/* Module: rmbe3260.dll
   Function: FUN_660596a0
   Address: 660596a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_660596a0(int param_1,uint param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  uint local_c [2];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(local_c);
  if (iVar2 < 0) {
    return 0x8007000e;
  }
  if (param_2 <= local_c[0]) {
    if (param_3 != 0) {
      puVar3 = (undefined2 *)(param_4 + -2 + param_3 * 4);
      puVar1 = (undefined2 *)(param_4 + -2 + param_3 * 2);
      for (; param_3 != 0; param_3 = param_3 + -1) {
        *puVar3 = *puVar1;
        puVar3[-1] = *puVar1;
        puVar3 = puVar3 + -2;
        puVar1 = puVar1 + -1;
      }
      return 0;
    }
    return 0x40042;
  }
  return 0x8004000d;
}


