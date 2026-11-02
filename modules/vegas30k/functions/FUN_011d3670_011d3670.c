/* Module: vegas30k.dll
   Function: FUN_011d3670
   Address: 011d3670
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011d3670(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  param_1[7] = param_3;
  *param_1 = &PTR_LAB_011ec634;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  if ((undefined4 *)param_1[7] == (undefined4 *)0x0) {
    param_1[3] = 0;
    return param_1;
  }
  param_1[3] = *(undefined4 *)param_1[7];
  return param_1;
}


