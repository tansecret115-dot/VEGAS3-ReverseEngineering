/* Module: vegas30k.dll
   Function: FUN_011bbf40
   Address: 011bbf40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011bbf40(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  param_1[0x85] = param_2;
  *param_1 = &PTR_LAB_011eba4c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x86] = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  return param_1;
}


