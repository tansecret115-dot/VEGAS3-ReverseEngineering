/* Module: vegas30k.dll
   Function: FUN_0108c4d0
   Address: 0108c4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0108c4d0(undefined4 *param_1,int param_2,int param_3)

{
  if ((param_2 != 0) && (param_1 != (undefined4 *)0x0)) {
    if (param_3 == 0) {
      *(undefined4 *)(param_2 + 0x158) = *param_1;
      *(undefined4 *)(param_2 + 0x15c) = param_1[1];
      *(undefined4 *)(param_2 + 0x160) = param_1[2];
      *(undefined4 *)(param_2 + 0x164) = param_1[3];
      return 1;
    }
    *(undefined4 *)(param_2 + 0x168) = *param_1;
    *(undefined4 *)(param_2 + 0x16c) = param_1[1];
    *(undefined4 *)(param_2 + 0x170) = param_1[2];
    *(undefined4 *)(param_2 + 0x174) = param_1[3];
    return 1;
  }
  return 0;
}


