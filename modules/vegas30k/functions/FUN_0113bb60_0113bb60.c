/* Module: vegas30k.dll
   Function: FUN_0113bb60
   Address: 0113bb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0113bb60(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  FUN_0113b350(param_2);
  *param_1 = &PTR_FUN_011e6b84;
  param_1[1] = &PTR_LAB_011e6b3c;
  param_1[0x57] = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
    *(undefined4 **)(param_1[0x57] + 0x164) = param_1;
  }
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[5] = 1;
  lstrcpyW((LPWSTR)(param_1 + 6),L"Source Proxy");
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  return param_1;
}


