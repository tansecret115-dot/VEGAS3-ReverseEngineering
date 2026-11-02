/* Module: wavplug.dll
   Function: FUN_5f392630
   Address: 5f392630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f392630(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  FUN_5f392780(param_1);
  if (((param_4 == 2) && (param_2 != (undefined4 *)0x0)) && (7 < param_3)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8);
    param_2[1] = 0;
    return 0;
  }
  return 1;
}


