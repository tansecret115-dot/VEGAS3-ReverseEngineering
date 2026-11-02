/* Module: vegas30k.dll
   Function: FUN_0100f8c0
   Address: 0100f8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0100f8c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 1;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_011db588;
  (**(code **)(*param_2 + 0x34))(param_2);
  (**(code **)(*(int *)param_1[2] + 4))((int *)param_1[2]);
  return param_1;
}


