/* Module: vidcap30.exe
   Function: FUN_004cfb50
   Address: 004cfb50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004cfb50(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  param_1[4] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_LAB_0059a30c;
  param_1[1] = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  return param_1;
}


