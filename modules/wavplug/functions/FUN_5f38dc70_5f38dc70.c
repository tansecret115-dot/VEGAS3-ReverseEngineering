/* Module: wavplug.dll
   Function: FUN_5f38dc70
   Address: 5f38dc70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f38dc70(int param_1,undefined4 *param_2,uint param_3,int param_4)

{
  FUN_5f38ddc0(param_1);
  if (((param_4 == 2) && (param_2 != (undefined4 *)0x0)) && (7 < param_3)) {
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xd0) + 8);
    param_2[1] = 0;
    return 0;
  }
  return 1;
}


