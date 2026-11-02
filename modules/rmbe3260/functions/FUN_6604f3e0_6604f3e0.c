/* Module: rmbe3260.dll
   Function: FUN_6604f3e0
   Address: 6604f3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6604f3e0(int param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x14)) {
    *param_2 = 0;
    return 0x40012;
  }
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x14) * 4);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  (**(code **)(*(int *)*param_2 + 4))((int *)*param_2);
  return 0;
}


